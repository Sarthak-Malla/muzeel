from seleniumwire import webdriver
from selenium.webdriver import ChromeOptions
from browser_interaction_bot.event_handling.BrowserInteractions import BrowserInteractions
import sys

proxy_port = sys.argv[1]
# filename = sys.argv[2]
url = sys.argv[2]

chrome_options = ChromeOptions()
mobile_emulation = { "deviceName": "iPhone X" }
chrome_options.add_experimental_option("mobileEmulation", mobile_emulation)
chrome_options.add_argument("--ignore-certificate-errors")
chrome_options.add_argument("--no-sandbox")
chrome_options.add_argument("--disable-popup-blocking")
chrome_options.add_argument("--headless")
output_file = open("scrape_results_clone", "a")
error_file = open("error_log_clone", "a")

seleniumwire_options = {
    'proxy': {
        'http': 'http://127.0.0.1:{}'.format(proxy_port),
        'https': 'https://127.0.0.1:{}'.format(proxy_port),
        'no_proxy': 'localhost,127.0.0.1'
    }
}


# with open(filename, "r") as scrape_list:
    # for in_i, url in enumerate(scrape_list.read().split("\n")):
        # print("Running",in_i, url)

driver = webdriver.Chrome(options=chrome_options, seleniumwire_options=seleniumwire_options)

def interceptor(request):
    request.headers['init_url'] = url
    request.headers['solution'] = "original"

driver.request_interceptor = interceptor

try:
    BrowserInteractions.open_page(driver, url)
    BrowserInteractions.scroll_to_bottom(driver)

    img_count = 0
    for request in driver.requests:
        if request.response:
            if request.response.headers['Content-Type'] and "image" in request.response.headers['Content-Type'].split(";")[0].lower():
                img_count += 1

    driver.close()
    driver.quit()
    output_file.write("{}, {}\n".format(url, img_count))
    output_file.flush()
except Exception as e:
    driver.close()
    driver.quit()
    error_file.write("{}, {}\n".format(url, e))
    error_file.flush()

output_file.close()
error_file.close()
