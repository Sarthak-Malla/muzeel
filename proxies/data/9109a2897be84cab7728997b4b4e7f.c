/*
	Theme Name: DailyTimes V2
	Theme URI: https://www.network780.com/
	Description: Custom DailyTimes Theme
	Author: Saqib Rizwan
	Author URI: https://www.network780.com/
	Version: 1.0

	Template: genesis
	Text Domain: dt-v2

*/

/* Table of Contents
	- HTML5 Reset
		- Baseline Normalize
		- Box Sizing
		- Float Clearing
	- Defaults
		- Typographical Elements
		- Headings
		- Objects
		- Gallery
		- Forms
		- Tables
		- Screen Reader Text
	- Structure and Layout
		- Site Containers
		- Column Widths and Positions
		- Column Classes
	- Common Classes
		- WordPress
		- Genesis
		- Titles
	- Widgets
		- Featured Content
	- Plugins
		- Genesis eNews Extended
		- Genesis Latest Tweets
		- Genesis Responsive Slider
		- Genesis Tabs
		- Jetpack
		- Simple Social Icons
	- Skip Links
	- Site Header
		- Title Area
		- Widget Area
	- Site Navigation
		- Header Navigation
		- Primary Navigation
		- Secondary Navigation
		- Accessible Menu
	- Content Area
		- Home Page
		- Entries
		- Pagination
		- Comments
	- Sidebars
	- Footer Widgets
	- Site Footer
	- Theme Colors
		- News Pro Blue
		- News Pro Green
		- News Pro Pink
		- News Pro Orange
	- Media Queries
		- max-width: 1188px
		- max-width: 1023px
		- max-width: 600px
*/


/* HTML5 Reset
---------------------------------------------------------------------------------------------------- */

/* Baseline Normalize
--------------------------------------------- */
/* normalize.css v4.1.1 | MIT License | http://necolas.github.io/normalize.css/ */

html{font-family:'Roboto', serif;-ms-text-size-adjust:100%;-webkit-text-size-adjust:100%}body{margin:0}article,aside,details,figcaption,figure,footer,header,main,menu,nav,section,summary{display:block}audio,canvas,progress,video{display:inline-block}audio:not([controls]){display:none;height:0}progress{vertical-align:baseline}template,[hidden]{display:none}a{background-color:transparent;-webkit-text-decoration-skip:objects}a:active,a:hover{outline-width:0}abbr[title]{border-bottom:none;text-decoration:underline;text-decoration:underline dotted}b,strong{font-weight:inherit}b,strong{font-weight:bolder}dfn{font-style:italic}h1{font-size:2em;margin:0.67em 0}mark{background-color:#ff0;color:#000}small{font-size:80%}sub,sup{font-size:75%;line-height:0;position:relative;vertical-align:baseline}sub{bottom:-0.25em}sup{top:-0.5em}img{border-style:none}svg:not(:root){overflow:hidden}code,kbd,pre,samp{font-family:monospace, monospace;font-size:1em}figure{margin:1em 40px}hr{box-sizing:content-box;height:0;overflow:visible}button,input,optgroup,select,textarea{font:inherit;margin:0}optgroup{font-weight:bold}button,input{overflow:visible}button,select{text-transform:none}button,html [type="button"],[type="reset"],[type="submit"]{-webkit-appearance:button}button::-moz-focus-inner,[type="button"]::-moz-focus-inner,[type="reset"]::-moz-focus-inner,[type="submit"]::-moz-focus-inner{border-style:none;padding:0}button:-moz-focusring,[type="button"]:-moz-focusring,[type="reset"]:-moz-focusring,[type="submit"]:-moz-focusring{outline:1px dotted ButtonText}fieldset{border:1px solid #c0c0c0;margin:0 2px;padding:0.35em 0.625em 0.75em}legend{box-sizing:border-box;color:inherit;display:table;max-width:100%;padding:0;white-space:normal}textarea{overflow:auto}[type="checkbox"],[type="radio"]{box-sizing:border-box;padding:0}[type="number"]::-webkit-inner-spin-button,[type="number"]::-webkit-outer-spin-button{height:auto}[type="search"]{-webkit-appearance:textfield;outline-offset:-2px}[type="search"]::-webkit-search-cancel-button,[type="search"]::-webkit-search-decoration{-webkit-appearance:none}::-webkit-input-placeholder{color:inherit;opacity:0.54}::-webkit-file-upload-button{-webkit-appearance:button;font:inherit}

/* Box Sizing
--------------------------------------------- */

html,
input[type="search"]{
	-webkit-box-sizing: border-box;
	-moz-box-sizing:    border-box;
	box-sizing:         border-box;
}

*,
*:before,
*:after {
	box-sizing: inherit;
}


/* Float Clearing
--------------------------------------------- */

.author-box:before,
.clearfix:before,
.entry:before,
.entry-content:before,
.footer-widgets:before,
.nav-primary:before,
.nav-secondary:before,
.pagination:before,
.site-container:before,
.site-footer:before,
.site-header:before,
.site-inner:before,
.widget:before,
.wrap:before {
	content: " ";
	display: table;
}

.author-box:after,
.clearfix:after,
.entry:after,
.entry-content:after,
.footer-widgets:after,
.nav-primary:after,
.nav-secondary:after,
.pagination:after,
.site-container:after,
.site-footer:after,
.site-header:after,
.site-inner:after,
.widget:after,
.wrap:after {
	clear: both;
	content: " ";
	display: table;
}


/* Defaults
---------------------------------------------------------------------------------------------------- */

/* Typographical Elements
--------------------------------------------- */

html {
	font-size: 62.5%; /* 10px browser default */
}

/* Chrome fix */
body > div {
	font-size: 1.6rem;
}

body {
	background-color: #fff;
	color: #252324;
	font-family: 'Roboto', sans-serif;
	font-size: 16px;
	font-size: 1.6rem;
	font-weight: 400;
	line-height: 1.625;
}
nav {
	font-family:'Roboto', sans-serif;
}
a,
button,
input:focus,
input[type="button"],
input[type="reset"],
input[type="submit"],
textarea:focus,
.button {
	-webkit-transition: all 0.1s ease-in-out;
	-moz-transition:    all 0.1s ease-in-out;
	-ms-transition:     all 0.1s ease-in-out;
	-o-transition:      all 0.1s ease-in-out;
	transition:         all 0.1s ease-in-out;
}

::-moz-selection {
	background-color: #000;
	color: #fff;
}

::selection {
	background-color: #000;
	color: #fff;
}

a {
	color: #000;
	text-decoration: none;
}

a img {
	margin-bottom: -4px;
}

a:focus,
a:hover {
	color: #999;
}

p {
	margin: 0 0 24px;
	padding: 0;
}

strong {
	font-weight: 700;
}

ol,
ul {
	margin: 0;
	padding: 0;
}

mark {
	background: #ddd;
	color: #000;
}

blockquote,
blockquote::after {
	color: #999;
}

blockquote {
    padding: 15px 70px 5px 30px;
    border-top: 2px solid #336799;
    background: #F8F8F8;
    margin: 0 0 10px;
    color: #000;
    /* font-weight: 700; */
    font-size: 2.0rem;
	position:relative;
	font-style:italic;
}
blockquote::after {
    content: "\201D";
    display: block;
    height: 0;
	font-size: 120px;
    right: 10px;
    position: absolute;
    top: 8px;
	width: 60px;
    height: 60px;
    line-height: 1;
}


.entry-content code {
	background-color: #333;
	color: #ddd;
}

cite {
	font-style: normal;
}

hr {
	border: 0;
	border-collapse: collapse;
	border-bottom: 1px solid #e3e3e3;
	clear: left;
	margin: 0 0 5px;
	padding-top: 20px;
}

/* Headings
--------------------------------------------- */

h1,
h2,
h3,
h4,
h5,
h6 {
	color: #000;
	font-weight: 700;
	line-height: 1.2;
	margin: 0 0 16px;
}

h1 {
	font-size: 36px;
	font-size: 3.6rem;
}

h2 {
	font-size: 30px;
	font-size: 3rem;
}

h3 {
	font-size: 24px;
	font-size: 2.4rem;
}

h4 {
	font-size: 20px;
	font-size: 2rem;
}

h5 {
	font-size: 18px;
	font-size: 1.8rem;
}

h6 {
	font-size: 16px;
	font-size: 1.6rem;
}

/* Objects
--------------------------------------------- */

embed,
iframe,
img,
object,
video,
.wp-caption {
	max-width: 100%;
}

img {
	height: auto;
}

/* Gallery
--------------------------------------------- */

.gallery {
	overflow: hidden;
	margin-bottom: 28px;
}

.gallery-item {
	float: left;
	margin: 0;
	padding: 0 4px;
	text-align: center;
	width: 100%;
}

.gallery-columns-2 .gallery-item {
	width: 50%;
}

.gallery-columns-3 .gallery-item {
	width: 33%;
}

.gallery-columns-4 .gallery-item {
	width: 25%;
}

.gallery-columns-5 .gallery-item {
	width: 20%;
}

.gallery-columns-6 .gallery-item {
	width: 16.6666%;
}

.gallery-columns-7 .gallery-item {
	width: 14.2857%;
}

.gallery-columns-8 .gallery-item {
	width: 12.5%;
}

.gallery-columns-9 .gallery-item {
	width: 11.1111%;
}

.gallery-columns-2 .gallery-item:nth-child(2n+1),
.gallery-columns-3 .gallery-item:nth-child(3n+1),
.gallery-columns-4 .gallery-item:nth-child(4n+1),
.gallery-columns-5 .gallery-item:nth-child(5n+1),
.gallery-columns-6 .gallery-item:nth-child(6n+1),
.gallery-columns-7 .gallery-item:nth-child(7n+1),
.gallery-columns-8 .gallery-item:nth-child(8n+1),
.gallery-columns-9 .gallery-item:nth-child(9n+1) {
	clear: left;
}

.gallery .gallery-item img {
	border: none;
	height: auto;
	margin: 0;
}

/* Forms
--------------------------------------------- */

input,
select,
textarea {
	background-color: #fff;
	border: 1px solid #e3e3e3;
	box-shadow: 1px 1px 3px #eee inset;
	color: #999;
	font-size: 14px;
	font-size: 1.4rem;
	padding: 16px;
	width: 100%;
}

input[type="checkbox"],
input[type="radio"],
input[type="image"] {
	width: auto;
}

input:focus,
textarea:focus {
	border: 1px solid #999;
	outline: none;
}

::-moz-placeholder {
	color: #999;
	opacity: 1;
}

::-webkit-input-placeholder {
	color: #999;
}

button,
input[type="button"],
input[type="reset"],
input[type="submit"],
.button,
.entry-content .button {
	background-color: #000;
	border: none;
	border-radius: 3px;
	box-shadow: none;
	color: #fff;
	cursor: pointer;
	font-size: 14px;
	font-size: 1.4rem;
	line-height: 1;
	padding: 16px;
	text-transform: uppercase;
	white-space: normal;
	width: auto;
}

button:focus,
input:focus[type="button"],
input:focus[type="reset"],
input:focus[type="submit"],
.button:focus,
.entry-content .button:focus,
button:hover,
input:hover[type="button"],
input:hover[type="reset"],
input:hover[type="submit"],
.button:hover,
.entry-content .button:hover {
	background-color: #ff0000;
	color: #fff;
}

button.small,
input[type="button"].small,
input[type="reset"].small,
input[type="submit"].small,
.button.small {
	padding: 8px 12px;
}

.button {
	display: inline-block;
}

.site-container button:disabled,
.site-container button:disabled:hover,
.site-container input:disabled,
.site-container input:disabled:hover,
.site-container input[type="button"]:disabled,
.site-container input[type="button"]:disabled:hover,
.site-container input[type="reset"]:disabled,
.site-container input[type="reset"]:disabled:hover,
.site-container input[type="submit"]:disabled,
.site-container input[type="submit"]:disabled:hover {
    background-color: #ddd;
	border-width: 0;
    color: #565656;
    cursor: not-allowed;
}

input[type="search"]::-webkit-search-cancel-button,
input[type="search"]::-webkit-search-results-button {
	display: none;
}

.error404 .entry-content input[type="search"],
.post-password-form input[type="password"] {
	margin-bottom: 15px;
}

/* Tables
--------------------------------------------- */

table {
	border-collapse: collapse;
	border-spacing: 0;
	line-height: 2;
	margin-bottom: 40px;
	width: 100%;
}

tbody {
	border-bottom: 1px solid #ddd;
}

th,
td {
	text-align: left;
}

th {
	font-weight: bold;
	text-transform: uppercase;
}

td {
	border-top: 1px solid #ddd;
	padding: 6px 0;
}

/* Screen Reader Text
--------------------------------------------- */

.screen-reader-shortcut,
.screen-reader-text,
.screen-reader-text span {
	border: 0;
	clip: rect(0, 0, 0, 0);
	height: 1px;
	overflow: hidden;
	position: absolute !important;
	width: 1px;
	word-wrap: normal !important;
}

.genesis-nav-menu .search input[type="submit"]:focus,
.screen-reader-shortcut:focus,
.screen-reader-text:focus,
.widget_search input[type="submit"]:focus {
	clip: auto !important;
	display: block;
	font-size: 1em;
	font-weight: bold;
	height: auto;
	padding: 20px 23px;
	text-decoration: none;
	width: auto;
	z-index: 100000; /* Above WP toolbar. */
}

.more-link {
	position: relative;
}

.screen-reader-shortcut:focus,
.screen-reader-text:focus {
	background-color: #fff;
}


/* Structure and Layout
---------------------------------------------------------------------------------------------------- */

/* Site Containers
--------------------------------------------- */

.site-container-wrap {
	background-color: #fff;
	margin: 0 auto;
	max-width: 1200px;
}

.news-pro-landing .site-container-wrap {
	max-width: 960px;
}

.site-inner {
	clear: both;
	border-bottom:3px solid #e3e3e3;
	padding:20px;
}

/* Column Widths and Positions
--------------------------------------------- */

/* Wrapping div for .content and .sidebar-primary */

.content-sidebar-sidebar .content-sidebar-wrap,
.sidebar-content-sidebar .content-sidebar-wrap,
.sidebar-sidebar-content .content-sidebar-wrap {
	width: 960px;
}

.content-sidebar-sidebar .content-sidebar-wrap {
	float: left;
}

.sidebar-content-sidebar .content-sidebar-wrap,
.sidebar-sidebar-content .content-sidebar-wrap {
	float: right;
}

/* Content */

.content {
	float: right;
	width:67%;
	max-width: 775px;
}

.content-sidebar .content,
.content-sidebar-sidebar .content {

	float: left;
}

.sidebar-content-sidebar .content {
	border-left: 1px solid #e3e3e3;
	border-right: 1px solid #e3e3e3;
	float: left;
}

.sidebar-content .content,
.sidebar-sidebar-content .content {
	border-left: 1px solid #e3e3e3;
}

.content-sidebar-sidebar .content,
.sidebar-content-sidebar .content,
.sidebar-sidebar-content .content {
	width: 600px;
}

.full-width-content .content {
	width: 100%;
	max-width:100%;
}

/* Primary Sidebar */

.sidebar-primary {
	float: right;
	width: 310px;
	margin:0;
}

.sidebar-content .sidebar-primary,
.sidebar-sidebar-content .sidebar-primary {
	float: left;
}

.sidebar-sidebar-content .sidebar-primary {
	border-left: 1px solid #e3e3e3;
}

.content-sidebar-sidebar .sidebar-primary {
	border-right: 1px solid #e3e3e3;
}
.sidebar-primary a.alignleft {
	width:80px;
	height:80px;
	background:#e2e2e2;
	overflow:hidden;
	margin:0 10px;
}
.sidebar-primary h4.entry-title {
	font-size:14px;
	font-size:1.4rem;
}
/* Secondary Sidebar */

.sidebar-secondary {
	float: left;
	font-size: 14px;
	font-size: 1.4rem;
	width: 177px;
}

.content-sidebar-sidebar .sidebar-secondary {
	float: right;
}


/* Column Classes
--------------------------------------------- */
/* Link: http://twitter.github.io/bootstrap/assets/css/bootstrap-responsive.css */

.five-sixths,
.four-sixths,
.one-fourth,
.one-half,
.one-sixth,
.one-third,
.three-fourths,
.three-sixths,
.two-fourths,
.two-sixths,
.two-thirds {
	float: left;
	margin-left: 2.564102564102564%;
}

.one-half,
.three-sixths,
.two-fourths {
	width: 48.717948717948715%;
}

.one-third,
.two-sixths {
	width: 31.623931623931625%;
}

.four-sixths,
.two-thirds {
	width: 65.81196581196582%;
}

.one-fourth {
	width: 23.076923076923077%;
}

.three-fourths {
	width: 74.35897435897436%;
}

.one-sixth {
	width: 14.52991452991453%;
}

.five-sixths {
	width: 82.90598290598291%;
}

.first {
	clear: both;
	margin-left: 0;
}


/* Common Classes
---------------------------------------------------------------------------------------------------- */

/* WordPress
--------------------------------------------- */

.avatar {
	border-radius: 50%;
	float: left;
}

.alignleft .avatar {
	margin-right: 24px;
}

.alignright .avatar {
	margin-left: 24px;
}

.search-form {
	overflow: hidden;
	position: relative;
}

.genesis-nav-menu .search input[type="submit"],
.widget_search input[type="submit"] {
	border: 0;
	clip: rect(0, 0, 0, 0);
	height: 1px;
	margin: -1px;
	padding: 0;
	position: absolute;
	right: 0;
	top: 0;
	width: 1px;
}

a.aligncenter img {
	display: block;
	margin: 0 auto;
}

img.centered,
.aligncenter {
	display: block;
	margin: 0 auto 20px;
}

a.alignnone,
img.alignnone {
	margin-bottom: 20px;
}

.alignleft {
	float: left;
	text-align: left;
}

.alignright {
	float: right;
	text-align: right;
}

a.alignleft,
a.alignnone,
a.alignright {
	max-width: 100%;
}

a.alignnone {
	display: inline-block;
}

a.alignleft,
img.alignleft,
.wp-caption.alignleft {
	margin: 0 24px 16px 0;
}

a.alignright,
img.alignright,
.wp-caption.alignright {
	margin: 0 0 24px 16px;
}

.entry-content .wp-caption-text {
	font-size: 14px;
	font-size: 1.4rem;
	font-weight: 700;
	margin-bottom: 0;
	text-align: center;
}

.gallery-caption,
.entry-content .gallery-caption {
	margin: 0 0 10px;
}

.widget_calendar table {
	width: 100%;
}

.widget_calendar td,
.widget_calendar th {
	text-align: center;
}

.wp-audio-shortcode,
.wp-playlist,
.wp-video {
	margin: 0 0 28px;
}

/* Genesis
--------------------------------------------- */

.breadcrumb {
	background-color: #f3f3f3;
	border-bottom: 1px solid #e3e3e3;
	font-size: 12px;
	font-size: 1.2rem;
	margin: 0;
	padding: 20px;
	text-transform: uppercase;
}

.archive-description,
.author-box {
	/*background-color: #f3f3f3;*/
	border-bottom: 1px solid #e3e3e3;
	margin: 0;
	overflow: hidden;
	padding: 0;
}

.archive-title + p {
	margin-top: 24px;
}

.author-box-title {
	color: #000;
	font-size: 16px;
	font-size: 1.6rem;
	margin-bottom: 4px;
}

.author-box p {
	margin-bottom: 0;
}

.author-box .avatar {
	margin-right: 24px;
}

/* Titles
--------------------------------------------- */

.entry-title {
	font-size: 36px;
	font-size: 3.6rem;
	line-height: 3.6rem;
}

.entry-title a,
.sidebar .widget-title a {
	color: #000;
}

.entry-title a:focus,
.entry-title a:hover {
	color: #ff0000;
}

.widget-title {

	border-bottom: 1px solid #e3e3e3;
	color: #000;
	font-size: 14px;
	font-size: 1.4rem;
	font-weight: 400;
	margin-bottom: 24px;
	padding: 16px;
	text-align: center;
	text-transform: uppercase;
}

.archive-title {
	font-size: 20px;
	font-size: 2rem;
	margin-bottom: 0;
}


/* Widgets
---------------------------------------------------------------------------------------------------- */

.widget {
	word-wrap: break-word;
}

.ad {
	margin: 0 4px;
}

/* Featured Content
--------------------------------------------- */

.featured-content .entry {
	margin-bottom: 5px;
	padding: 0;
	border-bottom:1px dashed #e2e2e2;
}

.featured-content .entry-title {
	font-size: 20px;
	font-size: 1.6rem;
	line-height: 1.6;
}

.featured-content p {
	margin-bottom: 20px;
}


/* Plugins
---------------------------------------------------------------------------------------------------- */

/* Genesis eNews Extended
--------------------------------------------- */

.enews-widget input {
	margin-bottom: 16px;
}

.enews-widget input:focus {
	border: 1px solid #ddd;
}

.enews-widget input[type="submit"] {
	background-color: #ff0000;
	color: #fff;
	margin: 0;
	width: 100%;
}

.enews-widget input:focus[type="submit"],
.enews-widget input:hover[type="submit"] {
	background-color: #f5f5f5;
	color: #000;
}

.enews form + p {
	margin-top: 20px;
}

.sidebar .widget.enews-widget {
	background-color: #000;
	color: #999;
}

.sidebar .enews-widget .widget-title {
	color: #fff;
}

/* Genesis Latest Tweets
--------------------------------------------- */

.latest-tweets ul li {
	margin-bottom: 16px;
}

/* Genesis Responsive Slider
--------------------------------------------- */

.news-pro-home .content #genesis-responsive-slider,
.news-pro-home .content .genesis_responsive_slider li {
	border: none;
}

.news-pro-home .content .genesis_responsive_slider li:before {
	content: "";
	margin: 0;
}

.news-pro-home .content .genesis_responsive_slider .slide-excerpt,
.news-pro-home .content .genesis_responsive_slider .slide-excerpt-border  {
	background: transparent;
	border: none;
	margin: 0;
}

.news-pro-home .content .genesis_responsive_slider .slide-excerpt {
	padding: 24px;
}

.news-pro-home .content #genesis-responsive-slider,
.news-pro-home .content .genesis_responsive_slider .slides li,
.news-pro-home .content .genesis_responsive_slider .flex-direction-nav li {
	margin: 0;
	padding: 0;
}

.news-pro-home .content .genesis_responsive_slider .flex-control-nav {
	line-height: 1;
	margin-top: -30px;
}

.news-pro-home .content .genesis_responsive_slider .flex-control-nav li {
	margin-bottom: 0;
	padding-bottom: 0;
}

.news-pro-home .content .genesis_responsive_slider .flex-direction-nav li a {
	-webkit-transition: none;
	-moz-transition:    none;
	-ms-transition:     none;
	-o-transition:      none;
	transition:         none;
}

.news-pro-home .content .genesis_responsive_slider h2 a {
	background: rgba( 0, 0, 0, 0.8 );
	color: #fff;
	display: inline-block;
	font-weight: 400;
	line-height: 1.2;
	padding: 16px;
	position: relative;
	z-index: 9;
}

.news-pro-home .content .genesis_responsive_slider a:focus,
.news-pro-home .content .genesis_responsive_slider a:hover {
	color: #fff;
}

.news-pro-home .content .genesis_responsive_slider p {
	background: rgba( 0, 0, 0, 0.8 );
	color: #fff;
	font-size: 14px;
	font-size: 1.4rem;
	margin: 0;
	padding: 12px 24px;
	position: relative;
	z-index: 9;
}

.news-pro-home .content .genesis_responsive_slider .flex-direction-nav li a {
	background: url(images/icon-direction-nav.png) no-repeat -50px 0;
	background-size: 100px 98px;
	height: 49px;
	outline: none;
	right: -25px;
	-webkit-transition: none;
	-moz-transition:    none;
	-ms-transition:     none;
	-o-transition:      none;
	transition:         none;
	width: 50px;
}

.news-pro-home .content .genesis_responsive_slider .flex-direction-nav li a:focus,
.news-pro-home .content .genesis_responsive_slider .flex-direction-nav li a:hover {
	background-position: -50px -49px;
}

.news-pro-home .content .genesis_responsive_slider .flex-direction-nav li a.prev {
	background-position: 0 0;
	bottom: 10px;
	left: auto;
	right: 62px;
	top: auto;
}

.news-pro-home .content #genesis-responsive-slider .flex-direction-nav li a.next {
	bottom: 10px;
	left: auto;
	right: 10px;
	top: auto;
}

.news-pro-home .content #genesis-responsive-slider .flex-direction-nav li a:focus.prev,
.news-pro-home .content #genesis-responsive-slider .flex-direction-nav li a:hover.prev {
	background-position: 0 -49px;
}

/* Genesis Tabs
--------------------------------------------- */

.home-top .widget.ui-tabs .entry {
	background: none;
	border: none;
	color: #fff;
	margin: 0;
	overflow: hidden;
	padding: 0;
	min-height: 400px;
}

.home-top .widget.ui-tabs .entry h2 a {
	background: rgba( 0, 0, 0, 0.8 );
	display: inline-block;
	font-weight: 400;
	line-height: 1.2;
	padding: 16px;
	position: relative;
	z-index: 9;
}

.home-top .widget.ui-tabs .entry p {
	background: rgba( 0, 0, 0, 0.8 );
	font-size: 14px;
	font-size: 1.4rem;
	margin: 0 24px;
	padding: 12px 24px;
	position: relative;
	z-index: 9;
}

.home-top .widget.ui-tabs .entry h2 {
	margin: 0;
	padding: 24px 24px 8px;
}

.home-top .widget.ui-tabs {
	position: relative;
}

.home-top .ui-tabs ul.ui-tabs-nav {
	bottom: 40px;
	margin: 0 0 0 40px;
	position: absolute;
	right: 40px;
	z-index: 9;
}

.home-top .ui-tabs ul.ui-tabs-nav li {
	border: none;
	margin: 0;
}

.home-top .ui-tabs ul.ui-tabs-nav li::before {
	display: none;
}

.home-top .ui-tabs ul.ui-tabs-nav li a {
	background-color: #000;
	color: #fff;
	display: inline-block;
}

.home-top .ui-tabs ul.ui-tabs-nav li.ui-tabs-active a {
	background-color: #ff0000;
}

.home-top .ui-tabs ul.ui-tabs-nav li.ui-tabs-active a:focus,
.home-top .ui-tabs ul.ui-tabs-nav li.ui-tabs-active a:hover {
	background-color: #fff;
	color: #000;
}

.home-top .widget.ui-tabs img {
	position: absolute;
}

.home-top .widget.ui-tabs a {
	color: #fff;
}

.widget.ui-tabs ul.ui-tabs-nav li:before {
	content: "";
	margin: 0;
}

/* Jetpack
--------------------------------------------- */

img#wpstats {
	display: none;
}

/* Simple Social Icons
--------------------------------------------- */

.simple-social-icons ul li:before {
	display: none;
}


/* Skip Links
---------------------------------------------------------------------------------------------------- */

.genesis-skip-link {
	margin: 0;
}

.genesis-skip-link li {
	height: 0;
	width: 0;
	list-style: none;
}

/* Display outline on focus */
:focus {
	color: #333;
	outline: #ccc solid 1px;
}


/* Site Header
---------------------------------------------------------------------------------------------------- */

.site-header {
	background-color: #fff;
}

.site-header .wrap {
	padding:0;
	height:100px;
}

/* Title Area
--------------------------------------------- */

.title-area {
	width: 420px;
	margin:0 auto;
	overflow:hidden;
}

.site-title {
	font-weight: 700;
	font-size: 48px;
	font-size: 4.8rem;
	font-weight: 700;
	line-height: 1;
	margin: 0;
	text-transform: uppercase;
}

.site-title a,
.site-title a:focus,
.site-title a:hover {
	color: #000;
}

.site-description {
	font-family:'Lato', sans-serif;
	color: #999;
	font-size: 16px;
	font-size: 1.6rem;
	font-weight: 400;
	margin:0;
	padding:0;
	position:relative;
	bottom:37px;
	padding-left:18px;
	text-align:left;
}
.site-description .desc {

}
.site-description .date {
	padding-left:35px;
}
/* Full width header, no widgets */

.header-full-width .title-area {
	padding: 0;
	text-align: center;
	margin-top:37px;
}

.header-full-width .title-area,
.header-full-width .site-title {
	width: 440px;
	height:100px;
	/*margin:14px auto 0;*/
}

.header-image .site-title a {
	display: block;
	text-indent: -9999px;
}

/* Logo, hide text */

.header-image .site-title a {
	background-position: top left !important;
	background-size: contain !important;
	float: left;
	min-height: 84px;
	width: 100%;
}


/* Widget Area
--------------------------------------------- */

.widget-area {
	word-wrap: break-word;
}

.site-header .widget-area {
	margin:0;
	width: 320px;
	height: 100px;
	overflow: hidden;
	text-align:center;

}
.site-header .header-left {
	float: left;
}
.site-header .header-right {
	float: right;
}


.site-header .widget-area li {
	list-style-type: none;
}

.site-header .search-form {
	float: right;
	margin-top: 24px;
}


/* Site Navigation
---------------------------------------------------------------------------------------------------- */

.genesis-nav-menu {
	clear: both;
	color: #000;
	font-size: 12px;
	font-size: 1.2rem;
	font-weight: 700;
	line-height: 1.5;
	width: 100%;
}

.genesis-nav-menu .menu-item {
	display: inline-block;
	text-align: left;
	margin-right: -4px;
}

.genesis-nav-menu a {
	color: #000;
	display: block;
	padding: 15px 21px 10px;
	height:46px;
	margin-bottom: -3px;

}

.genesis-nav-menu a:focus, .genesis-nav-menu a:hover, .genesis-nav-menu .current-menu-item>a {
    border-bottom: 3px solid #000;
    position: relative;


}

.genesis-nav-menu > .menu-item > a {
	text-transform: uppercase;
}

.genesis-nav-menu .sub-menu {
	left: -9999px;
	opacity: 0;
	position: absolute;
	-webkit-transition: opacity .4s ease-in-out;
	-moz-transition:    opacity .4s ease-in-out;
	-ms-transition:     opacity .4s ease-in-out;
	-o-transition:      opacity .4s ease-in-out;
	transition:         opacity .4s ease-in-out;
	width: 200px;
	z-index: 99;
	margin-bottom: 0;
}

.genesis-nav-menu .sub-menu a {
	background-color: #fff;
  	border: none;
	padding: 12px 24px;
	position: relative;
	width: 200px;
}

.genesis-nav-menu .sub-menu a:focus span,
.genesis-nav-menu .sub-menu a:hover span,
.genesis-nav-menu .sub-menu .current-menu-item > a span {
	color: #ff0000;
	border-bottom: 1px solid #000;

}

.genesis-nav-menu .sub-menu .sub-menu {
	margin: -44px 0 0 199px;
}

.genesis-nav-menu .menu-item:hover {
	position: static;
}

.genesis-nav-menu .menu-item:hover > .sub-menu {
	left: auto;
	opacity: 1;
}

.genesis-nav-menu > .right {
	display: inline-block;
	float: right;
	list-style-type: none;
	padding: 0;
	text-transform: uppercase;
}

.genesis-nav-menu > .date,
.genesis-nav-menu > .right > a {
	border: none;
	border-left: 1px solid #e3e3e3;
	display: inline-block;
	padding: 20px 24px;
}

.genesis-nav-menu > .search {
	padding: 5px;
}

.genesis-nav-menu .search input[type="search"] {
	font-size: 13px;
	font-size: 1.3rem;
	padding: 6px 16px;
}

/* Site Header Navigation
--------------------------------------------- */

.site-header .genesis-nav-menu a {
	border: none;
}

.site-header .genesis-nav-menu .sub-menu a {
	border: 1px solid #e3e3e3;
	border-top: none;
}

/* Primary Navigation
--------------------------------------------- */

.nav-primary {
	border-bottom: 3px solid #e3e3e3;
		border-top: 2px solid #336799;
	margin-bottom:0;
}

/* Secondary Navigation
--------------------------------------------- */

.nav-top {
	border-top: 1px solid #e3e3e3;
}
.nav-top ul {
	float:left;
	clear:none;
	width:33%;
	max-width:386px
}
.nav-top ul#top-menu-1 {
	float:right;
	text-align:right;
}
.nav-top ul#top-menu-2 {
	text-align:center;
}
.nav-top ul#top-menu-3 {
  float: left;
	text-align:left;
  padding-right: 15px;
}
.nav-top ul li {
	display:inline-block;
}
.nav-top a {
    border-right: none;
	color:#aaa;
    padding: 0 0 0 15px;
	font-size:14px;
}

/* Accessible Menu
--------------------------------------------- */

.menu .menu-item:focus {
	position: static;
}

.menu .menu-item > a:focus + ul.sub-menu,
.menu .menu-item.sfHover > ul.sub-menu {
	left: auto;
	opacity: 1;
}

.menu-toggle,
.sub-menu-toggle {
	display: none;
	visibility: hidden;
}


/* Content Area
---------------------------------------------------------------------------------------------------- */

/* Home Page
--------------------------------------------- */

.home-top {
	background-color: #f3f3f3;
	border-bottom: 1px solid #e3e3e3;
	clear: both;
	padding: 20px 20px 0;
}

.home-top .featured-content .entry-title {
	font-size: 30px;
	font-size: 3rem;
}

.home-middle-left {
	border-right: 1px solid #e3e3e3;
	float: left;
	padding: 20px 20px 0;
	width: 50%;
}

.home-middle-right {
	float: right;
	padding: 20px 20px 0;
	width: 50%;
}

.home-bottom {
	border-top: 1px solid #e3e3e3;
	clear: both;
	padding: 20px 20px 0;
}

/* Entries
--------------------------------------------- */
.entry {
	padding: 10px;
}

.entry-content ol,
.entry-content p,
.entry-content ul,
.quote-caption {
	margin-bottom: 26px;
}

.entry-content ol,
.entry-content ul {
	margin-left: 40px;
}

.entry-content ol li {
	list-style-type: decimal;
}

.entry-content ul li {
	list-style-type: disc;
}

.entry-content ol ol,
.entry-content ul ul {
	margin-bottom: 0;
}

.entry-content .search-form {
	margin-bottom: 40px;
	width: 50%;
}

.entry-content iframe {
	postion:relative !important;
}

.entry-meta {
	color: #999;
	font-size: 12px;
	font-size: 1.2rem;
	text-transform: uppercase;
	font-family:'Lato', sans-serif;

}

.entry-header .entry-meta {
	margin-bottom: 24px;
}

.entry-footer .entry-meta {
	border-top: 1px dotted #e3e3e3;
	margin: 0 -40px;
	padding: 32px 40px 8px;
}

.entry-comments-link::before {
	content: "\2014";
	margin: 0 6px 0 2px;
}

.entry-categories,
.entry-tags {
	display: block;
}

.after-entry {
	padding: 20px;
}

/* Entry Navigation
--------------------------------------------- */

.archive-pagination {
	clear: both;
	font-size: 14px;
	font-size: 1.4rem;
	margin: 40px;
}

.archive-pagination li {
	display: inline;
}

.archive-pagination li a {
	background-color: #000;
	color: #fff;
	cursor: pointer;
	display: inline-block;
	margin-bottom: 4px;
	padding: 8px 12px;
}

.archive-pagination li a:focus,
.archive-pagination li a:hover,
.archive-pagination li.active a {
	background-color: #ff0000;
	color: #fff;
}

/* Comments
--------------------------------------------- */

.entry-comments,
.comment-respond {
	padding: 40px;
}

.entry-comments {
	border-bottom: 1px solid #e3e3e3;
	padding-right: 0;
}

.ping-list {
	margin-bottom: 40px;
}

.comment-content {
	clear: both;
}

.entry-comments .comment-author {
	color: #000;
	font-weight: 700;
	margin-bottom: 0;
}

.entry-comments .comment-meta {
	font-size: 12px;
	font-size: 1.2rem;
	text-transform: uppercase;
}

.comment-respond input[type="email"],
.comment-respond input[type="text"],
.comment-respond input[type="url"] {
	width: 50%
}

.comment-respond label {
	display: block;
	margin-right: 12px;
}

.comment-list li,
.ping-list li {
	list-style-type: none;
	margin-top: 24px;
	padding: 32px;
}

.comment-list li li {
	margin-right: -32px;
}

li.comment {
	background-color: #f5f5f5;
	border: 1px solid #e3e3e3;
	border-right: none;
}

.comment .avatar {
	margin: 0 16px 24px 0;
}

.form-allowed-tags {
	background-color: #f5f5f5;
	font-size: 14px;
	font-size: 1.4rem;
	padding: 24px;
}

li.depth-2 {
	background-color: #fff;
}


/* Sidebars
---------------------------------------------------------------------------------------------------- */

.after-entry li,
.news-pro-home .content li,
.sidebar li {
	border-bottom: 1px dotted #e3e3e3;
	list-style-type: none;
	margin-bottom: 12px;
	padding-bottom: 12px;
	word-wrap: break-word;
}

.after-entry li::before,
.news-pro-home .content li::before,
.sidebar li::before {
	content: "\203a";
	font-size: 12px;
	font-size: 1.2rem;
	margin: 0 10px;
}

.after-entry li ul,
.news-pro-home .content li ul,
.sidebar li ul {
	border-top: 1px dotted #e3e3e3;
	margin-top: 12px;
	padding-top: 12px;
}

.after-entry ul > li:last-child,
.news-pro-home .content ul > li:last-child,
.sidebar ul > li:last-child {
	border-bottom: none;
	margin-bottom: 0;
	padding-bottom: 0;
}

.after-entry .widget,
.news-pro-home .content .widget {
	padding-bottom: 20px;
}

.sidebar .widget {
	background-color: #fff;
	border-left: 1px dashed #e3e3e3;
	padding-left: 20px;
}

.sidebar .featured-content a.alignleft img {
	width:120px;
}

/* Footer Widgets
---------------------------------------------------------------------------------------------------- */

.footer-widgets {
	color: #000;
	clear: both;
	padding: 40px 40px 16px;
	font-family:'Lato', sans-serif;
}
.footer-widgets-1,
.footer-widgets-2,
.footer-widgets-3,
.footer-widgets-4,
.footer-widgets-5,
.footer-widgets-6 {
	width: 160px;
}

.footer-widgets-1,
.footer-widgets-2,
.footer-widgets-3,
.footer-widgets-4 {
	margin-right: 20px;
}


.footer-widgets-1,
.footer-widgets-2,
.footer-widgets-3,
.footer-widgets-4,
.footer-widgets-5 {
	float: left;
}

.footer-widgets-6 {
	float: right;
}

.footer-widgets a {
	color: #000;
	font-weight:bold;
}

.footer-widgets a:focus,
.footer-widgets a:hover {
	text-decoration:underline;
}

.footer-widgets .widget {
	margin-bottom: 24px;
}

.footer-widgets .widget-title {
	border: none;
	color: #fff;
	font-weight: 700;
	padding: 0;
	margin-bottom: 16px;
	text-align: left;
}

.footer-widgets li {
	list-style-type: none;
	margin-bottom: 6px;
	word-wrap: break-word;
}

.footer-widgets .search-form input:focus {
	border: 1px solid #ddd;
}


/* Site Footer
---------------------------------------------------------------------------------------------------- */

.site-footer {
	background-color: #fff;
	border-top: 1px solid #e1e1e1;
	color: #999;
	font-size: 14px;
	font-size: 1.4rem;
	padding: 40px 0;
	text-align: center;
}

.site-footer a {
	color: #aaa;
}

.site-footer a:focus,
.site-footer a:hover {
	color: #ff0000;
}

.site-footer p {
	margin-bottom: 0;
}

.entry-content p::nth-type:first-letter {
float:left;
font-size:4em;
color: #000099;
margin-right:0.10em;
line-height:90%;
text-shadow: 0.05em 0.05em #C0C0C0;
}


/* Custom Styling */


.single article .entry-meta {
    display: none;
}

/* Opinion Page */

.opinion-links {
    text-align: center;
    max-width: 980px;
		width:100%;
    margin: 0 auto;
	text-transform:uppercase;
}
.opinion-links h1 {
	border-bottom:3px solid #e3e3e3;
	margin:0;
	font-family:'Lato', sans-serif;
}
.opinion-links a {
    padding: 10px 20px;
		height:auto;
		font-family:'Lato', sans-serif;
}
.opinion-links a:hover {
	border:none;
	background-color:#e3e3e3;
	text-decoration:none;
}
.opinion-section {
	clear:both;
	overflow:hidden;
	margin-bottom:10px;
}
.opinion-section.editorials .opinion-entry {
	margin-bottom:10px;
}
.opinion-section.cartoon {
	border-bottom:3px solid #e3e3e3;
	text-align:center;
	padding-bottom:10px;
}
.opinion-section h2{
	font-size:40px;
	font-size:4rem;
	text-transform:uppercase;
	border-bottom:3px solid #e3e3e3;
}
 .opinion-section h3  {
	font-family:'Lato', sans-serif;
	font-size:30px;
	font-size:3.0rem;
}
.opinion-section.one-half img {
	margin-right:10px;
	margin-bottom:0;
}
.opinion-section.one-half h3{
	font-size:20px;
	font-size:2.0rem;
	line-height:3;
	margin:0;
}
.opinion-section h4{
	font-size:20px;
	font-size:2rem;
	line-height:1.4;
	margin-bottom:5px;
}
.opinion-section p {
	margin:0;
}

.opinion-entry.one-third{
	padding:0;
	margin:15px 0;
	border-bottom:3px solid #e3e3e3;
	min-height:450px;
	position:relative;
}
.opinion-section.one-half {
	border-bottom:3px solid #e3e3e3;
	padding:0 20px;
}
.opinion-section.one-half .opinion-entry {
	margin-bottom:20px;
}
.opinion-section.one-half h2 {
	display:inline-block;
}
.opinion-entry.one-third .entry-content {
	min-height:440px;
	padding:0 20px;

}
.opinion-entry.one-third .entry-content .writer-image {
	position:absolute;
	bottom:0;
	left:0;
	right:0;
}
.opinion-section.one-half .opinion-entry .entry-meta {
	border-bottom:1px dashed #e3e3e3;
	min-height:60px;
}

.opinion-section.one-half:nth-child(odd ),
.opinion-entry.one-third:nth-child( 3n+1 ) {
	clear:both;
	margin-left:0;
}
.opinion-entry.one-third:nth-child( 3n+2 ) .entry-content {
	border:3px solid #e3e3e3;
	border-top:none;
	border-bottom:none;
}
.opinion-section.one-half:nth-child(even), .blog-page .two-thirds   {
	clear:none;
	margin:0;
	border-left:3px solid #e3e3e3;
}
.opinion-section.one-half .opinion-entry:last-child .entry-meta {
	border-bottom:none;
}

.blog-page .one-half {
	margin:0;
}
.blog-page .one-half.first {
	border-right:3px solid #e3e3e3;

}
.blog-page .content {
	font-size:14px;
}
.blog-page .content h4  {
	font-size:16px;
	font-size:1.6rem;
	line-height:1.4;
	margin-bottom:5px;
}

.blog-page .content img,
.blog-page .content a.alignleft {
	width:80px;
	margin:0 10px 10px 0;
}
.blog-page .content .one-third img,
.blog-page .content .one-third a.alignleft {
	width: 300px;
	margin:0;
}
.opinion-page .entry,
.blog-page .entry {
border-bottom :1px dashed #e3e3e3;
 }
.blog-page .entry-content p {
	margin-bottom:0;
}
.blog-page .content .section-title {
	text-align:center;
}

/* E-Paper Styling */

.single-epaper .site-container-wrap {
	width:1200px;
	max-width:1200px;
}
.digital-paper .site-container-wrap {
	width:100%;
	max-width:1200px;
}
.digital-paper .opinion-entry {
border-bottom:1px dashed #e3e3e3;
padding-bottom:10px;
margin-bottom:10px;
}
.single-epaper .one-sixth {
    width: 200px;
    margin: 20px 0 20px 0;
    border: 1px solid #e1e1e1;
    padding: 10px;
}
.single-epaper .one-sixth ul {
	list-style-type:none;
}
.single-epaper .one-sixth ul li {
	cursor:pointer;
}
.single-epaper .one-sixth ul li:hover {
	color:red;
}
.single-epaper .five-sixths {
	width:950px;
	margin-left:0;
}
.single-epaper #result {
	width:950px !important;
}
.epaper-archive-nav {
	width:100%;
	margin:0 auto;
	padding:10px;
	border: 1px solid #e1e1e1;
	font-size:12px;
	font-size:1.2rem;
	text-align:center;
}
.epaper-archive-nav a {}
.epaper-archive-nav form{ display:inline;margin:0 50px;}
.epaper-archive-nav label {}
.epaper-archive-nav input {
    width: 125px;
    padding: 5px;
}
.epaper-archive-nav button { padding:12px;font-size:1.2rem;height:35px;}

.post-header{
	border-bottom: 1px solid #e1e1e1;
	padding-top:20px;

}
.post-header .wrap { position:relative;}
.post-header .writer_img {

}
.post-header .writer_img iimg.alignleft{
	width:240px;
	height:240px;
	margin-bottom:0;
	padding-bottom:0;
	}
.post-header .header-content {
    max-width: 800px;
    margin: 0 0 0 250px;
}
.post-header .header-content.no-image {
	margin:0;
}
.post-header .header-content.small-image {
	margin:0;
}
.post-header .header-content.small-image a.author-name,
.author-links span.entry-terms a {
	font-size:2rem;
	font-weight:normal;
	border-bottom:none;
}
.post-header p {
	margin:0;
}
.post-header .entry-title{}
.post-header p.post-shoulder{
	font-style:italic;
}
.post-header .author-name{
	font-size:2.5rem;
	/*margin-right:20px */;
}
.post-header .author-name img.alignleft {
    margin-bottom: 0;
}
.post-header .header-content.no-image .author-name  {
	font-size:16px;
	font-size:1.6rem;
	font-family:'Lato', sans-serif;
}
.post-header .author-links {

}

.post-header .author-twitter{
	border-radius:50%;
	background-color:#1dcaff;
	padding:0 5px;
	color:#fff;
	font-size:1.8rem;
	display:none;

}
.post-header .twitter-name {
	font-family:'Lato', sans-serif;
	padding:0 3px;

}
.post-header .post-date {
    color: #999;
    font-size: 12px;
    font-size: 1.2rem;
    text-transform: uppercase;
    font-family: 'Lato', sans-serif;
}
.post-header .post-share{
	float:right;
	width:300px;
}
.post-header .small-image .post-share {
    float: right;
    width: 300px;
    /* position: absolute; */
    bottom: 5px;
    left: 95px;
}
.post-header .entry-terms a
 {
    border-bottom: 2px solid #e3e3e3;
    font-size: 1.8rem;
    font-weight: 700;
}

/* News Tabs */
.ui-state-active, .ui-widget-content .ui-state-active, .ui-widget-header .ui-state-active, a.ui-button:active, .ui-button:active, .ui-button.ui-state-active:hover
{
	background:#336799 !important;
	border-color: #336799 !important;
}
/* Google Search
.page-template-template_google-cse .content {
		position:relative;
		max-width:70%;
}


.entry-content .search-form {
	width: 100%;
	max-width: 800px;
	margin-bottom:0;
}
.page-template-template_google-cse .entry-content {
	position:relative;
}
#___gcse_0 {

}
.search-form input {
	float: left;
	font-size: 16px;
}

.content .search-form input[type="search"] {
	width: 80%;
	height:48px;
	margin-right: 2%;
}

.search-form input[type="submit"] {
	width: 18%;
	margin-top: 0;
}

#cse .gsc-control-cse {
	padding: 0;
	border: none;
}

#cse .gsc-above-wrapper-area {
	border-bottom: none;
	padding: 0;
}

#cse table {
	line-height: 1;
	margin-bottom: 0;
}

#cse tbody {
	border-bottom: none;
}

#cse .gsc-selected-option-container {
	max-width: none;
}

#cse .gsc-result .gs-title {
	height: auto;
}
 */
/*------------------------------------------------------------- */
.menu-primary .menu-item {
 float: left;
}
.fa-search {
 color: #fff;
}
/* Header search */
.search-form-container {
 position: relative;
}
.search-toggle {
 float: right;
 padding: 11px 12px;
 color: #fff;
 text-align: center;
 cursor: pointer;
 line-height: 1;
 background:#000;
 margin-top:1px;
}
.search-mobile-toggle {
	display:none;
}
.search-toggle:hover,
.search-toggle.active {
 background: #4d4d4d;
}
.search-box-wrapper {
 z-index: 999;
 width: 50%;
 display: none;
 float:right;
}
.search-box {
 padding: 0.5em;
 background: #4d4d4d;
}
.search-box input[type="search"]{
 max-width: 100%;
 padding: 3px 10px;
 font-size: 20px;
 background-color: #fff;
 border: 0;
 border-radius: 3px;
}
.search-box input[value="Search"]{
 display: none;
}
/* Text meant only for screen readers - from UnderScores */
.screen-reader-text {
 clip: rect(1px, 1px, 1px, 1px);
 position: absolute !important;
 right: 0;
}
.screen-reader-text:hover,
.screen-reader-text:active,
.screen-reader-text:focus {
 background-color: #f1f1f1;
 border-radius: 3px;
 box-shadow: 0 0 2px 2px rgba(0, 0, 0, 0.6);
 clip: auto !important;
 color: #21759b;
 display: block;
 font-size: 14px;
 font-weight: bold;
 height: auto;
 left: 5px;
 line-height: normal;
 padding: 15px 23px 14px;
 text-decoration: none;
 top: 5px;
 width: auto;
 z-index: 100000;
}

@media only screen and (max-width: 661px) {

	.search-form input {
		float: none;
		
	}

	.search-form input[type="search"] {
		width: 100%;
		margin-right: 0;
		margin-bottom: 10px;
	}

	.search-form input[type="submit"] {
		width: auto;
	}
	
	.search-toggle {
	 display: none;
	}

}

/* Media Queries
---------------------------------------------------------------------------------------------------- */

@media only screen and (-webkit-min-device-pixel-ratio: 1.5),
	only screen and (-moz-min-device-pixel-ratio: 1.5),
	only screen and (-o-min-device-pixel-ratio: 3/2),
	only screen and (min-device-pixel-ratio: 1.5) {

	.content #genesis-responsive-slider .flex-direction-nav li a {
		background-image: url(images/icon-direction-nav@2x.png);
	}

}

@media only screen and (max-width: 1200px) {



}

@media only screen and (max-width: 1023px) {

	.site-container-wrap {
		max-width: 780px;
		width: 96%;
	}

	.content,
	.content-sidebar-sidebar .content,
	.content-sidebar-sidebar .content-sidebar-wrap,
	.sidebar-content-sidebar .content,
	.sidebar-content-sidebar .content-sidebar-wrap,
	.sidebar-primary,
	.sidebar-secondary,
	.sidebar-sidebar-content .content,
	.sidebar-sidebar-content .content-sidebar-wrap,
	.site-header .widget-area,
	.site-inner,
	.title-area,
	.wrap {
		width: 100%;
	}

	.footer-widgets-1,
	.footer-widgets-2,
	.footer-widgets-3,
	.footer-widgets-4,
	.footer-widgets-5,
	.footer-widgets-6 {
		margin: 0;
		width: 33.3333%;
	}

	.footer-widgets-4 {
		clear: both;
	}

	.header-image .site-title a {
	}
	.site-header .widget-area {
		display:none;
	}

	.site-header .title-area {
		padding-bottom: 16px;
	}

	.header-image .site-title a {
		background-position: top center !important;
	}

	.site-header .wrap {
	}

	.genesis-nav-menu li,
	.site-header ul.genesis-nav-menu,
	.site-header .search-form {
		float: none;
	}

	.genesis-nav-menu,
	.home-top .widget.ui-tabs .entry h2,
	.site-description,
	.site-header .search-form,
	.site-header .widget-area
	{
		text-align: center;
	}

	.genesis-nav-menu a,
	.genesis-nav-menu > .first > a,
	.genesis-nav-menu > .last > a {
		border: none;
		padding: 12px;
	}

	.site-container-wrap,
	.site-header .search-form {
		margin: 16px auto ;
	}

	.genesis-nav-menu li.right {
		display: none;
	}

	.content {
		border: none;
	}

	.site-footer {
		padding: 24px;
	}

	.home-top .widget.ui-tabs .entry {
		background-color: #000;
		padding-bottom: 20px;
	}

	.home-top .widget.ui-tabs img {
		display: block;
		max-width: 100%;
		position: relative;
		margin: 0 auto;
	}

	.home-top .ui-tabs ul.ui-tabs-nav {
		background-color: #000;
		bottom: auto;
		margin: 0;
		position: relative;
		right: auto;
	}

	.home-top .ui-tabs ul.ui-tabs-nav li,
	.home-top .widget.ui-tabs .entry p {
		margin: 0;
	}

	.home-top .widget.ui-tabs .entry h2 {
		padding: 0;
	}

	.content-sidebar .content,
	.content-sidebar-sidebar .content,
	.sidebar-sidebar-content .sidebar-primary {
		border: none;
	}

	.nav-top {
		padding-top: 20px;
	}
	.nav-top ul {
    width: 100%;
    text-align: center !important;
    float: none !important;
    margin: 0 auto;
	padding:0 !important;

}

@media only screen and (max-width: 800px){
	.five-sixths, 
	.footer-widgets-1, 
	.footer-widgets-2, 
	.footer-widgets-3, 
	.footer-widgets-4, 
	.footer-widgets-5, 
	.footer-widgets-6, 
	.four-sixths, 
	.home-middle-left, 
	.home-middle-right, 
	.one-fourth, 
	.one-half, 
	.one-sixth, 
	.one-third, 
	.three-fourths, 
	.three-sixths, 
	.two-fourths, 
	.two-sixths, 
	.two-thirds {
	    width:100%;
	}
}

@media only screen and (max-width: 600px) {

	.five-sixths,
	.footer-widgets-1,
	.footer-widgets-2,
	.footer-widgets-3,
	.footer-widgets-4,
	.footer-widgets-5,
	.footer-widgets-6,
	.four-sixths,
	.home-middle-left,
	.home-middle-right,
	.one-fourth,
	.one-half,
	.one-sixth,
	.one-third,
	.three-fourths,
	.three-sixths,
	.two-fourths,
	.two-sixths,
	.two-thirds {
		margin: 0;
		width: 100%;
	}

	.content #genesis-responsive-slider .flex-direction-nav li .next,
	.content #genesis-responsive-slider .flex-direction-nav li .prev,
	.content .slide-excerpt {
		display: none;
	}

	.home-middle-left {
		border: none;
	}

	.header-image .site-header .site-title a {
		background-size: contain !important;
	}

	.entry-title {
		font-size: 26px;
		font-size: 2.6rem;
	}


    .site-header .wrap {
    	height:80px;
    }
    
	.header-full-width .title-area, .header-full-width .site-title {
	width:320px;
	margin:17px auto 0;
	height:80px;
	}
	
	.header-image .site-title a {

    }
    
    .site-description {
    	font-size:12px;
    	font-size:1.25rem;
    	padding-left:6px;
    }
    
    .post-header .writer_img {
        position: relative;
        /* bottom: 0; */
        width: 240px;
        margin: 0 auto;
        /* text-align: center; */
        display: block;
    }
    .post-header .writer_img img {
        width: 240px;
        height: 240px;
        /* margin-bottom: 0; */
        /* text-align: center; */
        /* margin: 0 auto; */
    }
    .post-header .header-content {
        max-width: 100%;
        margin: 0 15px;
        /* display: inline-block; */
    }
    .post-header .author-links {
    	clear:both;
    }
    .post-header .twitter-box {
    	display:inline-block;
    }
    .post-header .post-share {
        float: left;
        width: 300px;
        height: 50px;
    }
    .post-header .small-image .post-share {
        float: right;
        width: 300px;
        position: absolute;
        bottom: 0px;
        left: 90px;
    }

}

@media print {

	/**
	 * @section layout
	 * @css-for (not required sections)
	 */
	#header .widget-area,
	#header img,
	#header form,
	#nav,
	#subnav,
	.breadcrumb,
	#footer-widgets,
	#footer .gototop,
	#searchform,
	#s,
	#submit,
	#sidebar,
	#sidebar-alt,
	#wp-calendar,
	#respond,
	#comments,
	#pings,
	#commentform,
	#commentform p,
	.post-info .post-comments,
	.post-info .post-edit-link,
	#cachestats,
	select,
	input,
	textarea,
	checkbox,
	dd,
	hr,
	#wp-admin-bar,
	.gspn-area,
	.wpspn-area,
	#gwfoot-footer-disclaimer-area,
	.backstretch,
	.sharedaddy,
	.post-edit-link {
		display: none !important;
	}

	/**
	 * @section layout
	 * @css-for (print basics)
	 */
	body {
		width: 100%;
		text-align: left;
		margin: 0;
		padding: 0;
		font-family: Cambria, "Hoefler Text", Utopia, "Liberation Serif", "Nimbus Roman No9 L", Times, "Times New Roman", serif;
		font-size: 12pt;
		color: #000;
		background: #fff !important;
		background-image: none !important;
	}

	#header,
	#title-area,
	#title,
	#description,
	#wrap,
	.wrap,
	#content-sidebar-wrap,
	#content,
	.author-box,
	#footer .creds {
		border: 0 !important;
		clear: both;
		display: block;
		float: none;
		overflow: hidden;
		max-width: 99%;
	}

	#title-area,
	#header #title {
		text-align: left !important;
		width: 98% !important;
	}

	#header #title {
		font-size: 1.7em;
	}

	html #title a {
		color: #000 !important;
	}

	p#description {
		color: #666 !important;
		margin-left: 30px;
	}

	body.home p#description {
		margin-bottom: 40px !important;
		margin-top: 10px !important;
		width: 100% !important;
	}

	h1,
	h2,
	h3,
	h4,
	h5,
	h6 {
		font-weight: 700;
		margin: .75em 0 .5em;
		text-align: left;
	}

	h1 {
		text-align: center;
		padding: 0 0 .5em;
		border-bottom: 1px solid #ccc;
	}

	p {
		margin: .5em;
	}

	.post-info,
	.post-meta {
		text-transform: none !important;
	}

	#content .post-info {
		font-size: 0.7em !important;
	}

	#content-sidebar-wrap,
	#content .entry-content,
	.author-box {
		margin-right: 10%;
	}

	#content .entry-content {
		clear: both;
		/*display: inline-block;*/
		float: none;
		overflow: hidden;
	}

	#genesis-box {
		border-top: 1px solid #ccc;
		margin-top: 10px;
		font-size: 0.85em;
	}

	#genesis-box img {
		float: right;
		clear: right;
	}

	#footer {
		background: #fff !important;
		border-top: 2px solid #ccc;
		margin-top: 10px;
		font-size: 0.8em;
	}

	#footer .creds {
		float: left !important;
		clear: left;
	}

	/**
	 * @section links
	 * @css-for (optimize links for print)
	 */
	a,
	a:visited,
	a:hover,
	a:visited:hover {
		color: #000;
		background: transparent;
		text-decoration: none;
	}

	#header a[href]:after,
	#footer a[href]:after,
	#content span a[href]:after,
	#content p a[href]:after,
	#genesis-box a[href]:after {
		content: " <"attr(href)"> ";
		background-color: inherit;
		font-style: italic;
		font-size: 0.85em;
		text-transform: none;
	}

	*[name]:after {
		content: " [#"attr(name)"]";
		background-color: inherit;
		font-style: italic;
		font-size: .7em;
	}

	*[title]:after {
		content: " ("attr(title)") ";
		background-color: inherit;
		font-style: italic;
		font-size: .7em;
	}

	/**
	 * @section quotes
	 * @css-for (advanced output of cite)
	 */
	*[cite]:after {
		content: close-quote" (Source: "attr(cite)")";
		font-size: .7em;
	}

	* {
		quotes: "\201E" "\201C" "\201A" "\2018";
	}

	q:before,
	blockquote:before {
		content: open-quote;
	}

	q:after,
	blockquote:after {
		content: close-quote;
	}

	blockquote,
	q,
	cite {
		padding-left: .1em;
	}

	acronym,
	abbr {
		border: none;
	}

	/**
	 * @section Code
	 * @css-for (not required sections)
	 */
	.code,
	pre {
		font: .8em 'Courier New', Courier, Fixed;
		padding-left: 1em;
	}

	.code a[href]:after {
		content: "";
	}

	/**
	 * @section layout
	 * @css-for (image format)
	 */
	img {
		padding: .5em;
	}

	img:after {
		display: block;
		content: " attr(title) ";
	}

	#content img a[href]:after {
		display: none !important;
		content: " attr(none) " !important;
	}

	/**
	 * Keep regular image alignment
	 */
	img.centered,
	.aligncenter {
		display: block;
		margin: 0 auto 10px;
	}

	img.alignnone {
		display: inline;
		margin: 0 0 10px;
	}

	img.alignleft {
		display: inline;
		margin: 0 10px 10px 0;
	}

	img.alignright {
		display: inline;
		margin: 0 0 10px 10px;
	}

	.alignleft {
		float: left;
		margin: 0 10px 0 0;
	}

	.alignright {
		float: right;
		margin: 0 0 0 10px;
	}

	.wp-caption {
		padding: 5px;
		text-align: center;
	}

	p.wp-caption-text {
		font-size: .9em;
		font-style: italic;
		line-height: 1.4em;
		padding: 5px 0;
	}

	/**
	 * @section Special: Big G Ads
	 * @css-for (not required sections)
	 */
	.ad,
	.adc,
	#google_ads_frame0,
	#google_ads_frame1,
	#google_ads_frame2,
	#google_ads_frame3,
	#google_ads_frame4,
	#google_ads_frame5,
	#google_ads_frame6,
	#google_ads_frame7,
	#google_ads_frame8,
	#google_ads_frame9,
	#google_ads_frame10,
	#ads {
		display: none !important;
		height: 1px !important;
	}

}


/* Print Page Layout
------------------------------------------------------------ */

@page {
	orphans: 4;
	widows: 2;
}
