#include "globals.h"

#ifdef WEBIF

char *CSS =
"BODY {background-color: white; font-family: Arial; font-size: 11px; text-align:center}\n"
"P {color: white; }\n"
"P.blinking {text-decoration: blink; font-weight:bold; font-size:large; color:red;}\n"
"H2 {color: #AAAAAA; font-family: Arial; font-size: 32px; line-height: 32px; text-align:center; margin-top:0px; margin-bottom:0px}\n"
"H4 {color: #AAAAAA; font-family: Arial; font-size: 12px; line-height: 9px; text-align:center}\n"
"H4.styleauthor:after {content:\"Eneen\";}\n"
"TABLE {border-spacing:1px; border:0px; padding:0px; margin-left:auto; margin-right:auto;}\n"
"TH {height:10px; border:0px; font-family: Arial; font-size: 11px; padding:5px; background-color:#CCCCCC; color:black;}\n"
"TH.statuscol0 {text-align:center;width:10px;}\n"
"TH.statuscol1 {text-align:center;}\n"
"TH.statuscol2 {text-align:center;}\n"
"TH.statuscol3 {text-align:center;}\n"
"TH.statuscol4 {text-align:center;}\n"
"TH.statuscol5 {text-align:center;}\n"
"TH.statuscol6 {text-align:center;}\n"
"TH.statuscol7 {text-align:center;}\n"
"TH.statuscol8 {text-align:center;}\n"
"TH.statuscol9 {text-align:center;}\n"
"TH.statuscol10 {text-align:center;}\n"
"TH.statuscol11 {text-align:center;}\n"
"TH.statuscol12 {text-align:center;}\n"
"TH.statuscol13 {text-align:center;}\n"
"TH.statuscol14 {text-align:center;}\n"
"TH.statuscol15 {text-align:center;}\n"
"TH.statuscol16 {text-align:center;}\n"
"TD {height:10px; border:0px; font-family: Arial; font-size: 11px; padding:5px; background-color:#EEEEEE; color:black;text-align: left}\n"
"TD.centered {text-align:center;}\n"
"TD.statuscol0 {text-align:center;width:10px;}\n"
"TD.statuscol1 {text-align:center;}\n"
"TD.statuscol2 {text-align:center;}\n"
"TD.statuscol3 {text-align:center;}\n"
"TD.statuscol4 {}\n"
"TD.statuscol5 {text-align:center;}\n"
"TD.statuscol6 {text-align:center;}\n"
"TD.statuscol7 {text-align:center;}\n"
"TD.statuscol8 {text-align:center;}\n"
"TD.statuscol9 {}\n"
"TD.statuscol10 {text-align:center;}\n"
"TD.statuscol11 {text-align:center;}\n"
"TD.statuscol12 {text-align:center;}\n"
"TD.statuscol13 {}\n"
"TD.statuscol14 {text-align:center;}\n"
"TD.statuscol14 A {text-decoration: none;}\n"
"TD.statuscol15 {text-align:center;}\n"
"TD.statuscol16 {text-align:center;}\n"
"TD.statuscol16 A {text-decoration: none;}\n"
"TD.usercol0 {text-align:center;}\n"
"TD.usercol1 {white-space: normal;}\n"
"TD.usercol2 {text-align:center;}\n"
"TD.usercol3 {text-align:center;}\n"
"TD.usercol4 {text-align:center;}\n"
"TD.usercol5 {text-align:center;}\n"
"TD.usercol6 {text-align:center;}\n"
"TD.usercol7 {text-align:center;}\n"
"TD.usercol8 {text-align:center;}\n"
"TD.usercol9 {text-align:center;}\n"
"TD.usercol10 {text-align:center;}\n"
"TD.usercol11 {text-align:center;}\n"
"TD.usercol12 {text-align:center;}\n"
"TD.usercol13 {text-align:center;}\n"
"TD.usercol14 {text-align:center;}\n"
"TD.usercol15 {text-align:center;}\n"
"TD.usercol16 {text-align:center;}\n"
"TD.usercol17 {text-align:center;}\n"
"TD.usercol18 {text-align:center;}\n"
"TD.usercol19 {text-align:center;}\n"
"TD.usercol20 {text-align:center;}\n"
"TD.usercol21 {text-align:center;}\n"
"TD.menu {color:black; background-color:white; font-family: Arial; font-size:14px; font-weight:bold;white-space: normal;}\n"
"TD.menu_selected {color:black; background-color:#E6FEBF; font-family: Arial; font-size:14px; font-weight:bold;font-style:italic;}\n"
"TD.configmenu {color:black; background-color:white; font-family: Arial; font-size:11px; font-weight:bold;}\n"
"TD.configmenu_selected {color:black; background-color:#E6FEBF; font-family: Arial; font-size:11px; font-weight:bold;font-style:italic;}\n"
"TD.subheadline {height:10px; border:0px; font-family: Arial; font-size: 11px; padding:5px; background-color:#CCCCCC; color:black;}\n"
"TD.subheadline A {text-decoration: none;}\n"
"TR.s TD {background-color:#e1e1ef;}\n"
"TR.l TD {background-color:#e1e1ef;}\n"
"TR.n TD {background-color:#e1e1ef;}\n"
"TR.h TD {background-color:#e1e1ef;}\n"
"TR.r TD {background-color:#fff3e7;}\n"
"TR.p TD {background-color:#fdfbe1;}\n"
"TR.c TD {background-color:#f1f5e6;}\n"
"TR.a TD {background-color:#33ff00;}\n"
"TR.online TD {background-color:#BBFFAA;}\n"
"TR.online TD.usercol5 {background-color:#646464;}\n"
"TR.expired TD {background-color:#FFBBAA;}\n"
"TR.connected TD {background-color:#FFFFAA;}\n"
"TR.disabled TD:first-child IMG.icon {background-color:#00AA00;}\n"
"TR.disabledreader TD:first-child IMG.icon {background-color:#00AA00;}\n"
"TR.scanusbsubhead TD {background-color:#fdfbe1;}\n"
"TR.e_valid TD {background-color:#E6FEBF;text-align:center; font-family:\"Courier New\", monospace;}\n"
"TR.e_expired TD {background-color:#fff3e7;text-align:center; font-family:\"Courier New\", monospace;}\n"
"TR.e_header TD {text-align:center; font-family:\"Courier New\", monospace;}\n"
"HR {height:1px; border-width:0; color:white; background-color:#AAAAAA}\n"
"DIV.log {border:1px dotted #AAAAAA; background-color: #FAFAFA; padding:10px; font-family:\"Courier New\", monospace; color:#666666; font-size: 11px; word-wrap:break-word; text-align:left; }\n"
"DIV.sidlist {border:1px dotted #AAAAAA; background-color: #fffdf5; padding:2px; font-family:\"Courier New\", monospace ; color:#666666; font-size: 11px; word-wrap:break-word; text-align:left;}\n"
"DIV.message {position:absolute;right:0;font-family: Arial; font-size: 12px;font-weight:bold;}\n"
"DIV.div_notifier {height:14px;width:14px;border-radius:7px;-webkit-border-radius:7px;background-color:red;margin-left:4px;text-align:center;float:right;}\n"
"DIV.debugmenu {line-height: 20px;}\n"
"DIV.logmenu {line-height: 20px;}\n"
"DIV.filterform {margin: 10px;}\n"
"TABLE.menu {border-spacing:0px; border:0px; padding:0px; margin-left:auto; margin-right:auto;}\n"
"TABLE.status {border-spacing:1px; border:0px; padding:0px; background-color:white; empty-cells:show;}\n"
"TABLE.config {width:750px;}\n"
"TABLE.invisible TD {border:0px; font-family:Arial; font-size: 12px; padding:5px; background-color:#EEEEEE;}\n"
"TABLE.configmenu {line-height: 16px;}\n"
"TEXTAREA.bt {font-family: Arial; font-size: 12px;}\n"
"TEXTAREA.editor {width:99%; height:508px; border:1px dotted #AAAAAA; background-color: #FAFAFA; padding:8px 10px; font-family:\"Courier New\", monospace; color:black; font-size: 11px; word-wrap:break-word; text-align:left;}\n"
"A.debugls:link {color: white;background-color:red;}\n"
"A.debugls:visited {color: white;background-color:red;}\n"
"A:link {color: #050840;}\n"
"A:visited {color: #050840;}\n"
"A:active {color: #050840;}\n"
"A:hover {color: #ff9e5f;}\n"
"A:hover IMG.icon {border: 1px solid yellow;width:20px;height:20px;}\n"
"A.tooltip  {position: relative; text-decoration: none; cursor:default;}\n"
"A.tooltip1 {position: relative; text-decoration: none; cursor:default;color:red;}\n"
"A.tooltip  SPAN {display: none; z-index:99;}\n"
"A.tooltip1 SPAN {display: none; z-index:99;}\n"
"A:hover SPAN {display: block;position: absolute;top: 2em; right: 1em; margin: 0px;padding: 10px;color: #335500;font-weight: normal;background: #ffffdd;text-align: left;border: 1px solid #666;}\n"
"IMG {border:0px solid;}\n"
"IMG.icon {border: 0px solid;width:22px;height:22px;background-color:#AA0000;border-radius:3px;-webkit-border-radius:3px;}\n"
"IMG.clientpicon {height:40px;width:80px;}\n"
"rect.graph_bg {fill:white;}\n"
"text.graph_error {text-anchor:middle;fill:red}\n"
"text.graph_grid_txt {fill:gray;text-anchor:end;style:font-size:12px}\n"
"path.graph_grid {stroke:gray;stroke-opacity:0.5}\n"
"SPAN.e_valid {background-color:#E6FEBF;}\n"
"SPAN.e_expired {background-color:#fff3e7;}\n"
"SPAN.div_notifier {background-color:red;color: white;font-family:Arial;font-size:10px;font-weight:bold;}\n"
"SPAN.idlesec_normal {font-family: Arial; font-size: 9px;color: black}\n"
"SPAN.idlesec_alert {font-family: Arial; font-size: 9px;color: red}\n"
"SPAN.global_conf {color: blue; font-size: 12px; font-family: Arial; cursor: default; padding: 4px;}\n";

// minimized and optimized JS based on http://en.hasheminezhad.com/scrollsaver to retain scroll position.
char *JSCRIPT = "function addUnloadHandler(){var a,e;if(window.attachEvent){a=window.attachEvent;e='on';}else{a=window.addEventListener;e='';}a(e+'load',function(){loadScroll();if(typeof Sys!='undefined' && typeof Sys.WebForms!='undefined')Sys.WebForms.PageRequestManager.getInstance().add_endRequest(loadScroll);},false);}function loadScroll(){var c=document.cookie.split(';');for(var i=0;i<c.length;i++){var p=c[i].split('=');if(p[0]=='scrollPosition'){p=unescape(p[1]).split('/');for(var j=0;j<p.length;j++){var e=p[j].split(',');try{if(e[0]=='window'){window.scrollTo(e[1],e[2]);}}catch(ex){}}return;}}}function saveScroll(){var s='scrollPosition=';var l,t;if(window.pageXOffset!==undefined){l=window.pageXOffset;t=window.pageYOffset;}else if(document.documentElement&&document.documentElement.scrollLeft!==undefined){l=document.documentElement.scrollLeft;t=document.documentElement.scrollTop;}else{l=document.body.scrollLeft;t=document.body.scrollTop;}if(l||t){s+='window,'+l+','+t+'/';}document.cookie=s+';';}";

#define ICMAI "data:image/x-icon;base64,\
AAABAAEAEBAAAAEACABoBQAAFgAAACgAAAAQAAAAIAAAAAEACAAAAAAAQAEAAAAAAAAAAAAAAAAA\
AAAAAADw//8A7/D/AODg4ADf8P8A0PD/AM///wDA4P8Az8/PALDw/wCQz/8AsLC/AGDP/wBgz88A\
YJD/AGCQzwBfr+8AYJCQAC9gzwAvYJAAIADfAC8AzwAvL5AAHw+wAF9QXwAfQGAAEB9vACAgIAAQ\
LzAAABAfAA8PDwAADw8AAAAPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD/\
//8AICAOBgMEBiAgIAMDBg8gICAgEQ8gDgkICAgLGA8RICAgICAgBAgIBQQEBQgbICAgICAgCAYF\
CAMBAQEDCCAgICAgIAkWEwwBAAAAAAAgICAgIB4IExYIAQwAAAAAICAgICAgCRYZFBMTFBUHASAg\
ICAgIBQTExMTExMTExYgICAgIBMTEyAgGBAgICATExMgICAZHyANDwsIBQUIICAZICAgICAgICAS\
DhwgICAgICAgICAgICD/AiD/AiAgICAgICAgICAg/xog/xogICAgICAgICAgIP8CIP8CICAgICAg\
ICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgIMHDYQDAA2UA4AcuAMADbQBAAgAAAAACAAAA\
0QKAAW4AwAF3AMABbQDgA1wA4ANpAPAHZADwB3MA+A9hAPwfYgA="

#define ICSTA "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAASVJREFUeNpi/P//PwM9ABMDnQDdLGJB4ychWT6H1j6aDcRu9Ao6sWGT\
GP4RUD8NiM8C8WkgnklJYvhHwEJLIDaAsvkpsYgUAHKMFxCLQEPmDxC/AOI9pPiIWCAExAuR+MnE\
xtFfNJqBQocQTAwgOhyIrwHxLSC+AcQJaBb9w+Kgf8TG0R8kNisQayLxRYjw4T9yfPQXR7Ai88m2\
CFnDPzJ88JdYi37jMeQPrYIOm6a/5CYGfBb9RJMD8X8h8X+h8Rmw6CEq1X0GYm+oY0AWvwfiWiDm\
hPK/AvF3ILZDKhneEWsRLCgsgDifQOLAVi7C9D8C4nlAfBcuA2qcIGF7IL7znzpAGdlsRiytIGu0\
iP6HhpF98RdPAgKx78M4jKPNLXIBQIABAO7Jxg2Jc6fmAAAAAElFTkSuQmCC"

#define ICDEL "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAATZJREFUeNpi/P//PwM9ABMDncDItUgFiP8g4X9Q+jcQaxFjAAsRakyA\
uBOIo4CYEYjRU89MIE4G4lt4TQGlOgI4DIj/4ZEHgVBC5uCSsIcajoz/INF/0PjIasywmYkrjiSg\
NCMUgwAzlM0MjVtmaFzBxP9BxRVISQyPCcTbPyz6maDid7BpYKRXyUAo1VkCsQySaxmQgvI/Uipk\
hKa6C7gMIuSjf0hhjyzGhEUdE758SSjDwiIfprYRyeBKqBiyGooyLDK4DjUUFAz36VHWgXz0jZqJ\
4S8WB/1HC6r/SAmFbIuY0Sz8hqW8Y0QKTqoFHRdaEqdZ0H1DEkNWw0TNoKsB4gCoGIjfAMTaSGr+\
U1JNnIFWA//+o4I/SDSMfRqfWYzDrhXEgiNOYJnyP47qm2RAt6ADCDAAZIpID5nKkR4AAAAASUVO\
RK5CYII="

#define ICEDI "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAPhJREFUeNpi/P//PwM9ABMDncDws4iFCmaEAvE/KHstTlWgxEABjgHi\
G/8h4CwQR+JSS6klz/+jgk9AHEhNiyKxWAIDa6hlET5LYL6i2KJwApaAwGVKLSLGkpdA7EGJRSBL\
npJrCbEWhVJqCbEWLSbCEjdC5jDiKb0DgZgNmutnAzE/FjWvgDgWiHcRLD9wuMAHiA9AXZwJzYQf\
sPjEhdjEhEvCC83QFKjl78ixBIRxld4yaHxQ0IkAcRQQLwDiaCDeQ1LRi8MFk3BEvAe5ZSMuHylj\
EdsCxJ+pXR9dgqa4q0B8BojvAvFfID5FrkWMo42TUYtgACDAAI5wGCdhx+xeAAAAAElFTkSuQmCC"

#define ICENT "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAMhJREFUeNpi/P//PwM9ABMDncCoRXS1KBKI5wPxWSDeCcRpxGhiIcMi\
DSBOQOL/A+JZtPARBxqfn1ZBdwaId0B9ch+IFxOjiZFeGZbUONoKxGxALALEYkB8G4gdaGGRMxCz\
I/Fv0yp570bj76KFRS5AbIDEfwXEx2lhkQkQyyDxjwLxflpYZInGX0eLIigUiO3REsEFWlikiVYC\
gBLBFVpYZI7G96FV6f0Kjf+DViXDUiD+BcTCQHwTiNeSahHjaONk1CIYAAgwAE4sJWyYtcBzAAAA\
AElFTkSuQmCC"

#define ICREF "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAZVJREFUeNpi/P//PwM9ABMDncCQsagTiP8CcRxBlaA4ogAf+Q8Bt4A4\
GJ9aFiJcDXOtBBCLAjErEH8E4qdAbAmVU4Wq+w3Em7AZwkLAAl4gjgRiayIc5AfE14D4FxDvINYi\
kCUyQNxKYpxVAPF9UuIo7T/54DcQ+xATRzFAHIzEvw7EJ4H4CRD/BGJ+IFaDBhWu6AgF4i2Egg6U\
XN2A+CYQ9wHxWyBei6amBIdFoISwAuoognEkBI3MOVgsgAELJDYoTpYD8X6ojw9j08BIZll3Furq\
1dBkvp+QBhYiDfaC0ibQpG5MqssIWeQDxMpQ2gUqdgqPejMgTgXijcQkBpChYlBfgNjsaPJbcVjA\
DcS1QOwIxFOJ8REoaSfgcTU7NAt8gLJBPrZHCt5FQPyPmAzrB8RfyMysf4HYElshgKtkiCPTokBc\
pTeu+ugxEFeTkKjWA7EVEN8gNdWB8sUfaEaMRBLPg1YXbED8GYjvAfEVqNorlFR8oPC+AQ2WfUBs\
RG4lSYwiR2gkl1BSGzOONrfIBQABBgCZ2ksmAMMjdAAAAABJRU5ErkJggg=="

#define ICKIL "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAdBJREFUeNrsljEvREEQx98ewgkuDrlEc5FcxDcgCjWFRiHiEyhoNRJK\
X0Kl8gEkEo1GqdAIgkZOcKiQE+699d9k9kzmzbt7RK4Qk/yy+3bHzs5/d/YYa23QCssELbK/F6hd\
fA9Ra4AlIhrzbUitn7NsXPNRAwUsgLMaC5wDk6BEY6fgEDyJvw3ZRtkMbh1jEAwQeZAj1kHVflmN\
2mewDAzh1zFiXTWjiO3O0Pcw6BS7dP0sKLIxI/p1fyPqKC/0DdnZHZN8fBMvYAQ8ioVj0mWUbCLl\
kO/AhpL9JgVpajKjPnHL+M1zMh+BUdpghS7Ga4P1E2+dl4tn4/tVMA/GaPyWgmhyxaSTGXWzLGRA\
Z71gB/SDOZI0+ElGES3qFhkXQc7BPZihsQVwAqZISu93Cbab1VEHaAMHIBJ14+qoCM5ABZSo7837\
P2h1lFFSdVndsEvhrQus0RkVwDRdDGlXaR5Vn/4++w6ZNNesKMviwnjZd5XijUnnU86SBFyWC8Vv\
T/h8gB5NuqRAjlmmu2snFD/3Nr6xc1xKeuu0QJxF8A62lDnPCgVZVebqa8s60oquQK+AVfySfJoW\
rElZ6TLQt18G88u/4A3fuv//glLZpwADAH0bOoGI7RokAAAAAElFTkSuQmCC"

#define ICDIS "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAHpJREFUeNpi/P//PwM9ABMDncCoRaMWDU6LJgDxQyC+DsR1SOI1UDEQ\
ziBkCAsRFqkBsRyULYkkrgzEGlC2LrWD7h8ONtOwSwz/qGER07BL3sREOhO1g+4fuXFETD56CsS/\
oez7SOKvkdgfCRnCOFrDjlo0ahHFACDAAByfFvcZ+4pDAAAAAElFTkSuQmCC"

#define ICENA "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAJ1JREFUeNpi/P//PwM9ABMDncCoRaMWkWyRERAz08MifyD+A8Qp9Aq6\
2UD8CojNaWURFxJbFIhPAPFWIBagtkXfsIh5AfF7IK6klY/QQRsQgwpMd1r5CFvKxAlYqOCjbUAc\
AMS/qWERNvAaiJ2B+DItE0MUEIsRawk5iWESEDMC8XJSvc9IZA1rBcQ3gPgdueHMOFqVj1o0fC0C\
CDAAhZ4dqO5x3zIAAAAASUVORK5CYII="

#define ICHID "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAbNJREFUeNq8lb1KA0EUhffHGAiCooJYCD6DGLAxiAELIYIIFr6ACBba\
WdrZpdLGN9BaUqTSRrCxsBbtDCgxoJVoMp4Ld/Ew7G5mZZMDHzu7Mztn5s6dGd8Y4w1DI/os6bML\
2JnLUufrNxNT72TUpR99q4Me1WU2sI3sWYhxoCbyPgbmdBAt0M4cO1kjUASjoEAEoAqa4Nv8qQfu\
wLb+60RUkI5DQozPTH81dIB9jXzNugKth3w4BXs08XvQAF+gAlZBqHU3YMU1dAGxRiOWkO3EjLAM\
2tTuwDV0kYnM8Jo62E/5eQH8aLsPVyNfnxO62KJXNU/r4IIGVU1rG1jpPaspLLqlNYtD1KRVKKct\
UWAvWdbdQeVplw0b6Vk3a6jZ5dEM47RB5Y5L1jFXFPfDlLgvUTKIKi7JwCxSQkhHuzFtljXTDLUr\
ZjUSjq0T4BHUwYkeP3F6oOx1NhKOaGaueko6kvqdUfPg3AqT6BNcJgzkBYxnNWLksC1Z37ashIj0\
Bib/a5TEZsLMOmAqTyOhlmD2nreRsJ4QxlreRp5eMbbZzCCMos0cXf11+4YduAJvSPoVYAAhloXv\
svwegQAAAABJRU5ErkJggg=="

#define ICRES "data:image/png;base64,\
iVBORw0KGgoAAAANSUhEUgAAABoAAAAaCAYAAACpSkzOAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJ\
bWFnZVJlYWR5ccllPAAAAUFJREFUeNpi/P//PwM9ABMDncCoRTS3KA6IS4B4NxDHkGMRCxFqQAY7\
Qy0DgeXUtghkMDcQFwKxKpL4P3IsYsSRj0C+0IcGFzroAOL3UAv/AvELKH8HXptAFqHhOCA+9J80\
8AGIG4HYBYt5YIxNsPA/+WANENtjswhbqnsGxPUEgvwfjrgKBmInUuIIpIETmhCM0OTCgPgjUhwJ\
AXEvEMtD5X8CsSMQHycm1a2F0h+A2B4tUYAs2IWm/jsQb4Wy2YFYitQMuwWI9wJxPBA/QXIxOngP\
xTAgQU6G3YEUd0pA/BmHOkEk9jtikjep2AyIV6GlPiN0dcT4qA4tJf1DC3pQYuFFEpsHxL/I8dFT\
EvLRLSDWIzYfoYPfRBZn66FJ/xIp+QgZJAGxJY6g+w1NJIeB+A0QXye1UB2tykegRQABBgCddKYX\
SLmGxAAAAABJRU5ErkJggg=="

#define ICSPAC "data:image/gif;base64,\
R0lGODlhAQABAIAAAAAAAP///yH5BAEAAAAALAAAAAABAAEAQAIBRAA7"

#ifdef CS_CACHEEX
#define ICARRR "data:image/gif;base64,\
R0lGODlhJAALALMAAAUtBRB9DxKLERB9Dxe4FpPykhaxFUjpR4Pwgh3kHHXudLD1r+L84vj++P//\
/////yH/C05FVFNDQVBFMi4wAwEAAAAh+QQJDwAFACwAAAAAJAALAAAEarDISau9OGsNeu1gKI6k\
OAHHoaQLwzQwvCCpyrqxDEqA4v+KRSvmWgB/whfMtUMlngmDgdBy4RYHaHRatTYWIal4YBAcEGiE\
UCGWks1pNaI52EqDs/SBMKi38XEHOzwlhYYhG4kZg4qNGxEAIfkECQ8ABQAsAAAAACQACwAABG6w\
yEmrvThrDXrtYCiOpDgBTbMgR6u0C8Ok9Noe7xEzBCihDdlCQSwqFjGa0FhENnwA2WxxSFgTBgNh\
J1VVr9mtLIRAIBXZ9MAgOJTL53R23UZAywfCYIBNH1dveXt9WX8+PyWJiiEbjRmHjpEbEQAh+QQJ\
DwAFACwAAAAAJAALAAAEbrDISau9OGsNeu1gKI6kOAEL46zsghywAqcq67jwoYASoCiLFIvBWPyO\
v2DNQTQeeQCDgUAjqhaHhDYhpVqJt+w2FAgIDog0IqiQugOGs3ptdBugBqBLfSCUuW56c31/dx49\
JYmKIRuNGTyOkY0RACH+L0NvcHlyaWdodCBNYXJ5IEdhcnJlbiAxOTk4DQpBTEwgUklHSFRTIFJF\
U0VSVkVEADs="

#define ICARRL "data:image/gif;base64,\
R0lGODlhJAALALMAAAUtBRB9DxKLERB9Dxe4FpPykhaxFUjpR4Pwgh3kHHXudLD1r+L84vj++P//\
/////yH/C05FVFNDQVBFMi4wAwEAAAAh+QQJDwAFACwAAAAAJAALAAAEb7DISau9mIKdu5dbKI5k\
OU7h0qwrwyzHocQHorKNC8sxUIQu1muhKBoVi2BrQTwWRSqXdEEwGBLYxCEqfVWv2YMvZEOYEQeB\
YWBtIxdntJrdNvh+m9qZqagnBgMEemZ8fgN3eCaKiyEVjR+QkZIdEQAh+QQJDwAFACwAAAAAJAAL\
AAAEcLDISau9mIKdu5dbKI5kOU4hwTDLcSjugSxNXa/tG881UISNxUJBLCoWKxtraCQiGb0QjmAw\
JK6JA23FXVCtWG2D6wshDgLDoMo+LhDwc3rNNrjhvt9GqKgnBgMEMnF8foCCeCgmi4wiFSEfkZKT\
HhEAIfkECQ8ABQAsAAAAACQACwAABG2wyEmrvZiCnbuXWyiOZDlOoXKsyOK8L8Msq8q6cLwARar8\
CxlstvgZgUJdUSFKOBMHl2y6IBgMT6h0OrMaeKHrVbFYIM6Ig8AQEI/L6LQgEOD1Nlg64RAvK9wJ\
enxofl8oJoiJIhUhH46PkB4RACH+L0NvcHlyaWdodCBNYXJ5IEdhcnJlbiAxOTk4DQpBTEwgUklH\
SFRTIFJFU0VSVkVEADs="
#endif

#define TPLHEADER "\
<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\
<HTML>\n\
<HEAD>\n\
	<TITLE>OSCAM ##CS_VERSION## build ###CS_SVN_VERSION##</TITLE>\n\
	<meta http-equiv=\"Content-Type\" content=\"text/html; charset=##HTTP_CHARSET##\">\n\
	<link rel=\"stylesheet\" type=\"text/css\" href=\"site.css\">\n\
	<link href=\"favicon.ico\" rel=\"icon\" type=\"image/x-icon\">\n\
	<script type=\"text/javascript\" src=\"oscam.js\"></script>\n\
##REFRESH##\
</HEAD>\n\
<BODY>\n\
	<DIV CLASS=\"header\"><H2 CLASS=\"headline1\">OSCAM ##CS_VERSION## build ###CS_SVN_VERSION##</H2></DIV>\n"

#define TPLAPIHEADER "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<oscam version=\"##CS_VERSION## build ###CS_SVN_VERSION##\" revision=\"##CS_SVN_VERSION##\" starttime=\"##APISTARTTIME##\" uptime=\"##APIUPTIME##\" readonly=\"##APIREADONLY##\">\n"

#define TPLJSONHEADER "##CALLBACK##({\n\
\"oscam\": {\n\
    \"version\": \"##CS_VERSION## build ###CS_SVN_VERSION##\",\n\
    \"revision\": \"##CS_SVN_VERSION##\",\n\
    \"starttime\": \"##APISTARTTIME##\",\n\
    \"uptime\": \"##APIUPTIME##\",\n\
    \"readonly\": \"##APIREADONLY##\","

#define TPLAPIERROR "##TPLAPIHEADER##\n\
		<error>##APIERRORMESSAGE##</error>\n\
##TPLAPIFOOTER##"

#define TPLAPICONFIRMATION "##TPLAPIHEADER##\n\
		<confirm>##APICONFIRMMESSAGE##</confirm>\n\
##TPLAPIFOOTER##"

#define TPLFOOTER "\
	<BR><HR><BR>\n\
	<DIV CLASS=\"footer\">\n\
		<H4 CLASS=\"footline1\">OSCAM Webinterface developed by Streamboard Team - ##CURDATE## ##CURTIME## | Access from ##CURIP##</H4>\n\
		<H4 CLASS=\"footline2\">Start: ##STARTDATE## - ##STARTTIME## | UpTime: ##UPTIME## | Process ID: ##PROCESSID##</H4>\n\
		<H4 CLASS=\"styleauthor\">WebIf Style by </H4>\n\
	</DIV>\n\
</BODY>\n\
</HTML>"

#define TPLAPIFOOTER "</oscam>"

#define TPLJSONFOOTER "    }\n\
})"

#define TPLREFRESH "\
	<script type=\"text/javascript\">\n\
	<!--\n\
	addUnloadHandler();\n\
	window.onload=setTimeout(function(){saveScroll();window.location.href=\"##REFRESHURL##\";},##REFRESHTIME## * 1000)\n\
	//-->\n\
	</script>\n"

#define TPLHELPPREFIX "<A HREF=\"http://streamboard.de.vu/wiki/OSCam/##LANGUAGE##/Config/oscam."

#define TPLHELPSUFFIX "\" TARGET=\"_blank\">"

#define TPLMENU "\
	<TABLE border=0 class=\"menu\">\n\
		<TR>\n\
			<TD CLASS=\"##MENUACTIVE0##\"><A HREF=\"status.html\">STATUS</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE1##\"><A HREF=\"config.html\">CONFIGURATION</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE2##\"><A HREF=\"readers.html\">READERS</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE3##\"><A HREF=\"userconfig.html\">USERS</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE4##\"><A HREF=\"services.html\">SERVICES</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE5##\"><A HREF=\"files.html\">FILES</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE6##\"><A HREF=\"failban.html\">FAILBAN</A>##FAILBANNOTIFIER##</TD>\n\
##TPLCACHEEXMENUITEM##\
			<TD CLASS=\"##MENUACTIVE8##\"><A HREF=\"script.html\">SCRIPT</A></TD>\n\
			<TD CLASS=\"##MENUACTIVE9##\"><A HREF=\"shutdown.html\">SHUTDOWN</A></TD>\n\
		</TR>\n\
	</TABLE>\n"

#define TPLCACHEEXMENUITEM "			<TD CLASS=\"##MENUACTIVE7##\"><A HREF=\"cacheex.html\">CACHEEX</A></TD>\n"

#define TPLCONFIGMENU "\
	<TABLE border=0 class=\"configmenu\">\n\
		<TR>\n\
			<TD CLASS=\"##CMENUACTIVE0##\"><A HREF=\"config.html?part=global\">Global</A></TD>\n\
##TPLCONFIGMENULB##\
##TPLCONFIGMENUCAMD33##\
##TPLCONFIGMENUCAMD35##\
##TPLCONFIGMENUCAMD35TCP##\
##TPLCONFIGMENUNEWCAMD##\
##TPLCONFIGMENURADEGAST##\
##TPLCONFIGMENUCCCAM##\
##TPLCONFIGMENUGBOX##\
##TPLCONFIGMENUCSP##\
##TPLCONFIGMENUANTICASC##\
			<TD CLASS=\"##CMENUACTIVE9##\"><A HREF=\"config.html?part=monitor\">Monitor/WebIf</A></TD>\n\
##TPLCONFIGMENUSERIAL##\
##TPLCONFIGMENUDVBAPI##\
		</TR>\n\
	</TABLE>\n"

#define TPLFILEMENU "\
	<TABLE border=0 class=\"configmenu\">\n\
		<TR>\n\
			<TD CLASS=\"##CMENUACTIVE12##\"><A HREF=\"files.html?file=version\">oscam.version</A></TD>\n\
##TPLFILEMENUDVBAPI##\
			<TD CLASS=\"##CMENUACTIVE13##\"><A HREF=\"files.html?file=conf\">oscam.conf</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE14##\"><A HREF=\"files.html?file=user\">oscam.user</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE15##\"><A HREF=\"files.html?file=server\">oscam.server</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE16##\"><A HREF=\"files.html?file=services\">oscam.services</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE17##\"><A HREF=\"files.html?file=srvid\">oscam.srvid</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE18##\"><A HREF=\"files.html?file=provid\">oscam.provid</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE19##\"><A HREF=\"files.html?file=tiers\">oscam.tiers</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE25##\"><A HREF=\"files.html?file=whitelist\">oscam.whitelist</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE20##\"><A HREF=\"files.html?file=logfile\">logfile</A></TD>\n\
			<TD CLASS=\"##CMENUACTIVE21##\"><A HREF=\"files.html?file=userfile\">userfile</A></TD>\n\
##TPLFILEMENUANTICASC##\
		</TR>\n\
	</TABLE>"

#define TPLFILE "\
##TPLHEADER##\
##TPLMENU##\
##TPLFILEMENU##\n\
	<DIV CLASS=\"debugmenu\">##SDEBUG##</DIV>\
	<DIV CLASS=\"logmenu\">##LOGMENU##</DIV>\
	<DIV CLASS=\"filterform\">##FILTERFORM##</DIV>\
	<FORM ACTION=\"files.html\" method=\"post\">\n\
		<INPUT TYPE=\"hidden\" NAME=\"file\" VALUE=\"##PART##\">\n\
		<TEXTAREA NAME=\"filecontent\" CLASS=\"editor\" rows=\"50\" cols=\"200\">##FILECONTENT##</TEXTAREA>\n\
		<BR>##WRITEPROTECTION##<BR>\n\
		<INPUT TYPE=\"submit\" NAME=\"action\" VALUE=\"Save\" TITLE=\"Save file\" ##BTNDISABLED##>\n\
	</FORM>\n\
##TPLFOOTER##"

#define TPLAPIFILE "##TPLAPIHEADER##\n\
	<file filename=\"##APIFILENAME##\" writable=\"##APIWRITABLE##\">\n\
	<![CDATA[##FILECONTENT##]]>\n\
	</file>\n\
##TPLAPIFOOTER##"

#ifdef WITH_DEBUG
#define TPLDEBUGSELECT "\
	<SPAN CLASS=\"debugt\"> Switch Debug from&nbsp;##ACTDEBUG## to&nbsp;</SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"debugl\" HREF=\"##NEXTPAGE##?debug=0##CUSTOMPARAM##\" title=\"no debugging (default)\">&nbsp;0&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS1##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL1####CUSTOMPARAM##\" title=\"detailed error messages\">&nbsp;1&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS2##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL2####CUSTOMPARAM##\" title=\"ATR parsing info, ECM dumps, CW dumps\">&nbsp;2&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS4##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL4####CUSTOMPARAM##\" title=\"traffic from/to the reader\">&nbsp;4&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS8##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL8####CUSTOMPARAM##\" title=\"traffic from/to the clients\">&nbsp;8&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS16##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL16####CUSTOMPARAM##\" title=\"traffic to the reader-device on IFD layer\">&nbsp;16&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS32##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL32####CUSTOMPARAM##\" title=\"traffic to the reader-device on I/O layer\">&nbsp;32&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS64##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL64####CUSTOMPARAM##\" title=\"EMM logging\">&nbsp;64&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS128##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL128####CUSTOMPARAM##\" title=\"DVBAPI logging\">&nbsp;128&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS256##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL256####CUSTOMPARAM##\" title=\"Loadbalancer logging\">&nbsp;256&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS512##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL512####CUSTOMPARAM##\" title=\"CACHEEX logging\">&nbsp;512&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS1024##\" HREF=\"##NEXTPAGE##?debug=##DEBUGVAL1024####CUSTOMPARAM##\" title=\"Client ECM logging\">&nbsp;1024&nbsp;</A></SPAN>\n\
	<SPAN CLASS=\"debugl\"><A CLASS=\"##DCLASS65535##\" HREF=\"##NEXTPAGE##?debug=65535##CUSTOMPARAM##\" title=\"debug all\">&nbsp;ALL&nbsp;</A></SPAN>\n"
#endif

#define TPLFAILBAN "\
##TPLHEADER##\
##TPLMENU##\
		<TABLE border=0 class=\"configmenu\">\n\
		<TR>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"failban.html?action=delete&intip=all\">Clear all</TD>\n\
		</TR>\n\
	</TABLE>\
	<TABLE CLASS=\"stats\">\n\
		<TR><TH colspan=\"6\">List of banned IP Addresses</TH></TR>\n\
		<TR><TH>IP Address</TH><TH>User</TH><TH>Violation date</TH><TH>Violation count</TH><TH>left ban time</TH><TH>Action</TH></TR>\n\
##FAILBANROW##\
	</TABLE><BR>\n\
##TPLFOOTER##"

#define TPLAPIFAILBAN "##TPLAPIHEADER##\n\
	<failbanlist>\n\
##APIFAILBANROW##\
	</failbanlist>\n\
##TPLAPIFOOTER##"

#define TPLFAILBANBIT "\
		<TR>\n\
			<TD>##IPADDRESS##</TD>\
			<TD>##VIOLATIONUSER##</TD>\
			<TD>##VIOLATIONDATE##</TD>\
			<TD>##VIOLATIONCOUNT##</TD>\
			<TD class=\"centered\">##LEFTTIME##</TD>\
			<TD class=\"centered\"><A HREF=\"failban.html?action=delete&intip=##INTIP##\" TITLE=\"Delete Entry\"><IMG CLASS=\"icon\" SRC=\"image?i=ICDEL\" ALT=\"Delete Entry\"/></A></TD>\n\
		</TR>\n"

#define TPLAPIFAILBANBIT "\
		<ip ipinteger=\"##INTIP##\" user=\"##VIOLATIONUSER##\" count=\"##VIOLATIONCOUNT##\" date=\"##VIOLATIONDATE##\" secondsleft=\"\">##IPADDRESS##</ip>\n"

#ifdef CS_ANTICASC
#define TPLCONFIGMENUANTICASC "			<TD CLASS=\"##CMENUACTIVE8##\"><A HREF=\"config.html?part=anticasc\">Anticascading</A></TD>\n"
#define TPLFILEMENUANTICASC "			<TD CLASS=\"##CMENUACTIVE22##\"><A HREF=\"files.html?file=anticasc\">AC Log</A></TD>\n"
#endif

#ifdef HAVE_DVBAPI
#define TPLCONFIGMENUDVBAPI "			<TD CLASS=\"##CMENUACTIVE11##\"><A HREF=\"config.html?part=dvbapi\">DVB-Api</A></TD>\n"
#define TPLFILEMENUDVBAPI "			<TD CLASS=\"##CMENUACTIVE23##\"><A HREF=\"files.html?file=dvbapi\">oscam.dvbapi</A></TD>\n"
#endif

#ifdef WITH_LB
#define TPLCONFIGMENULB "			<TD CLASS=\"##CMENUACTIVE1##\"><A HREF=\"config.html?part=loadbalancer\">Loadbalancer</A></TD>\n"
#endif

#ifdef MODULE_CAMD33
#define TPLCONFIGMENUCAMD33 "			<TD CLASS=\"##CMENUACTIVE2##\"><A HREF=\"config.html?part=camd33\">Camd3.3</A></TD>\n"
#endif

#ifdef MODULE_CAMD35
#define TPLCONFIGMENUCAMD35 "			<TD CLASS=\"##CMENUACTIVE3##\"><A HREF=\"config.html?part=camd35\">Camd3.5</A></TD>\n"
#endif

#ifdef MODULE_CAMD35_TCP
#define TPLCONFIGMENUCAMD35TCP "			<TD CLASS=\"##CMENUACTIVE4##\"><A HREF=\"config.html?part=camd35tcp\">Camd3.5 TCP</A></TD>\n"
#endif

#ifdef CS_CACHEEX
#define TPLCONFIGMENUCSP "			<TD CLASS=\"##CMENUACTIVE24##\"><A HREF=\"config.html?part=csp\">CSP</A></TD>\n"
#endif

#ifdef MODULE_CCCAM
#define TPLCONFIGMENUCCCAM "			<TD CLASS=\"##CMENUACTIVE7##\"><A HREF=\"config.html?part=cccam\">CCcam</A></TD>\n"
#endif

#ifdef MODULE_NEWCAMD
#define TPLCONFIGMENUNEWCAMD "			<TD CLASS=\"##CMENUACTIVE5##\"><A HREF=\"config.html?part=newcamd\">Newcamd</A></TD>\n"
#endif

#ifdef MODULE_RADEGAST
#define TPLCONFIGMENURADEGAST "			<TD CLASS=\"##CMENUACTIVE6##\"><A HREF=\"config.html?part=radegast\">Radegast</A></TD>\n"
#endif

#ifdef MODULE_SERIAL
#define TPLCONFIGMENUSERIAL "			<TD CLASS=\"##CMENUACTIVE10##\"><A HREF=\"config.html?part=serial\">Serial</A></TD>\n"
#endif

#define TPLSTATUS "\
##TPLHEADER##\
##TPLMENU##\
<DIV CLASS=\"filterform\">\n\
	<form action=\"status.html\" method=\"get\">\n\
		<select name=\"hideidle\">\n\
			<option value=\"0\" ##HIDEIDLECLIENTSSELECTED0##>Show idle clients</option>\n\
			<option value=\"1\" ##HIDEIDLECLIENTSSELECTED1##>Hide idle clients</option>\n\
			<option value=\"2\">Show hidden clients</option>\n\
		</select>\n\
		<input type=\"submit\" value=\"Update\">\n\
	</form>\n\
</DIV>\n\
	<TABLE WIDTH=\"100%\" class=\"status\">\n\
		<TR>\n\
			<TH class=\"statuscol0\">hide</TH>\n\
			<TH class=\"statuscol1\">Thread ID</TH>\n\
			<TH class=\"statuscol2\">Type</TH>\n\
			<TH class=\"statuscol3\">ID</TH>\n\
			<TH class=\"statuscol4\">Label</TH>\n\
			<TH class=\"statuscol5\">AU</TH>\n\
			<TH class=\"statuscol6\">Crypted</TH>\n\
			<TH class=\"statuscol7\">Address</TH>\n\
			<TH class=\"statuscol8\">Port</TH>\n\
			<TH class=\"statuscol9\">Protocol</TH>\n\
			<TH class=\"statuscol10\">Login</TH>\n\
			<TH class=\"statuscol11\">Online</TH>\n\
			<TH class=\"statuscol12\">CAID:SRVID</TH>\n\
			<TH class=\"statuscol13\">Current Channel</TH>\n\
			<TH class=\"statuscol14\">LB Value/ Reader</TH>\n\
			<TH class=\"statuscol15\">Idle</TH>\n\
			<TH class=\"statuscol16\">Status</TH>\n\
		</TR>\n\
##SERVERSTATUS##\n\
##READERHEADLINE##\n\
##READERSTATUS##\n\
##PROXYHEADLINE##\n\
##PROXYSTATUS##\n\
##CLIENTHEADLINE##\n\
##CLIENTSTATUS##\n\
	</TABLE><BR>\n\
	<DIV class=\"log\">\n\
##LOGHISTORY##\
	</DIV><BR>\n\
##SDEBUG##\
##TPLFOOTER##"

#define TPLAPISTATUS "##TPLAPIHEADER##\n\
	<status>\n\
##APISTATUSBITS##\
	</status>\n\
	<log><![CDATA[ \n\
   ##LOGHISTORY##\
	]]></log>\
##TPLAPIFOOTER##"

#define TPLJSONSTATUS "##TPLJSONHEADER##\n\
	\"status\": { \"client\":[\n\
	                          ##JSONSTATUSBITS##\
								]}\
##TPLJSONFOOTER##"

#define TPLCLIENTSTATUSBIT "\
		<TR class=\"##CLIENTTYPE##\">\n\
			<TD class=\"statuscol0\"><A HREF =\"status.html?hide=##HIDEIDX##\" TITLE=\"Hide this client\"><IMG CLASS=\"icon\" SRC=\"image?i=ICHID\" ALT=\"Hide\"></A></TD>\n\
			<TD class=\"statuscol1\">##CSIDX##</TD>\n\
			<TD class=\"statuscol2\">##CLIENTTYPE##</TD>\n\
			<TD class=\"statuscol3\">##CLIENTCNR##</TD>\n\
			<TD class=\"statuscol4\"><SPAN TITLE=\"##CLIENTDESCRIPTION##\">##CLIENTUSER##</SPAN></TD>\n\
			<TD class=\"statuscol5\">##CLIENTCAUHTTP##</TD>\n\
			<TD class=\"statuscol6\">##CLIENTCRYPTED##</TD>\n\
			<TD class=\"statuscol7\">##CLIENTIP##</TD>\n\
			<TD class=\"statuscol8\">##CLIENTPORT##</TD>\n\
			<TD class=\"statuscol9\"><SPAN TITLE=\"##CLIENTPROTOTITLE##\">##CLIENTPROTO##</SPAN></TD>\n\
			<TD class=\"statuscol10\">##CLIENTLOGINDATE##</TD>\n\
			<TD class=\"statuscol11\">##CLIENTLOGINSECS##</TD>\n\
			<TD class=\"statuscol12\">##CLIENTCAID##:##CLIENTSRVID##</TD>\n\
			<TD class=\"statuscol13\">##CLIENTSRVPROVIDER####CLIENTSRVNAME##</TD>\n\
			<TD class=\"statuscol14\">##CLIENTLBVALUE##</TD>\n\
			<TD class=\"statuscol15\"><SPAN CLASS=\"##CLIENTIDLESECSCLASS##\">##CLIENTIDLESECS##</SPAN></TD>\n\
			<TD class=\"statuscol16\">##CLIENTCON##</TD>\n\
		</TR>\n"


#define TPLAPISTATUSBIT "      <client type=\"##CLIENTTYPE##\" name=\"##CLIENTUSER##\" desc=\"##CLIENTDESCRIPTION##\" protocol=\"##CLIENTPROTO##\" protocolext=\"##CLIENTPROTOTITLE##\" au=\"##CLIENTCAU##\" thid=\"##CSIDX##\">\n\
         <request caid=\"##CLIENTCAID##\" srvid=\"##CLIENTSRVID##\" ecmtime=\"##CLIENTLASTRESPONSETIME##\" ecmhistory=\"##CLIENTLASTRESPONSETIMEHIST##\" answered=\"##LASTREADER##\">##CLIENTSRVPROVIDER####CLIENTSRVNAME##</request>\n\
         <times login=\"##CLIENTLOGINDATE##\" online=\"##CLIENTLOGINSECS##\" idle=\"##CLIENTIDLESECS##\"></times>\n\
         <connection ip=\"##CLIENTIP##\" port=\"##CLIENTPORT##\">##CLIENTCON##</connection>\n\
      </client>\n"

#define TPLJSONSTATUSBIT "{\n\
\"thid\": \"##CSIDX##\",\n\
\"type\": \"##CLIENTTYPE##\",\n\
\"name\": \"##CLIENTUSER##\",\n\
\"desc\": \"##CLIENTDESCRIPTION##\",\n\
\"protocol\": \"##CLIENTPROTO##\",\n\
\"protocolext\": \"##CLIENTPROTOTITLE##\",\n\
\"au\": \"##CLIENTCAU##\",\n\
\"request\": {\n\
    \"caid\": \"##CLIENTCAID##\",\n\
    \"srvid\": \"##CLIENTSRVID##\",\n\
    \"ecmtime\": \"##CLIENTLASTRESPONSETIME##\",\n\
    \"ecmhistory\": \"##CLIENTLASTRESPONSETIMEHIST##\",\n\
    \"answered\": \"##LASTREADER##\",\n\
    \"$\": \"##CLIENTSRVPROVIDER####CLIENTSRVNAME##\"\n\
},\n\
\"times\": {\n\
    \"login\": \"##CLIENTLOGINDATE##\",\n\
    \"online\": \"##CLIENTLOGINSECS##\",\n\
    \"idle\": \"##CLIENTIDLESECS##\"\n\
},\n\
\"connection\": {\n\
    \"ip\": \"##CLIENTIP##\",\n\
    \"port\": \"##CLIENTPORT##\",\n\
    \"$\": \"##CLIENTCON##\"\n\
}\n\
}##JSONARRAYDELIMITER##"

#define TPLAPIUSERCONFIGLIST "##TPLAPIHEADER##\n\
    <users>\n\
##APIUSERCONFIGS##\
    </users>\n\
    <totals>\n\
        <cwok>##TOTAL_CWOK##</cwok>\n\
        <cwnok>##TOTAL_CWNOK##</cwnok>\n\
        <cwignore>##TOTAL_CWIGN##</cwignore>\n\
        <cwtimeout>##TOTAL_CWTOUT##</cwtimeout>\n\
        <cwcache>##TOTAL_CWCACHE##</cwcache>\n\
        <cwtun>##TOTAL_CWTUN##</cwtun>\n\
        <usertotal>##TOTAL_USERS##</usertotal>\n\
        <userdisabled>##TOTAL_DISABLED##</userdisabled>\n\
        <userexpired>##TOTAL_EXPIRED##</userexpired>\n\
        <useractive>##TOTAL_ACTIVE##</useractive>\n\
        <userconnected>##TOTAL_CONNECTED##</userconnected>\n\
        <useronline>##TOTAL_ONLINE##</useronline>\n\
    </totals>\n\
##TPLAPIFOOTER##"

#define TPLAPIUSERCONFIGLISTBIT "        <user name=\"##USER##\" status=\"##STATUS##\" ip=\"##CLIENTIP##\" protocol=\"##CLIENTPROTO##\">\n\
            <stats>\n\
                <cwok>##CWOK##</cwok>\n\
                <cwnok>##CWNOK##</cwnok>\n\
                <cwignore>##CWIGN##</cwignore>\n\
                <cwtimeout>##CWTOUT##</cwtimeout>\n\
                <cwcache>##CWCACHE##</cwcache>\n\
                <cwtun>##CWTUN##</cwtun>\n\
                <cwlastresptime>##CWLASTRESPONSET##</cwlastresptime>\n\
                <emmok>##EMMOK##</emmok>\n\
                <emmnok>##EMMNOK##</emmnok>\n\
                <cwrate>##CWRATE##</cwrate>\n\
                <timeonchannel>##CLIENTTIMEONCHANNELAPI##</timeonchannel>\n\
                <expectsleep>##CLIENTTIMETOSLEEPAPI##</expectsleep>\n\
            </stats>\n\
        </user>\n"


#define TPLUSERCONFIGLIST "\
##TPLHEADER##\
##TPLMENU##\
##MESSAGE##\
	<TABLE CLASS=\"configmenu\">\n\
		<TR>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"userconfig.html?part=adduser\">Add User</A></TD>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"userconfig.html?action=reinit\">Reinit User DB</A></TD>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"userconfig.html?action=resetalluserstats\">Reset Userstats</A></TD>\n\
			<TD CLASS=\"configmenu\"><A TARGET=\"_blank\" HREF=\"graph.svg?type=users&hidelabels=1\">Show Graphs</A></TD>\n\
		</TR>\n\
	</TABLE>\n\
	<TABLE CLASS=\"users\">\n\
		<TR>\n\
			<TH>Enabled</TH>\n\
			<TH>Label</TH>\n\
			<TH>Status</TH>\n\
			<TH>Address</TH>\n\
			<TH>Protocol</TH>\n\
			<TH>Last Channel</TH>\n\
			<TH>On Channel</TH>\n\
			<TH>Idle</TH>\n\
			<TH TITLE=\"Delivered ECM with status OK\">OK</TH>\n\
			<TH TITLE=\"Delivered ECM with status not OK\">NOK</TH>\n\
			<TH TITLE=\"Ignored ECM by filters, part of NOK\">IGN</TH>\n\
			<TH TITLE=\"Timeout ECM, part of NOK\">TOUT</TH>\n\
			<TH TITLE=\"Delivered ECM from cache, part of OK\">CACHE</TH>\n\
			<TH TITLE=\"Delivered ECM from tunneled, part of OK\">TUN</TH>\n\
			<TH TITLE=\"Last ECM Time\">LTIME</TH>\n\
			<TH TITLE=\"Valid EMM delivered\">EOK</TH>\n\
			<TH TITLE=\"Invalid EMM delivered\">ENOK</TH>\n\
			<TH TITLE=\"CW rate since Server start (CW rate current Session)\">CW Rate</TH>\n\
			<TH TITLE=\"Different services during last 60s\">CASC USERS</TH>\n\
			<TH colspan=\"3\" class=\"centered\">Action</TH>\n\
		</TR>\n\
##USERCONFIGS##\
##NEWUSERFORM##\
	</TABLE><BR>\n\
	<SPAN CLASS = \"user_totals_headline\">Totals for the server:</SPAN>\n\
	<TABLE CLASS=\"user_totals\">\n\
		<TR>\n\
			<TH TITLE=\"Total users\">Total</TH>\n\
			<TH TITLE=\"Total disabled users\">Disabled</TH>\n\
			<TH TITLE=\"Total expired users\">Expired</TH>\n\
			<TH TITLE=\"Total active users\">Active</TH>\n\
			<TH TITLE=\"Connected users\">Connected</TH>\n\
			<TH TITLE=\"Online users requesting ecms\">Online</TH>\n\
			<TH TITLE=\"Delivered ECM with status OK\">OK</TH>\n\
			<TH TITLE=\"Delivered ECM with status not OK\">NOK</TH>\n\
			<TH TITLE=\"Ignored ECM by filters, part of NOK\">IGN</TH>\n\
			<TH TITLE=\"Timeout ECM, part of NOK\">TOUT</TH>\n\
			<TH TITLE=\"Delivered ECM from cache, part of OK\">CACHE</TH>\n\
			<TH TITLE=\"Delivered ECM from tunneled, part of OK\">TUN</TH>\n\
			<TH>Action</TH>\n\
		</TR>\n\
		<TR>\n\
			<TD class=\"centered\">##TOTAL_USERS##</TD>\n\
			<TD class=\"centered\">##TOTAL_DISABLED##</TD>\n\
			<TD class=\"centered\">##TOTAL_EXPIRED##</TD>\n\
			<TD class=\"centered\">##TOTAL_ACTIVE##</TD>\n\
			<TD class=\"centered\">##TOTAL_CONNECTED##</TD>\n\
			<TD class=\"centered\">##TOTAL_ONLINE##</TD>\n\
			<TD class=\"centered\">##TOTAL_CWOK## (##REL_CWOK##%)</TD>\n\
			<TD class=\"centered\">##TOTAL_CWNOK## (##REL_CWNOK##%)</TD>\n\
			<TD class=\"centered\">##TOTAL_CWIGN## (##REL_CWIGN##%)</TD>\n\
			<TD class=\"centered\">##TOTAL_CWTOUT## (##REL_CWTOUT##%)</TD>\n\
			<TD class=\"centered\">##TOTAL_CWCACHE## (##REL_CWCACHE##%)</TD>\n\
			<TD class=\"centered\">##TOTAL_CWTUN## (##REL_CWTUN##%)</TD>\n\
			<TD class=\"centered\"><A HREF=\"userconfig.html?action=resetserverstats\" TITLE=\"reset statistics for server\"><IMG CLASS=\"icon\" SRC=\"image?i=ICRES\" ALT=\"Reset Server Stats\"></A></TD>\n\
		</TR>\n\
	</TABLE><BR>\n\
##TPLFOOTER##"

#define TPLADDNEWUSER "\
		<TR>\n\
		<FORM action=\"user_edit.html\" method=\"get\">\n\
		<TD>&nbsp;</TD>\n\
		<TD colspan=\"6\">New User:&nbsp;&nbsp;<input name=\"user\" type=\"text\">&nbsp;&nbsp;&nbsp;<input type=\"submit\" value=\"Add User\" ##BTNDISABLED##></TD>\n\
		<TD colspan=\"10\" class=\"centered\"></TD>\n\
		</FORM>\n\
		<TR>\n"

#define TPLUSERCONFIGLISTBIT "\
		<TR class=\"##CLASSNAME##\">\n\
			<TD class=\"usercol0\"><A HREF=\"userconfig.html?user=##USERENC##&amp;action=##SWITCH##\" TITLE=\"##SWITCHTITLE##\"><IMG CLASS=\"icon\" SRC=\"##SWITCHICO##\" ALT=\"##SWITCHTITLE##\"></A></TD>\n\
			<TD class=\"usercol1\"><SPAN TITLE=\"##DESCRIPTION##\">##USER##</SPAN>##CLIENTCOUNTNOTIFIER##</TD>\n\
			<TD class=\"usercol2\">##STATUS##</TD>\n\
			<TD class=\"usercol3\">##CLIENTIP##</TD>\n\
			<TD class=\"usercol4\"><SPAN TITLE=\"##CLIENTPROTOTITLE##\">##CLIENTPROTO##</SPAN></TD>\n\
			<TD class=\"usercol5\">##LASTCHANNEL##</TD>\n\
			<TD class=\"usercol6\" title=\"##CLIENTTIMETOSLEEP##\">##CLIENTTIMEONCHANNEL##</TD>\n\
			<TD class=\"usercol7\">##IDLESECS##</TD>\n\
			<TD class=\"usercol8\">##CWOK##</TD>\n\
			<TD class=\"usercol9\">##CWNOK##</TD>\n\
			<TD class=\"usercol10\">##CWIGN##</TD>\n\
			<TD class=\"usercol11\">##CWTOUT##</TD>\n\
			<TD class=\"usercol12\">##CWCACHE##</TD>\n\
			<TD class=\"usercol13\">##CWTUN##</TD>\n\
			<TD class=\"usercol14\">##CWLASTRESPONSET##</TD>\n\
			<TD class=\"usercol15\">##EMMOK##</TD>\n\
			<TD class=\"usercol16\">##EMMNOK##</TD>\n\
			<TD class=\"usercol17\">##CWRATE####CWRATE2##</TD>\n\
			<TD class=\"usercol18\">##CASCUSERSCOMB##</TD>\n\
			<TD class=\"usercol19\"><A HREF=\"user_edit.html?user=##USERENC##\" TITLE=\"edit this user\"><IMG CLASS=\"icon\" SRC=\"image?i=ICEDI\" ALT=\"Edit User\"></A></TD>\n\
			<TD class=\"usercol20\"><A HREF=\"userconfig.html?user=##USERENC##&amp;action=resetstats\" TITLE=\"reset statistics for this user\"><IMG CLASS=\"icon\" SRC=\"image?i=ICRES\" ALT=\"Reset Stats\"></A></TD>\n\
			<TD class=\"usercol21\"><A HREF=\"userconfig.html?user=##USERENC##&amp;action=delete\" TITLE=\"delete this user\"><IMG CLASS=\"icon\" SRC=\"image?i=ICDEL\" ALT=\"Delete User\"></A></TD>\n\
		</TR>\n"

#define TPLAPIUSEREDIT "##TPLAPIHEADER##\n\
	<account>\n\
		<user>##USERNAME##</user>\n\
		<pwd>##PASSWORD##</pwd>\n\
		<description>##DESCRIPTION##</description>\n\
		<disabled>##DISABLEDVALUE##</disabled>\n\
		<expdate>##EXPDATE##</expdate>\n\
		<failban>##FAILBAN##</failban>\n\
		<allowedtimeframe>##ALLOWEDTIMEFRAME##</allowedtimeframe>\n\
		<group>##GROUPS##</group>\n\
		<hostname>##DYNDNS##</hostname>\n\
		<uniq>##UNIQVALUE##</uniq>\n\
		<sleep>##SLEEP##</sleep>\n\
		<monlevel>##MONVALUE##</monlevel>\n\
		<au>##AUREADER##</au>\n\
		<services>##SERVICES##</services>\n\
		<caid>##CAIDS##</caid>\n\
		<ident>##IDENTS##</ident>\n\
		<chid>##CHIDS##</chid>\n\
		<class>##CLASS##</class>\n\
		<betatunnel>##BETATUNNELS##</betatunnel>\n\
		<suppresscmd08>##SUPPRESSCMD08VALUE##</suppresscmd08>\n\
		<sleepsend>##SLEEPSEND##</sleepsend>\n\
		<numusers>##AC_USERS##</numusers>\n\
		<penalty>##PENALTYVALUE##</penalty>\n\
		<cccmaxhops>##CCCMAXHOPS##</cccmaxhops>\n\
		<cccreshare>##CCCRESHARE##</cccreshare>\n\
		<cccignorereshare>##CCCIGNORERESHARE##</cccignorereshare>\n\
		<cccstealth>##CCCSTEALTH##</cccstealth>\n\
		<keepalive>##KEEPALIVEVALUE##</keepalive>\n\
    </account>\n\
##TPLAPIFOOTER##"

#define TPLUSEREDIT "\
##TPLHEADER##\
##TPLMENU##\
	<DIV CLASS=\"message\">##MESSAGE##</DIV>\
	<BR><BR>\n\
	<form action=\"user_edit.html\" method=\"get\">\n\
		<input name=\"user\" type=\"hidden\" value=\"##USERNAME##\">\n\
		<TABLE CLASS=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit User ##USERNAME##</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#pwd##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"pwd\" type=\"text\" size=\"63\" maxlength=\"63\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#description##TPLHELPSUFFIX##Description:</A></TD><TD><input name=\"description\" type=\"text\" size=\"63\" maxlength=\"256\" value=\"##DESCRIPTION##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#disabled##TPLHELPSUFFIX##Disabled:</A></TD><TD><SELECT NAME=\"disabled\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##DISABLEDCHECKED##>YES</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#expdate##TPLHELPSUFFIX##Exp. Date:</A></TD><TD><input name=\"expdate\" type=\"text\" size=\"30\" maxlength=\"30\" value=\"##EXPDATE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#failban##TPLHELPSUFFIX##Failban:</A></TD><TD><input name=\"failban\" type=\"text\" size=\"2\" maxlength=\"1\" value=\"##FAILBAN##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#allowedtimeframe##TPLHELPSUFFIX##Allowed Timeframe:</A></TD><TD><input name=\"allowedtimeframe\" type=\"text\" size=\"15\" maxlength=\"11\" value=\"##ALLOWEDTIMEFRAME##\">&nbsp;(hh:mm-hh:mm)</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#allowedprotocols##TPLHELPSUFFIX##Allowed Protocols:</A></TD><TD><input name=\"allowedprotocols\" type=\"text\" size=\"63\" maxlength=\"60\" value=\"##ALLOWEDPROTOCOLS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#group##TPLHELPSUFFIX##Group:</A></TD><TD><input name=\"group\" type=\"text\" size=\"20\" maxlength=\"100\" value=\"##GROUPS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#hostname##TPLHELPSUFFIX##Hostname:</A></TD><TD><input name=\"hostname\" type=\"text\" size=\"63\" maxlength=\"63\" value=\"##DYNDNS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#uniq##TPLHELPSUFFIX##Uniq:</A></TD>\n\
				<TD>\n\
					<select name=\"uniq\">\n\
						<option value=\"0\" ##UNIQSELECTED0##>0 - none</option>\n\
						<option value=\"1\" ##UNIQSELECTED1##>1 - strict first</option>\n\
						<option value=\"2\" ##UNIQSELECTED2##>2 - per IP</option>\n\
						<option value=\"3\" ##UNIQSELECTED3##>3 - strict last</option>\n\
						<option value=\"4\" ##UNIQSELECTED4##>4 - per IP last</option>\n\
					</select>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#sleep##TPLHELPSUFFIX##Sleep:</A></TD><TD><input name=\"sleep\" type=\"text\" size=\"4\" maxlength=\"4\" value=\"##SLEEP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#monlevel##TPLHELPSUFFIX##Monlevel:</A></TD>\n\
				<TD>\n\
					<select name=\"monlevel\">\n\
						<option value=\"0\" ##MONSELECTED0##>0 - no access to monitor</option>\n\
						<option value=\"1\" ##MONSELECTED1##>1 - only server and own procs</option>\n\
						<option value=\"2\" ##MONSELECTED2##>2 - all procs, but viewing only, default</option>\n\
						<option value=\"3\" ##MONSELECTED3##>3 - all procs, reload of oscam.user possible</option>\n\
						<option value=\"4\" ##MONSELECTED4##>4 - complete access</option>\n\
					</select>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#au##TPLHELPSUFFIX##AU:</A></TD><TD><input name=\"au\" type=\"text\" size=\"63\" maxlength=\"63\" value=\"##AUREADER##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#services##TPLHELPSUFFIX##Services:</A></TD>\n\
				<TD>\n\
					<TABLE class=\"invisible\">\n\
##SIDS##\
					</TABLE>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#caid##TPLHELPSUFFIX##CAID:</A></TD><TD><input name=\"caid\" type=\"text\" size=\"63\" maxlength=\"160\" value=\"##CAIDS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#ident##TPLHELPSUFFIX##Ident:</A></TD><TD><textarea name=\"ident\" cols=\"58\" rows=\"3\" class=\"bt\">##IDENTS##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#chid##TPLHELPSUFFIX##CHID:</A></TD><TD><textarea name=\"chid\" cols=\"58\" rows=\"3\" class=\"bt\">##CHIDS##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#class##TPLHELPSUFFIX##Class:</A></TD><TD><input name=\"class\" type=\"text\" size=\"63\" maxlength=\"150\" value=\"##CLASS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#betatunnel##TPLHELPSUFFIX##Betatunnel:</A></TD><TD><textarea name=\"betatunnel\" cols=\"58\" rows=\"3\" class=\"bt\">##BETATUNNELS##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#suppresscmd08##TPLHELPSUFFIX##Suppresscmd08:</A></TD><TD><SELECT NAME=\"suppresscmd08\"><OPTION VALUE=\"0\">CMD08 active</OPTION><OPTION VALUE=\"1\" ##SUPPRESSCMD08##>CMD08 suppressed</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#sleepsend##TPLHELPSUFFIX##Sleepsend:</A></TD><TD><input name=\"sleepsend\" type=\"text\" size=\"3\" maxlength=\"3\" value=\"##SLEEPSEND##\"> 0 or 255</TD></TR>\n\
##TPLUSEREDITCACHEEXBIT##\
##TPLUSEREDITANTICASC##\
##TPLUSEREDITCCCAM##\
			<TR><TD>##TPLHELPPREFIX##user#keepalive##TPLHELPSUFFIX##Keepalive:</A></TD><TD><SELECT NAME=\"keepalive\"><OPTION VALUE=\"0\">OFF</OPTION><OPTION VALUE=\"1\" ##KEEPALIVE##>ON</OPTION></SELECT></TD></TR>\n\
			<TR>\n\
				<TD class=\"centered\"><input type=\"submit\" name=\"action\" value=\"Save\" title=\"Save settings and reload users\" ##BTNDISABLED##></TD>\n\
				<TD class=\"centered\"><input name=\"newuser\" type=\"text\" size=\"20\" maxlength=\"20\" title=\"Enter new username if you want to clone this user\">&nbsp;&nbsp;&nbsp;<input type=\"submit\" name=\"action\" value=\"Save As\" title=\"Save as new user and reload users\" ##BTNDISABLED##></TD>\n\
			</TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"

#define TPLUSEREDITRDRSELECTED "						<option value=\"##READERNAME##\" ##SELECTED##>##READERNAME##</option>"

#ifdef CS_CACHEEX
#define TPLUSEREDITCACHEEXBIT "				<TR><TD>##TPLHELPPREFIX##user#cacheex##TPLHELPSUFFIX##Cache-EX-Mode:</A></TD>\n\
												<TD><select name=\"cacheex\">\n\
														<option value=\"0\" ##CACHEEXSELECTED0##>0 - No CacheEX</option>\n\
														<option value=\"1\" ##CACHEEXSELECTED1##>1 - CACHE PULL</option>\n\
														<option value=\"2\" ##CACHEEXSELECTED2##>2 - CACHE PUSH</option>\n\
														<option value=\"3\" ##CACHEEXSELECTED3##>3 - REVERSE CACHE PUSH</option>\n\
													</select>\n\
												</TD></TR>\n\
							<TR><TD>##TPLHELPPREFIX##user#cacheex_maxhop##TPLHELPSUFFIX##Cache-EX Maxhop:</A></TD><TD><input name=\"cacheex_maxhop\" type=\"text\" size=\"4\" maxlength=\"4\" value=\"##CACHEEX_MAXHOP##\"></TD></TR>\n"


#define TPLREADEREDITCACHEEXBIT "			<TR><TD>##TPLHELPPREFIX##server#cacheex##TPLHELPSUFFIX##Cache-EX-Mode:</A></TD>\n\
												<TD><select name=\"cacheex\">\n\
														<option value=\"0\" ##CACHEEXSELECTED0##>0 - No CacheEX</option>\n\
														<option value=\"1\" ##CACHEEXSELECTED1##>1 - CACHE PULL</option>\n\
														<option value=\"2\" ##CACHEEXSELECTED2##>2 - CACHE PUSH</option>\n\
														<option value=\"3\" ##CACHEEXSELECTED3##>3 - REVERSE CACHE PUSH</option>\n\
													</select>\n\
												</TD></TR>\n\
							<TR><TD>##TPLHELPPREFIX##server#cacheex_maxhop##TPLHELPSUFFIX##Cache-EX Maxhop:</A></TD><TD><input name=\"cacheex_maxhop\" type=\"text\" size=\"4\" maxlength=\"4\" value=\"##CACHEEX_MAXHOP##\"></TD></TR>\n"
#endif

#define TPLUSEREDITSIDOKBIT "\
						<TR>\n\
							<TD><INPUT NAME=\"services\" TYPE=\"CHECKBOX\" VALUE=\"##SIDLABEL##\" ##CHECKED##> ##SIDLABEL##</TD>\n"

#define TPLUSEREDITSIDNOBIT "\
							<TD><INPUT NAME=\"services\" TYPE=\"CHECKBOX\" VALUE=\"!##SIDLABEL##\" ##CHECKED##> !##SIDLABEL##</TD>\n\
						</TR>\n"

#ifdef CS_ANTICASC
# define TPLUSEREDITANTICASC "\
			<TR><TD>##TPLHELPPREFIX##user#numusers##TPLHELPSUFFIX##Anticascading numusers:</A></TD>\
				<TD><input name=\"numusers\" type=\"text\" size=\"3\" maxlength=\"3\" value=\"##AC_USERS##\">\
				&nbsp;Global Numuser value:<SPAN CLASS=\"global_conf\" TITLE=\"This value is used if Anticascading numusers = -1\"><A HREF=\"config.html?part=anticasc\">##CFGNUMUSERS##</A></SPAN></TD>\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#penalty##TPLHELPSUFFIX##Anticascading penalty:</A></TD>\
			<TD>\
			<select name=\"penalty\">\n\
					<option value=\"-1\" ##PENALTY-1##>-1 - Use global penalty level</option>\n\
					<option value=\"0\" ##PENALTY0##>&nbsp;0 - Only write to log</option>\n\
					<option value=\"1\" ##PENALTY1##>&nbsp;1 - Fake DW</option>\n\
					<option value=\"2\" ##PENALTY2##>&nbsp;2 - Ban</option>\n\
					<option value=\"3\" ##PENALTY3##>&nbsp;3 - Fake DW delayed</option>\n\
				</select>\n\
				&nbsp;Global Penalty level:<SPAN CLASS=\"global_conf\"><A HREF=\"config.html?part=anticasc\" TITLE=\"This value is used if Anticascading penalty = -1\">##CFGPENALTY##</A></SPAN>\n\
			</TD></TR>\n"
#endif

#ifdef MODULE_CCCAM
# define TPLUSEREDITCCCAM "\
			<TR><TD>##TPLHELPPREFIX##user#cccmaxhops##TPLHELPSUFFIX##CCC Maxhops:</A></TD><TD><input name=\"cccmaxhops\" type=\"text\" size=\"3\" maxlength=\"2\" value=\"##CCCMAXHOPS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#cccreshare##TPLHELPSUFFIX##CCC Reshare:</A></TD><TD><input name=\"cccreshare\" type=\"text\" size=\"3\" maxlength=\"2\" value=\"##CCCRESHARE##\">\
				&nbsp;Global CCCam Reshare:<SPAN CLASS=\"global_conf\" TITLE=\"This value is used if CCC Reshare = -1\"><A HREF=\"config.html?part=cccam\">##RESHARE##</A></SPAN></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#cccignorereshare##TPLHELPSUFFIX##CCC Ignore reshare:</A></TD><TD>\
			<SELECT NAME=\"cccignorereshare\">\
				<OPTION VALUE=\"-1\" ##CCCIGNRSHRSELECTED-1##>-1 - Use Global CCcam Ignore Reshare value</OPTION>\
				<OPTION VALUE=\"0\"  ##CCCIGNRSHRSELECTED0## >&nbsp;0 - Use reshare level of Server</OPTION>\
				<OPTION VALUE=\"1\"  ##CCCIGNRSHRSELECTED1## >&nbsp;1 - Use reshare level of Reader or User</OPTION>\
			</SELECT>\
			&nbsp;Global Ignore Reshare value:<SPAN CLASS=\"global_conf\" TITLE=\"This value is used if CCC Ignore reshare = -1\"><A HREF=\"config.html?part=cccam\">##CFGIGNORERESHARE##</A></SPAN>\
			</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##user#cccstealth##TPLHELPSUFFIX##CCC stealth:</A></TD><TD>\
			<SELECT NAME=\"cccstealth\">\
				<OPTION VALUE=\"-1\" ##CCCSTEALTHSELECTED-1##>GLOBAL: Use Global CCcam Stealth value</OPTION>\
				<OPTION VALUE=\"0\"  ##CCCSTEALTHSELECTED0## >DISABLE: Use extended OSCam<->CCcam Protocol</OPTION>\
				<OPTION VALUE=\"1\"  ##CCCSTEALTHSELECTED1## >ENABLE: Behaviour like the original CCcam Protocol</OPTION>\
			</SELECT>\
			&nbsp;Global CCcam Stealth value:<SPAN CLASS=\"global_conf\"><A HREF=\"config.html?part=cccam\">##STEALTH##</A></SPAN>\
			</TD></TR>\n"
#endif

#define TPLSIDTAB "\
##TPLHEADER##\
##TPLMENU##\
	<BR><BR><DIV class=\"log\">\n\
##SIDTABS##\
	</DIV>\n\
##TPLFOOTER##"

#define TPLSIDTABBIT "\
	label=##LABEL##<BR>\n\
	caid(##CAIDNUM##)=##CAIDS##<BR>\n\
	provider(##PROVIDNUM##)=##PROVIDS##<BR>\n\
	services(##SRVIDNUM##)=##SRVIDS##<BR><BR>\n"

#define TPLREADERS "\
##TPLHEADER##\
##TPLMENU##\
	<TABLE CLASS=\"configmenu\"><TR><TD CLASS=\"configmenu\"><A HREF=\"scanusb.html\">Scan USB</A></TD><TD CLASS=\"configmenu\"><A TARGET=\"_blank\" HREF=\"graph.svg?type=servers\">Show Graphs</A></TD></TR></TABLE>\n\
	<form action=\"readerconfig.html\" method=\"get\">\n\
		<TABLE CLASS=\"readers\">\n\
			<TR>\n\
				<TH>Enabled</TH>\n\
				<TH>Reader</TH>\n\
				<TH>Protocol</TH>\n\
				<TH>EMM error<br><span title=\"unknown EMM\"> UK </span>/<span title=\"global EMM\"> G </span>/<span title=\"shared EMM\"> S </span>/<span title=\"unique EMM\"> UQ </span></TH>\n\
				<TH>EMM written<br><span title=\"unknown EMM\"> UK </span>/<span title=\"global EMM\"> G </span>/<span title=\"shared EMM\"> S </span>/<span title=\"unique EMM\"> UQ </span></TH>\n\
				<TH>EMM skipped<br><span title=\"unknown EMM\"> UK </span>/<span title=\"global EMM\"> G </span>/<span title=\"shared EMM\"> S </span>/<span title=\"unique EMM\"> UQ </span></TH>\n\
				<TH>EMM blocked<br><span title=\"unknown EMM\"> UK </span>/<span title=\"global EMM\"> G </span>/<span title=\"shared EMM\"> S </span>/<span title=\"unique EMM\"> UQ </span></TH>\n\
				<TH>ECMs OK</TH>\n\
				<TH>ECMs NOK</TH>\n\
				<TH>LB Weight</TH>\n\
				<TH COLSPAN=\"5\">Action</TH>\n\
			</TR>\n\
##READERLIST##\n\
			<TR>\n\
				<TD>&nbsp;</TD>\
				<TD COLSPAN=\"2\" class=\"centered\">New Reader</TD>\n\
				<TD COLSPAN=\"2\" class=\"centered\">Label:&nbsp;&nbsp;<input type=\"text\" name=\"label\" value=\"##NEXTREADER##\"></TD>\n\
				<TD COLSPAN=\"2\" class=\"centered\">Protocol:&nbsp;&nbsp;\n\
					<select name=\"protocol\">\n\
						<option>mouse</option>\n\
						<option>mp35</option>\n\
						<option>smartreader</option>\n\
						<option>internal</option>\n\
						<option>sc8in1</option>\n\
##ADDPROTOCOL##\n\
					</select>\n\
				</TD>\n\
				<TD COLSPAN=\"5\" class=\"centered\"><input type=\"submit\" name=\"action\" value=\"Add\" ##BTNDISABLED##></TD>\n\
				<TD COLSPAN=\"5\"></TD>\n\
			</TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"

#define TPLAPIREADERS "##TPLAPIHEADER##\n\
    <readers>\n\
##APIREADERLIST##\
    </readers>\n\
##TPLAPIFOOTER##"

#define TPLAPIREADERSBIT "\
		<reader label=\"##READERNAME##\" protocol=\"##CTYP##\" type=\"##APIREADERTYPE##\" enabled=\"##APIREADERENABLED##\"></reader>"

#define TPLREADERSBIT "\
			<TR CLASS =\"##READERCLASS##\">\n\
				<TD class=\"centered\"><A HREF=\"readers.html?label=##READERNAMEENC##&amp;action=##SWITCH##\" TITLE=\"##SWITCHTITLE##\"><IMG CLASS=\"icon\" SRC=\"##SWITCHICO##\" ALT=\"##SWITCHTITLE##\"></A></TD>\n\
				<TD>##READERNAME##</TD>\n\
				<TD>##CTYP##</TD>\n\
				<TD class=\"centered\">##EMMERRORUK## / ##EMMERRORG## / ##EMMERRORS## / ##EMMERRORUQ##</TD>\n\
				<TD class=\"centered\">##EMMWRITTENUK## / ##EMMWRITTENG## / ##EMMWRITTENS## / ##EMMWRITTENUQ##</TD>\n\
				<TD class=\"centered\">##EMMSKIPPEDUK## / ##EMMSKIPPEDG## / ##EMMSKIPPEDS## / ##EMMSKIPPEDUQ##</TD>\n\
				<TD class=\"centered\">##EMMBLOCKEDUK## / ##EMMBLOCKEDG## / ##EMMBLOCKEDS## / ##EMMBLOCKEDUQ##</TD>\n\
				<TD class=\"centered\">##ECMSOK##</TD>\n\
				<TD class=\"centered\">##ECMSNOK##</TD>\n\
				<TD class=\"centered\">##LBWEIGHT##</TD>\n\
				<TD class=\"centered\"><A HREF=\"readerconfig.html?label=##READERNAMEENC##\" TITLE=\"Edit this Reader\"><IMG CLASS=\"icon\" SRC=\"image?i=ICEDI\" ALT=\"Edit Reader\"></A></TD>\n\
				<TD class=\"centered\">##ENTITLEMENT##</TD>\n\
				<TD class=\"centered\">##READERREFRESH##</TD>\n\
				<TD class=\"centered\"><A HREF=\"readerstats.html?label=##READERNAMEENC##&amp;hide=4\" TITLE=\"Show loadbalancer statistics\"><IMG CLASS=\"icon\" SRC=\"image?i=ICSTA\" ALT=\"Loadbalancer statistics\"></A></TD>\n\
				<TD class=\"centered\"><A HREF=\"readers.html?label=##READERNAMEENC##&amp;action=delete\" TITLE=\"Delete this Reader\"><IMG CLASS=\"icon\" SRC=\"image?i=ICDEL\" ALT=\"Delete Reader\"></A></TD>\n\
			</TR>\n"

#define TPLREADERENTITLEBIT "<A HREF=\"entitlements.html?label=##READERNAMEENC##\" TITLE=\"Show Entitlement\"><IMG CLASS=\"icon\" SRC=\"##ENTICO##\" ALT=\"Show Entitlement\"></A>"

#define TPLREADERREFRESHBIT "<A HREF=\"readers.html?action=reread&amp;label=##READERNAMEENC##\" TITLE=\"Refresh Entitlement\"><IMG CLASS=\"icon\" SRC=\"##REFRICO##\" ALT=\"Reset and reload Entitlement\"></A>"

#define TPLREADERSTATS "\
##TPLHEADER##\
##TPLMENU##\
	<DIV CLASS=\"message\">##MESSAGE##</DIV>\
	<TABLE border=0 class=\"configmenu\">\n\
		<TR>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"readerstats.html?label=##ENCODEDLABEL##&amp;hide=-1\">show all</A></TD>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"readerstats.html?label=##ENCODEDLABEL##&amp;hide=4\">hide 'not found'</A></TD>\n\
			<TD CLASS=\"configmenu\"><A HREF=\"readerstats.html?label=##ENCODEDLABEL##&amp;action=resetstat\">reset statistics</A>\
			<TD CLASS=\"configmenu\"><A HREF=\"readerstats.html?label=##ENCODEDLABEL##&amp;action=updateecmlen\">store valid ecm len in whitelist</A></TD>\n\
		</TR>\n\
	</TABLE>\n\
	<TABLE CLASS=\"stats\">\n\
	<TR><TH colspan=\"8\"> Loadbalance statistics for reader ##LABEL##</TH></TR>\n\
	<TR><TH>Channel</TH><TH>Channelname</TH><TH>ECM Length</TH><TH>Result</TH><TH>Avg-Time</TH><TH>Last-Time</TH><TH>Count</TH><TH>Last checked/ found</TH></TR>\n\
##READERSTATSROW##\
##READERSTATSROWFOUND##\
##READERSTATSTOHEADLINE##\
##READERSTATSROWTIMEOUT##\
##READERSTATSNFHEADLINE##\
##READERSTATSROWNOTFOUND##\
	</TABLE>\n\
	<br>Total ECM count: ##TOTALECM##<br>\n\
##TPLFOOTER##"

#define TPLREADERSTATSBIT "\
		<TR><TD>##CHANNEL##</TD>\
<TD>##CHANNELNAME##</TD>\
<TD class=\"centered\">##ECMLEN##</TD>\
<TD class=\"centered\">##RC##</TD>\
<TD class=\"centered\">##TIME##</TD>\
<TD class=\"centered\">##TIMELAST##</TD>\
<TD class=\"centered\">##COUNT##</TD>\
<TD class=\"centered\">##LAST## <A HREF=\"readerstats.html?label=##ENCODEDLABEL##&amp;action=deleterecord&amp;record=##CHANNEL##:##ECMLEN##\">\
<IMG CLASS=\"icon\" SRC=\"image?i=ICDEL\" ALT=\"Delete Entry\"/></A></TD></TR>\n"

#define TPLSCANUSB "\
##TPLHEADER##\
##TPLMENU##\
	<DIV CLASS=\"message\">##MESSAGE##</DIV>\
	<BR><BR>\n\
	<TABLE cellpadding=\"10\">\n\
		<TR><TH>USB Devices</TH></TR>\n\
##USBBIT##\n\
	</TABLE>\n\
##TPLFOOTER##"

#define TPLSCANUSBBIT "		<TR ##USBENTRYCLASS##><TD>##USBENTRY##</TD></TR>\n"

#define TPLENTITLEMENTS "\
##TPLHEADER##\
##TPLMENU##\
	<DIV CLASS=\"message\">##MESSAGE##</DIV>\
	<BR><BR>Entitlements for ##READERNAME##<BR><BR>\n\
##ENTITLEMENTCONTENT##\
##TPLFOOTER##"

#define TPLENTITLEMENTGENERICBIT "\
	<DIV class=\"log\">\n\
##LOGSUMMARY##\n\
##LOGHISTORY##\n\
	</DIV>\n"

#define TPLENTITLEMENTBIT "\
	<TABLE CLASS=\"stats\">\n\
		<TR><TH colspan=\"3\">Cardsystem</TH><TH colspan=\"2\">Valid To</TH><TH>IRD ID (nagra)</TH><TH colspan=\"2\">Provider</TH></TR>\n\
		<TR CLASS=\"e_header\"><TD colspan=\"3\">##READERCSYSTEM##</TD><TD colspan=\"2\">##READERCARDVALIDTO##</TD><TD>##READERIRDID##</TD><TD colspan=\"2\">##READERPROVIDS##</TD></TR>\n\
		<TR><TH colspan=\"2\">Serial</TH><TH colspan=\"2\">Rom</TH><TH colspan=\"4\">ATR</TH></TR>\n\
		<TR CLASS=\"e_header\"><TD colspan=\"2\">##READERSERIAL##</TD><TD colspan=\"2\">##READERROM##</TD><TD colspan=\"4\">##READERATR##</TD></TR>\n\
		<TR><TH>Type</TH><TH>Caid</TH><TH>Provid</TH><TH>ID</TH><TH>Class</TH><TH>Start Date</TH><TH>Expire Date</TH><TH>Name</TH></TR>\n\
##READERENTENTRY##\
	</TABLE>\n"

#define TPLENTITLEMENTITEMBIT "\
		<TR CLASS=\"##ENTEXPIERED##\"><TD>##ENTTYPE##</TD><TD>##ENTCAID##</TD><TD>##ENTPROVID##</TD><TD>##ENTID##</TD>\
		<TD>##ENTCLASS##</TD><TD>##ENTSTARTDATE##</TD><TD>##ENTENDDATE##</TD><TD>##ENTRESNAME##</TD></TR>\n"

#define TPLENTITLEMENTCCCAMBIT "\
	<TABLE CLASS=\"stats\">\
		<TR><TH>Host</TH><TH>Caid</TH><TH>System</TH><TH>Type</TH><TH>share id</TH><TH>remote id</TH><TH>Uphops</TH><TH>Reshare</TH><TH>Providers</TH><TH>Nodes</TH><TH>Good sids</TH><TH>Bad sids</TH></TR>\
##CCCAMSTATSENTRY##\
	</TABLE>\n\
	<BR><DIV CLASS=\"cccamentitlementtotals\">##TOTALS##</DIV>\
	<BR><DIV CLASS=\"cccamentitlementcontrols\">##CONTROLS##</DIV>"

#define TPLENTITLEMENTCCCAMENTRYBIT "\
		<TR><TD>##HOST##</TD><TD>##CAID##</TD><TD>##SYSTEM##</TD><TD>##CARDTYPE##</TD><TD>##SHAREID##</TD><TD>##REMOTEID##</TD><TD>##UPHOPS##</TD><TD>##MAXDOWN##</TD><TD>##PROVIDERS##</TD><TD>##NODES##</TD><TD>##SERVICESGOOD##</TD><TD>##SERVICESBAD##</TD></TR>"

#define TPLAPICCCAMCARDLIST "##TPLAPIHEADER##\
	<reader label=\"##READERNAME##\" hostaddress=\"##APIHOST##\" hostport=\"##APIHOSTPORT##\">\n\
		<cardlist totalcards=\"##APITOTALCARDS##\">\n\
##CARDLIST##\n\
		</cardlist>\n\
	</reader>\n\
##TPLAPIFOOTER##"

#define TPLAPICCCAMCARDBIT "		<card number=\"##APICARDNUMBER##\" caid=\"##APICAID##\" system=\"##SYSTEM##\" \
reshare=\"##MAXDOWN##\" hop=\"##UPHOPS##\">\n\
			<shareid>##SHAREID##</shareid>\n\
			<remoteid>##REMOTEID##</remoteid>\n\
			<providers totalproviders=\"##APITOTALPROVIDERS##\">\n\
##PROVIDERLIST##\n\
			</providers>\n\
			<nodes totalnodes=\"##APITOTALNODES##\">\n\
##NODELIST##\n\
			</nodes>\n\
		</card>\n"

#define TPLAPICCCAMCARDPROVIDERBIT "				<provider number=\"##APIPROVIDERNUMBER##\" sa=\"##APIPROVIDERSA##\" \
caid=\"##APIPROVIDERCAID##\" \
provid=\"##APIPROVIDERPROVID##\">##APIPROVIDERNAME##</provider>\n"

#define TPLAPICCCAMCARDNODEBIT "				<node number=\"##APINODENUMBER##\">##APINODE##</node>\n"

#define TPLAPIREADERSTATS "##TPLAPIHEADER##\
	<reader label=\"##READERNAME##\" status=\"##READERSTATUS##\" caid=\"##READERCAID##\">\n\
		<emmstats totalwritten=\"##TOTALWRITTEN##\" totalskipped=\"##TOTALSKIPPED##\" totalblocked=\"##TOTALBLOCKED##\" totalerror=\"##TOTALERROR##\">\n\
##EMMSTATS##\n\
		</emmstats>\n\
		<ecmstats count=\"##ROWCOUNT##\" totalecm=\"##TOTALECM##\" lastaccess=\"##LASTACCESS##\">\n\
##ECMSTATS##\n\
		</ecmstats>\n\
		<ecmhistory>##ECMHISTORY##</ecmhistory>\n\
	</reader>\n\
##TPLAPIFOOTER##"

#define TPLAPIREADERSTATSEMMBIT "			<emm type=\"##EMMTYPE##\" result=\"##EMMRESULT##\">##EMMCOUNT##</emm>\n"

#define TPLAPIREADERSTATSECMBIT "			<ecm caid=\"##ECMCAID##\" provid=\"##ECMPROVID##\" srvid=\"##ECMSRVID##\"\
 channelname=\"##ECMCHANNELNAME##\" avgtime=\"##ECMTIME##\" lasttime=\"##ECMTIMELAST##\" rc=\"##ECMRC##\" rcs=\"##ECMRCS##\" lastrequest=\"##ECMLAST##\">##ECMCOUNT##</ecm>\n"

#define TPLREADERCONFIG "\
##TPLHEADER##\
##TPLMENU##\
	<BR><BR>\n\
##MESSAGE##\n\
	<form action=\"readerconfig.html?action=execute\" method=\"get\">\n\
		<input name=\"label\" type=\"hidden\" value=\"##READERNAME##\">\n\
		<input name=\"protocol\" type=\"hidden\" value=\"##PROTOCOL##\">\n\
		<TABLE CLASS=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Reader ##READERNAME##</TH></TR>\n\
			<TR><TH>&nbsp;</TH><TH>Reader general settings</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#description##TPLHELPSUFFIX##Description:</A></TD><TD><input name=\"description\" type=\"text\" size=\"63\" maxlength=\"256\" value=\"##DESCRIPTION##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#enable##TPLHELPSUFFIX##Enable:</A></TD><TD><input name=\"enable\" type=\"hidden\" value=\"0\"><input name=\"enable\" type=\"checkbox\" value=\"1\" ##ENABLED##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#device##TPLHELPSUFFIX##Device:</A></TD><TD><input name=\"device\" type=\"text\" size=\"63\" maxlength=\"127\" value=\"##DEVICE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#group##TPLHELPSUFFIX##Group:</A></TD><TD><input name=\"group\" type=\"text\" size=\"20\" maxlength=\"100\" value=\"##GRP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#fallback##TPLHELPSUFFIX##Fallback:</A></TD><TD><input name=\"fallback\" type=\"hidden\" value=\"0\"><input name=\"fallback\" type=\"checkbox\" value=\"1\" ##FALLBACKCHECKED##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#lb_weight##TPLHELPSUFFIX##Loadbalance weight:</A></TD><TD><input name=\"lb_weight\" type=\"text\" size=\"5\" maxlength=\"4\" value=\"##LBWEIGHT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#caid##TPLHELPSUFFIX##Caid:</A></TD><TD><input name=\"caid\" type=\"text\" size=\"63\" maxlength=\"160\" value=\"##CAIDS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#ident##TPLHELPSUFFIX##Ident:</A></TD><TD><textarea name=\"ident\" cols=\"58\" rows=\"3\" class=\"bt\">##IDENTS##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#chid##TPLHELPSUFFIX##CHID:</A></TD><TD><textarea name=\"chid\" cols=\"58\" rows=\"3\" class=\"bt\">##CHIDS##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#class##TPLHELPSUFFIX##Class:</A></TD><TD><input name=\"class\" type=\"text\" size=\"63\" maxlength=\"150\" value=\"##CLASS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#services##TPLHELPSUFFIX##Services:</A></TD>\n\
				<TD>\n\
					<TABLE class=\"invisible\">\n\
##SIDS##\
					</TABLE>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#audisabled##TPLHELPSUFFIX##AU disabled:</A></TD><TD><input name=\"audisabled\" type=\"hidden\" value=\"0\"><input name=\"audisabled\" type=\"checkbox\" value=\"1\" ##AUDISABLED##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#auprovid##TPLHELPSUFFIX##AU Provid:</A></TD><TD><input name=\"auprovid\" type=\"text\" size=\"10\" maxlength=\"6\" value=\"##AUPROVID##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#emmcache##TPLHELPSUFFIX##Emmcache:</A></TD><TD><input name=\"emmcache\" type=\"text\" size=\"10\" maxlength=\"10\" value=\"##EMMCACHE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#ecmwhitelist##TPLHELPSUFFIX##ECM whitelist:</A></TD><TD><textarea name=\"ecmwhitelist\" cols=\"58\" rows=\"2\" class=\"bt\">##ECMWHITELIST##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#blockemm-u##TPLHELPSUFFIX##Blockemm:</A></TD>\n\
			<TD>\n\
				<TABLE class=\"invisible\">\n\
					<TR><TD class=\"centered\">unknown</TD><TD class=\"centered\">unique</TD><TD class=\"centered\">shared</TD><TD class=\"centered\">global</TD></TR>\n\
					<TR>\n\
						<TD class=\"centered\"><input name=\"blockemm-unknown\" type=\"hidden\" value=\"0\"><input name=\"blockemm-unknown\" type=\"checkbox\" value=\"1\" ##BLOCKEMMUNKNOWNCHK##></TD>\n\
						<TD class=\"centered\"><input name=\"blockemm-u\" type=\"hidden\" value=\"0\"><input name=\"blockemm-u\" type=\"checkbox\" value=\"1\" ##BLOCKEMMUNIQCHK##></TD>\n\
						<TD class=\"centered\"><input name=\"blockemm-s\" type=\"hidden\" value=\"0\"><input name=\"blockemm-s\" type=\"checkbox\" value=\"1\" ##BLOCKEMMSHAREDCHK##></TD>\n\
						<TD class=\"centered\"><input name=\"blockemm-g\" type=\"hidden\" value=\"0\"><input name=\"blockemm-g\" type=\"checkbox\" value=\"1\" ##BLOCKEMMGLOBALCHK##></TD>\n\
					</TR>\n\
				</TABLE>\n\
			</TD>\n\
			<TR><TD>##TPLHELPPREFIX##server#saveemm-u##TPLHELPSUFFIX##Saveemm:</A></TD>\n\
			<TD>\n\
				<TABLE class=\"invisible\">\n\
					<TR><TD class=\"centered\">unknown</TD><TD class=\"centered\">unique</TD><TD class=\"centered\">shared</TD><TD class=\"centered\">global</TD></TR>\n\
					<TR>\n\
						<TD class=\"centered\"><input name=\"saveemm-unknown\" type=\"hidden\" value=\"0\"><input name=\"saveemm-unknown\" type=\"checkbox\" value=\"1\" ##SAVEEMMUNKNOWNCHK##></TD>\n\
						<TD class=\"centered\"><input name=\"saveemm-u\" type=\"hidden\" value=\"0\"><input name=\"saveemm-u\" type=\"checkbox\" value=\"1\" ##SAVEEMMUNIQCHK##></TD>\n\
						<TD class=\"centered\"><input name=\"saveemm-s\" type=\"hidden\" value=\"0\"><input name=\"saveemm-s\" type=\"checkbox\" value=\"1\" ##SAVEEMMSHAREDCHK##></TD>\n\
						<TD class=\"centered\"><input name=\"saveemm-g\" type=\"hidden\" value=\"0\"><input name=\"saveemm-g\" type=\"checkbox\" value=\"1\" ##SAVEEMMGLOBALCHK##></TD>\n\
					</TR>\n\
				</TABLE>\n\
			</TD>\n\
			<TR><TD>##TPLHELPPREFIX##server#blockemm-bylen##TPLHELPSUFFIX##Block EMM by Len:</A></TD><TD><input name=\"blockemm-bylen\" type=\"text\" size=\"20\" maxlength=\"40\" value=\"##BLOCKEMMBYLEN##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#dropbadcws##TPLHELPSUFFIX##Drop CWs with wrong checksum:</A><input name=\"dropbadcws\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"dropbadcws\" type=\"checkbox\" value=\"1\" ##DROPBADCWSCHECKED##></TD></TR>\n\
            <TR><TD>##TPLHELPPREFIX##server#disablecrccws##TPLHELPSUFFIX##Skip CWs checksum test:</A><input name=\"disablecrccws\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"disablecrccws\" type=\"checkbox\" value=\"1\" ##DISABLECRCCWSCHECKED##></TD></TR>\n\
            <TR><TD>##TPLHELPPREFIX##server#use_gpio##TPLHELPSUFFIX##Use GPIO:</A><input name=\"use_gpio\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"use_gpio\" type=\"checkbox\" value=\"1\" ##USE_GPIOCHECKED##></TD></TR>\n\
			##TPLREADEREDITCACHEEXBIT##\
			<TR><TH>&nbsp;</TH><TH>Reader specific settings for protocol ##PROTOCOL##</TH></TR>\n\
##READERDEPENDINGCONFIG##\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" name=\"action\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
	<BR><BR>\n\
##TPLFOOTER##"
#define TPLSAVETEMPLATES "##TPLHEADER##\
##TPLMENU##\
	<br><b>Saved ##CNT## templates to ##PATH##</b><br>\n\
##TPLFOOTER##"

#define TPLREADERCONFIGSIDOKBIT "\
						<TR>\n\
							<TD><INPUT NAME=\"services\" TYPE=\"CHECKBOX\" VALUE=\"##SIDLABEL##\" ##CHECKED##> ##SIDLABEL##</TD>\n"

#define TPLREADERCONFIGSIDNOBIT "\
							<TD><INPUT NAME=\"services\" TYPE=\"CHECKBOX\" VALUE=\"!##SIDLABEL##\" ##CHECKED##> !##SIDLABEL##</TD>\n\
						</TR>\n"

#define TPLREADERCONFIGSTDHWREADERBIT "\
				<TR><TD>##TPLHELPPREFIX##server#mhz##TPLHELPSUFFIX##Mhz:</A></TD><TD><input name=\"mhz\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##MHZ##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#cardmhz##TPLHELPSUFFIX##Cardmhz:</A></TD><TD><input name=\"cardmhz\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##CARDMHZ##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#pincode##TPLHELPSUFFIX##Pincode:</A></TD><TD><input name=\"pincode\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##PINCODE##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#detect##TPLHELPSUFFIX##Detect:</A></TD><TD><input name=\"detect\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##DETECT##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#ratelimitecm##TPLHELPSUFFIX##Ratelimit ECM:</A></TD><TD><input name=\"ratelimitecm\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##RATELIMITECM##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#ratelimitseconds##TPLHELPSUFFIX##Ratelimit seconds:</A></TD><TD><input name=\"ratelimitseconds\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##RATELIMITSECONDS##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#readnano##TPLHELPSUFFIX##Readnano:</A></TD><TD><input name=\"readnano\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##EMMFILE##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#blocknano##TPLHELPSUFFIX##Blocknano:</A></TD><TD><input name=\"blocknano\" type=\"text\" size=\"50\" maxlength=\"50\" value=\"##BLOCKNANO##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#savenano##TPLHELPSUFFIX##Savenano:</A></TD><TD><input name=\"savenano\" type=\"text\" size=\"50\" maxlength=\"50\" value=\"##SAVENANO##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#atr##TPLHELPSUFFIX##ATR:</A></TD><TD><input name=\"atr\" type=\"text\" size=\"100\" maxlength=\"54\" value=\"##ATR##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#boxid##TPLHELPSUFFIX##Boxid:</A></TD><TD><input name=\"boxid\" type=\"text\" size=\"15\" maxlength=\"8\" value=\"##BOXID##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#aeskeys##TPLHELPSUFFIX##AES Keys:</A></TD><TD><textarea name=\"aeskeys\" cols=\"98\" rows=\"4\" class=\"bt\" maxlength=\"128\">##AESKEYS##</textarea></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#rsakey##TPLHELPSUFFIX##RSA Key:</A></TD><TD><textarea name=\"rsakey\" cols=\"98\" rows=\"4\" class=\"bt\" maxlength=\"240\">##RSAKEY##</textarea></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#boxkey##TPLHELPSUFFIX##Boxkey:</A></TD><TD><input name=\"boxkey\" type=\"text\" size=\"20\" maxlength=\"16\" value=\"##BOXKEY##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#force_irdeto##TPLHELPSUFFIX##Force Irdeto:</A><input name=\"force_irdeto\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"force_irdeto\" type=\"checkbox\" value=\"1\" ##FORCEIRDETOCHECKED##></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#fix9993##TPLHELPSUFFIX##Fix 9993 for CAID 0919:</A><input name=\"fix9993\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"fix9993\" type=\"checkbox\" value=\"1\" ##FIX9993CHECKED##></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#ins7e##TPLHELPSUFFIX##ins7E payload (26 bytes):</A></TD><TD><input name=\"ins7e\" type=\"text\" size=\"60\" maxlength=\"56\" value=\"##INS7E##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#ins7e11##TPLHELPSUFFIX##ins7E11 TA1 Byte (1 byte):</A></TD><TD><input name=\"ins7e11\" type=\"text\" size=\"10\" maxlength=\"2\" value=\"##INS7E11##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#resetcycle##TPLHELPSUFFIX##Reset after No. ECM:</A></TD><TD><input name=\"resetcycle\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##RESETCYCLE##\"></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#ndsversion##TPLHELPSUFFIX##Force NDS Version:</A></TD>\n\
					<TD>\n\
						<SELECT name=\"ndsversion\">\n\
							<OPTION value=\"0\" ##NDSVERSION0##>0 - AUTO</OPTION>\n\
							<OPTION value=\"1\" ##NDSVERSION1##>1 - NDS1 Forced</OPTION>\n\
							<OPTION value=\"12\" ##NDSVERSION21##>12 - NDS1+ Forced</OPTION>\n\
							<OPTION value=\"2\" ##NDSVERSION2##>2 - NDS2 Forced</OPTION>\n\
						</SELECT>\n\
					</TD>\n\
				</TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#nagra_read##TPLHELPSUFFIX##Read Nagra Records:</A></TD>\n\
					<TD>\n\
						<SELECT name=\"nagra_read\">\n\
							<OPTION value=\"0\" ##NAGRAREAD0##>0 - Disabled</OPTION>\n\
							<OPTION value=\"1\" ##NAGRAREAD1##>1 - Read all records</OPTION>\n\
							<OPTION value=\"2\" ##NAGRAREAD2##>2 - Read only valid records</OPTION>\n\
						</SELECT>\n\
					</TD>\n\
				</TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#deprecated##TPLHELPSUFFIX##Deprecated:</A><input name=\"deprecated\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"deprecated\" type=\"checkbox\" value=\"1\" ##DEPRECATEDCHECKED##></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#smargopatch##TPLHELPSUFFIX##Smargopatch:</A><input name=\"smargopatch\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"smargopatch\" type=\"checkbox\" value=\"1\" ##SMARGOPATCHCHECKED##></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#sc8in1_dtrrts_patch##TPLHELPSUFFIX##SC8in1 DTR/RTS Patch:</A><input name=\"sc8in1_dtrrts_patch\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"sc8in1_dtrrts_patch\" type=\"checkbox\" value=\"1\" ##SC8IN1DTRRTSPATCHCHECKED##></TD></TR>\n\
				<TR><TD>##TPLHELPPREFIX##server#device_out_endpoint##TPLHELPSUFFIX##Device Out Endpoint:</A></TD><TD>##DEVICEEP##</TD></TR>\n\
				##TPLREADERCOOLSTREAMBIT##"

#ifdef WITH_LIBUSB
#define TPLREADERCONFIGDEVICEEPBIT "\
				<SELECT name=\"device_out_endpoint\">\n\
					<OPTION value=\"\" ##DEVICEOUTEP0##>default</OPTION>\n\
					<OPTION value=\"0x82\" ##DEVICEOUTEP1##>0x82 - Smargo+</OPTION>\n\
					<OPTION value=\"0x81\" ##DEVICEOUTEP2##>0x81 - Infinity USB Smart</OPTION>\n\
				</SELECT>\n"
#endif

#ifdef WITH_COOLAPI
#define TPLREADERCOOLSTREAMBIT "\
		<TR><TH>&nbsp;</TH><TH>Reader specific settings for Coolstream STB</TH></TR>\n\
		<TR><TD>##TPLHELPPREFIX##server#cool_timeout_init##TPLHELPSUFFIX##Cool Timeout Init:</A></TD><TD><input name=\"cool_timeout_init\" type=\"text\" size=\"20\" maxlength=\"16\" value=\"##COOLTIMEOUTINIT##\"></TD></TR>\n\
		<TR><TD>##TPLHELPPREFIX##server#cool_timeout_after_init##TPLHELPSUFFIX##Cool Timeout after Init:</A></TD><TD><input name=\"cool_timeout_after_init\" type=\"text\" size=\"20\" maxlength=\"16\" value=\"##COOLTIMEOUTAFTERINIT##\"></TD></TR>\n"
#endif

#define TPLREADERCONFIGHOPBIT "\
			<TR><TD>##TPLHELPPREFIX##server#ccchop##TPLHELPSUFFIX##CCC Hop:</A></TD><TD><input name=\"ccchop\" type=\"text\" size=\"2\" maxlength=\"1\" value=\"##CCCHOP##\"></TD></TR>\n"
#define TPLREADERCONFIGCAMD35BIT "\
			<TR><TD>##TPLHELPPREFIX##server#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##ACCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#password##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"password\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#reconnecttimeout##TPLHELPSUFFIX##Reconnect timeout:</A></TD><TD><input name=\"reconnecttimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##RECEIVETIMEOUT##\">s</TD></TR>\n"
#define TPLREADERCONFIGCS378XBIT "\
			<TR><TD>##TPLHELPPREFIX##server#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##ACCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#password##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"password\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#inactivitytimeout##TPLHELPSUFFIX##Inactivity timeout:</A></TD><TD><input name=\"inactivitytimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##INACTIVITYTIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#reconnecttimeout##TPLHELPSUFFIX##Reconnect timeout:</A></TD><TD><input name=\"reconnecttimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##RECEIVETIMEOUT##\">s</TD></TR>\n"
#define TPLREADERCONFIGRADEGASTBIT "\
			<TR><TD>##TPLHELPPREFIX##server#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##ACCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#password##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"password\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#inactivitytimeout##TPLHELPSUFFIX##Inactivity timeout:</A></TD><TD><input name=\"inactivitytimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##INACTIVITYTIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#reconnecttimeout##TPLHELPSUFFIX##Reconnect timeout:</A></TD><TD><input name=\"reconnecttimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##RECEIVETIMEOUT##\">s</TD></TR>\n"
#define TPLREADERCONFIGNCD525BIT "\
			<TR><TD>##TPLHELPPREFIX##server#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##ACCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#password##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"password\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#key##TPLHELPSUFFIX##Key:</A></TD><TD><input name=\"key\" type=\"text\" size=\"40\" maxlength=\"28\" value=\"##NCD_KEY##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#inactivitytimeout##TPLHELPSUFFIX##Inactivity timeout:</A></TD><TD><input name=\"inactivitytimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##INACTIVITYTIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#reconnecttimeout##TPLHELPSUFFIX##Reconnect timeout:</A></TD><TD><input name=\"reconnecttimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##RECEIVETIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#disableserverfilter##TPLHELPSUFFIX##Disable server Filter:</A><input name=\"disableserverfilter\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"disableserverfilter\" type=\"checkbox\" value=\"1\" ##DISABLESERVERFILTERCHECKED##></TD></TR>\n"
#define TPLREADERCONFIGNCD524BIT "\
			<TR><TD>##TPLHELPPREFIX##server#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##ACCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#password##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"password\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#key##TPLHELPSUFFIX##Key:</A></TD><TD><input name=\"key\" type=\"text\" size=\"40\" maxlength=\"28\" value=\"##NCD_KEY##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#inactivitytimeout##TPLHELPSUFFIX##Inactivity timeout:</A></TD><TD><input name=\"inactivitytimeout\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##INACTIVITYTIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#reconnecttimeout##TPLHELPSUFFIX##Reconnect timeout:</A></TD><TD><input name=\"reconnecttimeout\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##RECEIVETIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#disableserverfilter##TPLHELPSUFFIX##Disable server Filter:</A><input name=\"disableserverfilter\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"disableserverfilter\" type=\"checkbox\" value=\"1\" ##DISABLESERVERFILTERCHECKED##></TD></TR>\n"
#define TPLREADERCONFIGCCCAMBIT "\
			<TR><TD>##TPLHELPPREFIX##server#inactivitytimeout##TPLHELPSUFFIX##Inactivity timeout:</A></TD><TD><input name=\"inactivitytimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##INACTIVITYTIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#reconnecttimeout##TPLHELPSUFFIX##Reconnect timeout:</A></TD><TD><input name=\"reconnecttimeout\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##RECEIVETIMEOUT##\">s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#cccreconnect##TPLHELPSUFFIX##Request timeout:</A></TD><TD><input name=\"cccreconnect\" type=\"text\" size=\"30\" maxlength=\"50\" value=\"##CCCRECONNECT##\">ms</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"63\" maxlength=\"63\" value=\"##ACCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#password##TPLHELPSUFFIX##Password:</A></TD><TD><input name=\"password\" type=\"text\" size=\"63\" maxlength=\"63\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#cccversion##TPLHELPSUFFIX##Version:</A></TD>\n\
				<TD>\n\
					<SELECT name=\"cccversion\">\n\
						<OPTION value=\"2.0.11\" ##CCCVERSIONSELECTED0##>2.0.11</OPTION>\n\
						<OPTION value=\"2.1.1\"##CCCVERSIONSELECTED1##>2.1.1</OPTION>\n\
						<OPTION value=\"2.1.2\"##CCCVERSIONSELECTED2##>2.1.2</OPTION>\n\
						<OPTION value=\"2.1.3\"##CCCVERSIONSELECTED3##>2.1.3</OPTION>\n\
						<OPTION value=\"2.1.4\"##CCCVERSIONSELECTED4##>2.1.4</OPTION>\n\
						<OPTION value=\"2.2.0\"##CCCVERSIONSELECTED5##>2.2.0</OPTION>\n\
						<OPTION value=\"2.2.1\"##CCCVERSIONSELECTED6##>2.2.1</OPTION>\n\
						<OPTION value=\"2.3.0\"##CCCVERSIONSELECTED7##>2.3.0</OPTION>\n\
					</SELECT>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#cccmaxhops##TPLHELPSUFFIX##Maxhop:</A></TD><TD><input name=\"cccmaxhop\" type=\"text\" size=\"3\" maxlength=\"2\" value=\"##CCCMAXHOP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#cccmindown##TPLHELPSUFFIX##Mindown:</A></TD><TD><input name=\"cccmindown\" type=\"text\" size=\"3\" maxlength=\"2\" value=\"##CCCMINDOWN##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#cccreshare##TPLHELPSUFFIX##Reshare:</A></TD><TD><input name=\"cccreshare\" type=\"text\" size=\"3\" maxlength=\"2\" value=\"##CCCRESHARE##\">\
				&nbsp;Global CCCam Reshare:<SPAN CLASS=\"global_conf\" TITLE=\"This value is used if Reshare = -1\"><A HREF=\"config.html?part=cccam\">##RESHARE##</A></SPAN></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#cccwantemu##TPLHELPSUFFIX##Want Emu:</A><input name=\"cccwantemu\" type=\"hidden\" value=\"0\"></TD><TD><input name=\"cccwantemu\" type=\"checkbox\" value=\"1\" ##CCCWANTEMUCHECKED##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##server#ccckeepalive##TPLHELPSUFFIX##Keep alive:</A></TD><TD><SELECT NAME=\"ccckeepalive\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##KEEPALIVECHECKED##>YES</OPTION></SELECT></TD></TR>\n"

#define TPLCONFIGGBOX "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
	<DIV CLASS=\"message\">##MESSAGE##</DIV>\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"gbox\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Gbox Config </TH></TR>\n\
			<TR><TD>Password:</TD><TD><input name=\"password\" type=\"text\" size=\"10\" maxlength=\"8\" value=\"##PASSWORD##\"></TD></TR>\n\
			<TR><TD>Maxdist:</TD><TD><input name=\"maxdist\" type=\"text\" size=\"5\" maxlength=\"2\" value=\"##MAXDIST##\"></TD></TR>\n\
			<TR><TD>Ignorelist:</TD><TD><input name=\"ignorelist\" type=\"text\" size=\"50\" maxlength=\"50\" value=\"##IGNORELIST##\"></TD></TR>\n\
			<TR><TD>Onlineinfos:</TD><TD><input name=\"onlineinfos\" type=\"text\" size=\"50\" maxlength=\"50\" value=\"##ONLINEINFOS##\"></TD></TR>\n\
			<TR><TD>Cardinfos:</TD><TD><input name=\"cardinfos\" type=\"text\" size=\"50\" maxlength=\"50\" value=\"##CARDINFOS##\"></TD></TR>\n\
			<TR><TD>Locals:</TD><TD><input name=\"locals\" type=\"text\" size=\"50\" maxlength=\"50\" value=\"##LOCALS##\"></TD></TR>\n\
	    <TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"OK\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"

#ifdef CS_ANTICASC
#define TPLCONFIGANTICASC "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"anticasc\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<input name=\"enabled\" type=\"hidden\" value=\"0\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Anticascading Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#enabled_2##TPLHELPSUFFIX##Enabled:</A></TD><TD><input name=\"enabled\" type=\"checkbox\" value=\"1\" ##CHECKED##>\n\
			<TR><TD>##TPLHELPPREFIX##conf#numusers##TPLHELPSUFFIX##Numusers:</A></TD><TD><input name=\"numusers\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##NUMUSERS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#sampletime##TPLHELPSUFFIX##Sampletime:</A></TD><TD><input name=\"sampletime\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##SAMPLETIME##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#samples##TPLHELPSUFFIX##Samples:</A></TD><TD><input name=\"samples\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##SAMPLES##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#penalty##TPLHELPSUFFIX##Penalty:</A></TD>\
			<TD>\
				<select name=\"penalty\">\n\
					<option value=\"0\" ##PENALTY0##>0 - Only write to log</option>\n\
					<option value=\"1\" ##PENALTY1##>1 - Fake DW delayed</option>\n\
					<option value=\"2\" ##PENALTY2##>2 - Ban</option>\n\
					<option value=\"3\" ##PENALTY3##>3 - Real DW delayed</option>\n\
				</select>\n\
			</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#aclogfile##TPLHELPSUFFIX##AClogfile:</A></TD><TD><input name=\"aclogfile\" type=\"text\" size=\"63\" maxlength=\"127\" value=\"##ACLOGFILE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#fakedelay##TPLHELPSUFFIX##Fakedelay:</A></TD><TD><input name=\"fakedelay\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##FAKEDELAY##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#denysamples##TPLHELPSUFFIX##Denysamples:</A></TD><TD><input name=\"denysamples\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##DENYSAMPLES##\"></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef MODULE_CCCAM
#define TPLCONFIGCCCAM "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"cccam\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Cccam Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_7##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"16\" maxlength=\"128\" value=\"##PORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#reshare##TPLHELPSUFFIX##Reshare:</A></TD><TD><input name=\"reshare\" type=\"text\" size=\"2\" maxlength=\"1\" value=\"##RESHARE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#ignorereshare##TPLHELPSUFFIX##Ignore reshare:</A></TD><TD>\
			<SELECT NAME=\"ignorereshare\">\
				<OPTION VALUE=\"0\" ##IGNRSHRSELECTED0##>0 - Use reshare level of Server</OPTION>\
				<OPTION VALUE=\"1\" ##IGNRSHRSELECTED1##>1 - Use reshare level of Reader or User</OPTION>\
			</SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#forward_origin_card##TPLHELPSUFFIX##Forward origin card:</A></TD><TD><SELECT NAME=\"forward_origin_card\"><OPTION VALUE=\"0\">OFF</OPTION><OPTION VALUE=\"1\" ##FORWARDORIGINCARD##>ON</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#stealth##TPLHELPSUFFIX##Stealth mode:</A></TD><TD><SELECT NAME=\"stealth\"><OPTION VALUE=\"0\">DISABLE</OPTION><OPTION VALUE=\"1\" ##STEALTH##>ENABLE</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#nodeid##TPLHELPSUFFIX##Node Id:</A></TD><TD><input name=\"nodeid\" type=\"text\" size=\"16\" maxlength=\"16\" value=\"##NODEID##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#keepconnected##TPLHELPSUFFIX##Keep clients connected:</A></TD><TD><SELECT NAME=\"keepconnected\"><OPTION VALUE=\"0\">OFF</OPTION><OPTION VALUE=\"1\" ##KEEPCONNECTED##>ON</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#version##TPLHELPSUFFIX##Version:</A></TD>\n\
				<TD>\n\
					<SELECT name=\"version\">\n\
						<OPTION value=\"2.0.11\" ##VERSIONSELECTED0##>2.0.11</OPTION>\n\
						<OPTION value=\"2.1.1\" ##VERSIONSELECTED1##>2.1.1</OPTION>\n\
						<OPTION value=\"2.1.2\" ##VERSIONSELECTED2##>2.1.2</OPTION>\n\
						<OPTION value=\"2.1.3\" ##VERSIONSELECTED3##>2.1.3</OPTION>\n\
						<OPTION value=\"2.1.4\" ##VERSIONSELECTED4##>2.1.4</OPTION>\n\
						<OPTION value=\"2.2.0\" ##VERSIONSELECTED5##>2.2.0</OPTION>\n\
						<OPTION value=\"2.2.1\" ##VERSIONSELECTED6##>2.2.1</OPTION>\n\
						<OPTION value=\"2.3.0\" ##VERSIONSELECTED7##>2.3.0</OPTION>\n\
					</SELECT>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#updateinterval##TPLHELPSUFFIX##Update Interval:</A></TD><TD><input name=\"updateinterval\" type=\"text\" size=\"5\" maxlength=\"4\" value=\"##UPDATEINTERVAL##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#minimizecards##TPLHELPSUFFIX##Minimize cards:</A></TD>\n\
				<TD>\n\
					<SELECT name=\"minimizecards\">\n\
						<OPTION value=\"0\" ##MINIMIZECARDSELECTED0##>0 - legacy (default)</OPTION>\n\
						<OPTION value=\"1\" ##MINIMIZECARDSELECTED1##>1 - smallest hop</OPTION>\n\
						<OPTION value=\"2\" ##MINIMIZECARDSELECTED2##>2 - via caid</OPTION>\n\
					</SELECT>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#reshare_mode##TPLHELPSUFFIX##Reshare mode:</A></TD>\n\
				<TD>\n\
					<SELECT name=\"reshare_mode\">\n\
						<OPTION value=\"0\" ##RESHAREMODE0##>0 - reshare cards only (default)</OPTION>\n\
						<OPTION value=\"1\" ##RESHAREMODE1##>1 - reshare cards+services</OPTION>\n\
						<OPTION value=\"2\" ##RESHAREMODE2##>2 - reshare reader-services</OPTION>\n\
						<OPTION value=\"3\" ##RESHAREMODE3##>3 - reshare user-services</OPTION>\n\
						<OPTION value=\"4\" ##RESHAREMODE4##>4 - reshare only received cards</OPTION>\n\
					</SELECT>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
	<BR><BR>\
	<TABLE class=\"config\">\n\
		<TR><TH COLSPAN=\"2\">Control</TH></TR>\n\
		<TR>\n\
			<TD STYLE=\"text-align:center;\">\
				<form action=\"config.html\" method=\"get\">\n\
				<input name=\"part\" type=\"hidden\" value=\"cccam\">\n\
				<input type=\"submit\" name=\"button\" value=\"Refresh global list\" ##BTNDISABLED##>\n\
				</form></TD>\n\
			<TD STYLE=\"text-align:center;\">\
				<form action=\"entitlements.html\" method=\"get\">\n\
				<input name=\"globallist\" type=\"hidden\" value=\"1\">\n\
				<input type=\"submit\" name=\"button\" value=\"Show global list\" ##BTNDISABLED##>\n\
				</form></TD>\n\
		</TR>\n\
	</TABLE>\n\
##TPLFOOTER##"
#endif

#define TPLCONFIGMONITOR "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"monitor\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<input name=\"http_prepend_embedded_css\" type=\"hidden\" value=\"0\">\n\
		<input name=\"httphideidleclients\" type=\"hidden\" value=\"0\">\n\
		<input name=\"httpshowpicons\" type=\"hidden\" value=\"0\">\n\
		<input name=\"appendchaninfo\" type=\"hidden\" value=\"0\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Monitor Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##MONPORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_2##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#nocrypt##TPLHELPSUFFIX##No crypt:</A></TD><TD><input name=\"nocrypt\" type=\"text\" size=\"63\" maxlength=\"200\" value=\"##NOCRYPT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#aulow##TPLHELPSUFFIX##Au low:</A></TD><TD><input name=\"aulow\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##AULOW##\"> min</TD></TR>\n\
			<TR>\n\
				<TD>##TPLHELPPREFIX##conf#monlevel##TPLHELPSUFFIX##Monlevel:</A></TD>\n\
				<TD><select name=\"monlevel\">\n\
					<option value=\"0\" ##MONSELECTED0##>0 - no access to monitor</option>\n\
					<option value=\"1\" ##MONSELECTED1##>1 - only server and own procs</option>\n\
					<option value=\"2\" ##MONSELECTED2##>2 - all procs, but viewing only, default</option>\n\
					<option value=\"3\" ##MONSELECTED3##>3 - all procs, reload of oscam.user possible</option>\n\
					<option value=\"4\" ##MONSELECTED4##>4 - complete access</option>\n\
					</select>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#hideclient_to##TPLHELPSUFFIX##Hide client to:</A></TD><TD><input name=\"hideclient_to\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##HIDECLIENTTO##\"> s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#appendchaninfo##TPLHELPSUFFIX##Append channel info:</A></TD><TD><input name=\"appendchaninfo\" type=\"checkbox\" value=\"1\" ##APPENDCHANINFO##></TD></TR>\n\
			<TR><TH COLSPAN=\"2\">Webinterface Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpport##TPLHELPSUFFIX##Http port:</A></TD><TD><input name=\"httpport\" type=\"text\" size=\"6\" maxlength=\"6\" value=\"##HTTPPORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpuser##TPLHELPSUFFIX##Http user:</A></TD><TD><input name=\"httpuser\" type=\"text\" size=\"63\" maxlength=\"64\" value=\"##HTTPUSER##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httppwd##TPLHELPSUFFIX##Http pwd:</A></TD><TD><input name=\"httppwd\" type=\"text\" size=\"63\" maxlength=\"64\" value=\"##HTTPPASSWORD##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#http_prepend_embedded_css##TPLHELPSUFFIX##Http prepend embedded css:</A></TD><TD><input name=\"http_prepend_embedded_css\" type=\"checkbox\" value=\"1\" ##HTTPPREPENDEMBEDDEDCSS##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpcss##TPLHELPSUFFIX##Http css:</A></TD>\n \
				<TD>\n\
					<SELECT name=\"httpcss\">\n\
##CSSOPTIONS##\
					</SELECT>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httphelplang##TPLHELPSUFFIX##Http Help Language (en|de|fr|it):</A></TD><TD><input name=\"httphelplang\" type=\"text\" size=\"3\" maxlength=\"2\" value=\"##HTTPHELPLANG##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpjscript##TPLHELPSUFFIX##Http javascript:</A></TD><TD><input name=\"httpjscript\" type=\"text\" size=\"63\" maxlength=\"127\" value=\"##HTTPJSCRIPT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httprefresh##TPLHELPSUFFIX##Http refresh:</A></TD><TD><input name=\"httprefresh\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##HTTPREFRESH##\"> s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httptpl##TPLHELPSUFFIX##Http tpl:</A></TD><TD><input name=\"httptpl\" type=\"text\" size=\"63\" maxlength=\"127\" value=\"##HTTPTPL##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpscript##TPLHELPSUFFIX##Http script:</A></TD><TD><input name=\"httpscript\" type=\"text\" size=\"63\" maxlength=\"127\" value=\"##HTTPSCRIPT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httphideidleclients##TPLHELPSUFFIX##Http Hide Idle Clients:</A></TD><TD><input name=\"httphideidleclients\" type=\"checkbox\" value=\"1\" ##CHECKED##>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpshowpicons##TPLHELPSUFFIX##Http Show Picons:</A></TD><TD><input name=\"httpshowpicons\" type=\"checkbox\" value=\"1\" ##SHOWPICONSCHECKED##>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpallowed##TPLHELPSUFFIX##Http allowed:</A></TD><TD><input name=\"httpallowed\" type=\"text\" size=\"63\" maxlength=\"200\" value=\"##HTTPALLOW##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpdyndns##TPLHELPSUFFIX##Http dyndns:</A></TD><TD><input name=\"httpdyndns\" type=\"text\" size=\"63\" maxlength=\"200\" value=\"##HTTPDYNDNS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#httpsavefullcfg##TPLHELPSUFFIX##Http save full config:</A></TD><TD><SELECT NAME=\"httpsavefullcfg\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##HTTPSAVEFULLSELECT##>YES</OPTION></SELECT></TD></TR>\n\
##TPLHTTPFORCESSLV3##\
##TPLLCDOPTIONS##\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"

#ifdef WITH_SSL
#define TPLHTTPFORCESSLV3 "\
			<TR><TD>##TPLHELPPREFIX##conf#httpforcesslv3##TPLHELPSUFFIX##Force more secure v3 of ssl:</A></TD><TD><SELECT NAME=\"httpforcesslv3\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##HTTPFORCESSLV3SELECT##>YES</OPTION></SELECT></TD></TR>\n"
#endif

#ifdef LCDSUPPORT
#define TPLLCDOPTIONS "\
			<TR><TH COLSPAN=\"2\">LCD Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#enablelcd##TPLHELPSUFFIX##Enable LCD:</A></TD><TD><SELECT NAME=\"enablelcd\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##ENABLELCDSELECTED##>YES</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lcd_outputpath##TPLHELPSUFFIX##LCD Output Path:</A></TD><TD><input name=\"lcd_outputpath\" type=\"text\" size=\"63\" maxlength=\"200\" value=\"##LCDOUTPUTPATH##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lcd_writeintervall##TPLHELPSUFFIX##LCD Write Interval:</A></TD><TD><input name=\"lcd_writeintervall\" type=\"text\" size=\"3\" maxlength=\"3\" value=\"##LCDREFRESHINTERVAL##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lcd_hideidle##TPLHELPSUFFIX##LCD Hide idle Readers:</A></TD><TD><SELECT NAME=\"lcd_hideidle\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##LCDHIDEIDLE##>YES</OPTION></SELECT></TD></TR>\n"

#endif

#ifdef MODULE_RADEGAST
#define TPLCONFIGRADEGAST "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"radegast\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Radegast Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_6##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##PORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_7##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"30\" maxlength=\"30\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#allowed_2##TPLHELPSUFFIX##Allowed:</A></TD><TD><input name=\"allowed\" type=\"text\" size=\"63\" maxlength=\"200\" value=\"##ALLOWED##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#user##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"30\" maxlength=\"30\" value=\"##USER##\"></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef MODULE_NEWCAMD
#define TPLCONFIGNEWCAMD "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"newcamd\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<input name=\"keepalive\" type=\"hidden\" value=\"0\">\n\
		<input name=\"mgclient\" type=\"hidden\" value=\"0\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Newcamd Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_5##TPLHELPSUFFIX##Port:</A></TD><TD><textarea name=\"port\" cols=\"120\" rows=\"3\" class=\"bt\">##PORT##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_6##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#key_2##TPLHELPSUFFIX##Key:</A></TD><TD><input name=\"key\" type=\"text\" size=\"28\" maxlength=\"28\" value=\"##KEY##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#allowed##TPLHELPSUFFIX##Allowed:</A></TD><TD><textarea name=\"allowed\" cols=\"58\" rows=\"3\" class=\"bt\">##ALLOWED##</textarea></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#keepalive##TPLHELPSUFFIX##Keepalive:</A></TD><TD><input name=\"keepalive\" type=\"checkbox\" value=\"1\" ##KEEPALIVE##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#mgclient##TPLHELPSUFFIX##Mgclient:</A></TD><TD><input name=\"mgclient\" type=\"checkbox\" value=\"1\" ##MGCLIENTCHK##></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#define TPLCONFIGGLOBAL "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"global\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<input name=\"suppresscmd08\" type=\"hidden\" value=\"0\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Global Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#nice##TPLHELPSUFFIX##Nice:</A></TD><TD><input name=\"nice\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##NICE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#netprio##TPLHELPSUFFIX##Net prio:</A></TD><TD><input name=\"netprio\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##NETPRIO##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#bindwait##TPLHELPSUFFIX##Bind wait:</A></TD><TD><input name=\"bindwait\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##BINDWAIT##\"> s</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#resolvegethostbyname##TPLHELPSUFFIX##Resolver:</A></TD>\n\
				<TD>\n\
					<select name=\"resolvegethostbyname\">\n\
						<option value=\"0\" ##RESOLVER0##>0 - getadressinfo()</option>\n\
						<option value=\"1\" ##RESOLVER1##>1 - gethostbyname()</option>\n\
					</select>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#waitforcards##TPLHELPSUFFIX##Wait for cards:</A></TD><TD><SELECT NAME=\"waitforcards\"><OPTION VALUE=\"0\">0 - enable clientlogins while init</OPTION><OPTION VALUE=\"1\" ##WAITFORCARDSCHECKED##>1 - disable clientlogins while init</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#waitforcards_extra_delay##TPLHELPSUFFIX##Extra delay:</A></TD><TD><input name=\"waitforcards_extra_delay\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##EXTRADELAY##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#preferlocalcards##TPLHELPSUFFIX##Prefer local cards:</A></TD><TD><SELECT NAME=\"preferlocalcards\"><OPTION VALUE=\"0\">0 - local cards like proxied</OPTION><OPTION VALUE=\"1\" ##PREFERLOCALCARDSCHECKED##>1 - prefer local cards</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#unlockparental##TPLHELPSUFFIX##Unlock parental:</A></TD><TD><SELECT NAME=\"unlockparental\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##UNLOCKPARENTALCHECKED##>YES</OPTION></SELECT></TD></TR>\n\
			<TR><TH COLSPAN=\"2\">Logging</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#disableuserfile##TPLHELPSUFFIX##Usr file:</A></TD>\n\
				<TD>\n\
					<input name=\"usrfile\" type=\"text\" size=\"63\" maxlength=\"128\" value=\"##USERFILE##\">&nbsp;\n\
					<SELECT NAME=\"disableuserfile\"><OPTION VALUE=\"0\">0 - enabled</OPTION><OPTION VALUE=\"1\" ##DISABLEUSERFILECHECKED##>1 - disabled</OPTION></SELECT>&nbsp;\n\
					<SELECT NAME=\"usrfileflag\"><OPTION VALUE=\"0\">0 - just join/leave</OPTION><OPTION VALUE=\"1\" ##USERFILEFLAGCHECKED##>1 - each zap</OPTION></SELECT>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#disablemail##TPLHELPSUFFIX##Mail file:</A></TD>\n\
				<TD>\n\
					<input name=\"mailfile\" type=\"text\" size=\"30\" maxlength=\"128\" value=\"##MAILFILE##\">&nbsp;\n\
					<SELECT NAME=\"disablemail\"><OPTION VALUE=\"0\">0 - enabled</OPTION><OPTION VALUE=\"1\" ##DISABLEMAILCHECKED##>1 - disabled</OPTION></SELECT>&nbsp;\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#logfile##TPLHELPSUFFIX##Log file / max size:</A></TD>\n\
				<TD>\n\
					<input name=\"logfile\" type=\"text\" size=\"63\" maxlength=\"128\" value=\"##LOGFILE##\">&nbsp;\n\
					<SELECT NAME=\"disablelog\"><OPTION VALUE=\"0\">0 - enabled</OPTION><OPTION VALUE=\"1\" ##DISABLELOGCHECKED##>1 - disabled</OPTION></SELECT>&nbsp;\n\
					<input name=\"maxlogsize\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##MAXLOGSIZE##\"> kB\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#cwlogdir##TPLHELPSUFFIX##CW log dir:</A></TD><TD><input name=\"cwlogdir\" type=\"text\" size=\"63\" maxlength=\"128\" value=\"##CWLOGDIR##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#emmlogdir##TPLHELPSUFFIX##EMM log dir:</A></TD><TD><input name=\"emmlogdir\" type=\"text\" size=\"63\" maxlength=\"128\" value=\"##EMMLOGDIR##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#loghistorysize##TPLHELPSUFFIX##Loghistory Size:</A></TD><TD><input name=\"loghistorysize\" type=\"text\" size=\"5\" maxlength=\"4\" value=\"##LOGHISTORYSIZE##\"></TD></TR>\n\
			##TPLENABLELEDBIT##\
			<TR><TH COLSPAN=\"2\">Failban</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#failbantime##TPLHELPSUFFIX##Failban time:</A></TD><TD><input name=\"failbantime\" type=\"text\" size=\"5\" maxlength=\"6\" value=\"##FAILBANTIME##\"> min blocking IP based</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#failbancount##TPLHELPSUFFIX##Failban count:</A></TD><TD><input name=\"failbancount\" type=\"text\" size=\"5\" maxlength=\"2\" value=\"##FAILBANCOUNT##\"> chances with wrong credenticals</TD></TR>\n\
			<TR><TH COLSPAN=\"2\">Timeouts / Times</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#clienttimeout##TPLHELPSUFFIX##Client timeout:</A></TD><TD><input name=\"clienttimeout\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##CLIENTTIMEOUT##\"> ms to give up and return timeout</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#fallbacktimeout##TPLHELPSUFFIX##Fallback timeout:</A></TD><TD><input name=\"fallbacktimeout\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##FALLBACKTIMEOUT##\"> ms to switch to fallback reader</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#cachedelay##TPLHELPSUFFIX##Cache delay:</A></TD><TD><input name=\"cachedelay\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##CACHEDELAY##\"> ms delaying answers from cache</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#clientmaxidle##TPLHELPSUFFIX##Client max idle:</A></TD><TD><input name=\"clientmaxidle\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##CLIENTMAXIDLE##\"> s to disconnect idle clients</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#sleep##TPLHELPSUFFIX##Global sleep:</A></TD><TD><input name=\"sleep\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##SLEEP##\"> min to switch a client in sleepmode</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#suppresscmd08##TPLHELPSUFFIX##Suppress cmd08:</A></TD><TD><input name=\"suppresscmd08\" type=\"checkbox\" value=\"1\" ##SUPPRESSCMD08##></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serialreadertimeout##TPLHELPSUFFIX##Serial reader timeout:</A></TD><TD><input name=\"serialreadertimeout\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##SERIALTIMEOUT##\"> ms</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#readerrestartseconds##TPLHELPSUFFIX##Reader restart seconds:</A></TD><TD><input name=\"readerrestartseconds\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##READERRESTARTSECONDS##\"> s waittime to restart a reader</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#dropdups##TPLHELPSUFFIX##Drop duplicate users:</A></TD><TD><SELECT NAME=\"dropdups\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##DROPDUPSCHECKED##>YES</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#max_cache_time##TPLHELPSUFFIX##Max cache time:</A></TD><TD><input name=\"max_cache_time\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##MAXCACHETIME##\"> s keep ECMs in cache time</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#max_cache_count##TPLHELPSUFFIX##Max cache count:</A></TD><TD><input name=\"max_cache_count\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##MAXCACHECOUNT##\"> nr of ECMS to keep in cache</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#double_check##TPLHELPSUFFIX##ECM Doublecheck:</A></TD><TD><SELECT NAME=\"double_check\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##DCHECKCSELECTED##>YES</OPTION></SELECT></TD></TR>\n\
##TPLCACHEEXWAITTIME##\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"

#ifdef CS_CACHEEX
#define TPLCACHEEXWAITTIME "\
			<TR><TD>##TPLHELPPREFIX##conf#cacheexwaittime##TPLHELPSUFFIX##Cacheex wait time:</A></TD><TD><input name=\"cacheexwaittime\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##CACHEEXWAITTIME##\"> ms max waittime for a cache entry</TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#cacheexenablestats##TPLHELPSUFFIX##Cacheex write statistic:</A></TD><TD><SELECT NAME=\"cacheexenablestats\"><OPTION VALUE=\"0\">OFF</OPTION><OPTION VALUE=\"1\" ##CACHEEXSTATSSELECTED##>ON</OPTION></SELECT></TD></TR>\n"
#endif

#if defined(QBOXHD) || defined(__arm__)
#define TPLENABLELEDBIT "\
			<TR><TD>##TPLHELPPREFIX##conf#enableled##TPLHELPSUFFIX##Enable LED:</A></TD><TD><SELECT NAME=\"enableled\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##ENABLELEDSELECTED1##>For Router</OPTION><OPTION VALUE=\"2\" ##ENABLELEDSELECTED2##>For QboxHD</OPTION></SELECT></TD></TR>\n"
#endif

#if defined(QBOXHD_LED) || defined(CS_LED)
#define TPLENABLELEDBIT "\
			<TR><TD>##TPLHELPPREFIX##conf#enableled##TPLHELPSUFFIX##Enable LED:</A></TD><TD><SELECT NAME=\"enableled\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##ENABLELEDSELECTED1##>For Router</OPTION><OPTION VALUE=\"2\" ##ENABLELEDSELECTED2##>For QboxHD</OPTION></SELECT></TD></TR>\n"
#endif

#ifdef WITH_LB
#define TPLCONFIGLOADBALANCER "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"loadbalancer\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Loadbalancer Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_mode##TPLHELPSUFFIX##Loadbalance Mode:</A></TD>\n\
				<TD>\n\
					<select name=\"lb_mode\">\n\
						<option value=\"0\" ##LBMODE0##>0 - Loadbalancer disabled (send to all readers)</option>\n\
						<option value=\"1\" ##LBMODE1##>1 - Fastest reader first</option>\n\
						<option value=\"2\" ##LBMODE2##>2 - Oldest reader first</option>\n\
						<option value=\"3\" ##LBMODE3##>3 - Lowest usagelevel</option>\n\
						<option value=\"10\" ##LBMODE10##>10 - Log statistics only</option>\n\
					</select>\n\
				</TD>\n\
			</TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_save##TPLHELPSUFFIX##Loadbalance save every:</A></TD><TD><input name=\"lb_save\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBSAVE##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_savepath##TPLHELPSUFFIX##Statistics save path:</A></TD><TD><input name=\"lb_savepath\" type=\"text\" size=\"63\" maxlength=\"128\" value=\"##LBSAVEPATH##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_nbest_readers##TPLHELPSUFFIX##Number of best readers:</A></TD><TD><input name=\"lb_nbest_readers\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBNBESTREADERS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_nbest_percaid##TPLHELPSUFFIX##Number of best readers per caid:</A></TD><TD><input name=\"lb_nbest_percaid\" type=\"text\" size=\"63\" maxlength=\"320\" value=\"##LBNBESTPERCAID##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_nfb_readers##TPLHELPSUFFIX##Number of fallback readers:</A></TD><TD><input name=\"lb_nfb_readers\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBNFBREADERS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_max_readers##TPLHELPSUFFIX##Max Readers:</A></TD><TD><input name=\"lb_max_readers\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBMAXREADERS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_min_ecmcount##TPLHELPSUFFIX##Min ECM count:</A></TD><TD><input name=\"lb_min_ecmcount\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBMINECMCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_max_ecmcount##TPLHELPSUFFIX##Max ECM count:</A></TD><TD><input name=\"lb_max_ecmcount\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBMAXECEMCOUNT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_retrylimit##TPLHELPSUFFIX##Retry limit:</A></TD><TD><input name=\"lb_retrylimit\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBRETRYLIMIT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_retrylimits##TPLHELPSUFFIX##Special retry limit per caid:</A></TD><TD><input name=\"lb_retrylimits\" type=\"text\" size=\"63\" maxlength=\"320\" value=\"##LBRETRYLIMITS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_reopen_seconds##TPLHELPSUFFIX##Time to reopen:</A></TD><TD><input name=\"lb_reopen_seconds\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBREOPENSECONDS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_stat_cleanup##TPLHELPSUFFIX##Hours to cleanup older than:</A></TD><TD><input name=\"lb_stat_cleanup\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBCLEANUP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_reopen_mode##TPLHELPSUFFIX##Reopen mode:</A></TD><TD><SELECT NAME=\"lb_reopen_mode\"><OPTION VALUE=\"0\">0 - reopen after time</OPTION><OPTION VALUE=\"1\" ##REOPENMODE##>1 - reopen fast</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_noproviderforcaid##TPLHELPSUFFIX##Ignore provider for:</A></TD><TD><input name=\"lb_noproviderforcaid\" type=\"text\" size=\"63\" maxlength=\"160\" value=\"##LBNOPROVIDERFORCAID##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_auto_betatunnel##TPLHELPSUFFIX##Auto Betatunnel:</A></TD><TD><SELECT NAME=\"lb_auto_betatunnel\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##LBAUTOBETATUNNEL##>YES</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#lb_auto_betatunnel_prefer_beta##TPLHELPSUFFIX##Prefer Beta over Nagra %:</A></TD><TD><input name=\"lb_auto_betatunnel_prefer_beta\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##LBPREFERBETA##\"></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
	<BR><BR>\
	<form action=\"config.html\" method=\"get\">\n\
	<input name=\"part\" type=\"hidden\" value=\"loadbalancer\">\n\
	<TABLE class=\"config\">\n\
		<TR><TH COLSPAN=\"5\">Control</TH></TR>\n\
		<TR>\n\
			<TD STYLE=\"text-align:center;\"><input type=\"submit\" name=\"button\" value=\"Load Stats\" ##BTNDISABLED##></TD>\n\
			<TD STYLE=\"text-align:center;\"><input type=\"submit\" name=\"button\" value=\"Save Stats\" ##BTNDISABLED##></TD>\n\
			<TD STYLE=\"text-align:center;\"><input type=\"submit\" name=\"button\" value=\"Clear Stats\" ##BTNDISABLED##></TD>\n\
			<TD STYLE=\"text-align:center;\"><input type=\"submit\" name=\"button\" value=\"Clear Timeouts\" ##BTNDISABLED##></TD>\n\
			<TD STYLE=\"text-align:center;\"><input type=\"submit\" name=\"button\" value=\"Clear Not Founds\" ##BTNDISABLED##></TD>\n\
		</TR>\n\
	</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef MODULE_CAMD33
#define TPLCONFIGCAMD33 "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"camd33\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE CLASS=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Camd33 Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_2##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##PORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_3##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#key##TPLHELPSUFFIX##Key:</A></TD><TD><input name=\"key\" type=\"text\" size=\"32\" maxlength=\"32\" value=\"##KEY##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#passive##TPLHELPSUFFIX##Passive:</A></TD><TD><SELECT NAME=\"passive\"><OPTION VALUE=\"0\">NO</OPTION><OPTION VALUE=\"1\" ##PASSIVECHECKED##>YES</OPTION></SELECT></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#nocrypt_2##TPLHELPSUFFIX##Nocrypt:</A></TD><TD><input name=\"nocrypt\" type=\"text\" size=\"63\" maxlength=\"200\" value=\"##NOCRYPT##\"></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef MODULE_CAMD35
#define TPLCONFIGCAMD35 "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"camd35\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<input name=\"suppresscmd08\" type=\"hidden\" value=\"0\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Camd35 Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_3##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##PORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_4##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#suppresscmd08##TPLHELPSUFFIX##Suppress cmd08:</A></TD><TD><input name=\"suppresscmd08\" type=\"checkbox\" value=\"1\" ##SUPPRESSCMD08UDP##></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef MODULE_CAMD35_TCP
#define TPLCONFIGCAMD35TCP "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"camd35tcp\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<input name=\"suppresscmd08\" type=\"hidden\" value=\"0\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Camd35 TCP Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_4##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##PORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_5##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#suppresscmd08##TPLHELPSUFFIX##Suppress cmd08:</A></TD><TD><input name=\"suppresscmd08\" type=\"checkbox\" value=\"1\" ##SUPPRESSCMD08TCP##></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef CS_CACHEEX
#define TPLCONFIGCSP "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"csp\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit CSP CacheEX Config</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#port_9##TPLHELPSUFFIX##Port:</A></TD><TD><input name=\"port\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##PORT##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#serverip_9##TPLHELPSUFFIX##Serverip:</A></TD><TD><input name=\"serverip\" type=\"text\" size=\"15\" maxlength=\"15\" value=\"##SERVERIP##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##conf#wait_time##TPLHELPSUFFIX##Wait time:</A></TD><TD><input name=\"wait_time\" type=\"text\" size=\"5\" maxlength=\"5\" value=\"##WAIT_TIME##\"></TD></TR>\n\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"
#endif

#ifdef MODULE_SERIAL
#define TPLCONFIGSERIAL "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
	<form action=\"config.html\" method=\"get\">\n\
		<input name=\"part\" type=\"hidden\" value=\"serial\">\n\
		<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
		<TABLE class=\"config\">\n\
			<TR><TH COLSPAN=\"2\">Edit Serial Config</TH></TR>\n\
##DEVICES##\
			<TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
		</TABLE>\n\
	</form>\n\
	<BR><BR>\n\
##TPLFOOTER##"
#endif

#define TPLCONFIGSERIALDEVICEBIT "\
			<TR><TD>##TPLHELPPREFIX##conf#device##TPLHELPSUFFIX##Device:</A></TD><TD><input name=\"device\" type=\"text\" size=\"63\" maxlength=\"511\" value=\"##SERIALDEVICE##\"></TD></TR>\n"

#ifdef HAVE_DVBAPI
#define TPLCONFIGDVBAPI "\
##TPLHEADER##\
##TPLMENU##\
##TPLCONFIGMENU##\
##MESSAGE##\
<form action=\"config.html\" method=\"get\">\n\
	<input name=\"part\" type=\"hidden\" value=\"dvbapi\">\n\
	<input name=\"action\" type=\"hidden\" value=\"execute\">\n\
	<input name=\"enabled\" type=\"hidden\" value=\"0\">\n\
	<input name=\"reopenonzap\" type=\"hidden\" value=\"0\">\n\
	<input name=\"au\" type=\"hidden\" value=\"0\">\n\
	<TABLE class=\"config\">\n\
		<TR><TH COLSPAN=\"2\">Edit DVB Api Config</TH></TR>\n\
		<TR><TD>##TPLHELPPREFIX##conf#enabled##TPLHELPSUFFIX##Enabled:</A></TD><TD><input name=\"enabled\" type=\"checkbox\" value=\"1\" ##ENABLEDCHECKED##>\n\
		<TR><TD>##TPLHELPPREFIX##conf#au##TPLHELPSUFFIX##AU:</A></TD><TD><input name=\"au\" type=\"checkbox\" value=\"1\" ##AUCHECKED##>\n\
		<TR><TD>##TPLHELPPREFIX##conf#boxtype##TPLHELPSUFFIX##Boxtype:</A></TD><TD><SELECT name=\"boxtype\">##BOXTYPE##</select></TD></TR>\n\
		<TR><TD>##TPLHELPPREFIX##conf#reopenonzap##TPLHELPSUFFIX##ReopenOnZap:</A></TD><TD><input name=\"reopenonzap\" type=\"checkbox\" value=\"1\" ##REOPENONZAPCHECKED##>\n\
		<TR><TD>##TPLHELPPREFIX##conf#user_2##TPLHELPSUFFIX##User:</A></TD><TD><input name=\"user\" type=\"text\" size=\"63\" maxlength=\"63\" value=\"##USER##\"></TD></TR>\n\
		<TR><TD>##TPLHELPPREFIX##conf#pmt_mode##TPLHELPSUFFIX##PMT Mode:</A></TD><TD><select name=\"pmt_mode\">\n\
			<option value=\"0\" ##PMTMODESELECTED0##>0 - use camd.socket and PMT file</option>\n\
			<option value=\"1\" ##PMTMODESELECTED1##>1 - disable reading PMT file</option>\n\
			<option value=\"2\" ##PMTMODESELECTED2##>2 - disable camd.socket</option>\n\
			<option value=\"3\" ##PMTMODESELECTED3##>3 - read PMT file on startup only</option>\n\
			<option value=\"4\" ##PMTMODESELECTED4##>4 - do not use signal handler to monitor /tmp</option>\n\
			<option value=\"5\" ##PMTMODESELECTED5##>5 - do not use signal handler to monitor /tmp & disable camd.socket</option>\n\
		</SELECT></TD></TR>\n\
		<TR><TD>##TPLHELPPREFIX##conf#request_mode##TPLHELPSUFFIX##Request Mode:</A></TD><TD><select name=\"request_mode\">\n\
			<option value=\"0\" ##REQMODESELECTED0##>0 - try all possible CAIDs one by one</option>\n\
			<option value=\"1\" ##REQMODESELECTED1##>1 - try all CAIDs simultaneously</option>\n\
		</SELECT></TD></TR>\n\
		<TR><TD>##TPLHELPPREFIX##conf#delayer##TPLHELPSUFFIX##Delayer (ms):</A></TD><TD><input name=\"delayer\" type=\"text\" size=\"4\" maxlength=\"4\" value=\"##DELAYER##\"></TD></TR>\n\
    <TR><TD colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"Save\" ##BTNDISABLED##></TD></TR>\n\
	</TABLE>\n\
</form>\n\
##TPLFOOTER##"
#endif

#define TPLSERVICECONFIGLIST "\
##TPLHEADER##\
##TPLMENU##\
##MESSAGE##\
	<FORM action=\"services_edit.html\" method=\"get\"><INPUT TYPE=\"hidden\" NAME=\"action\" VALUE=\"add\">\n\
		<TABLE CLASS=\"stats\">\n\
			<TR>\n\
				<TH>Label</TH>\n\
				<TH colspan=\"3\" class=\"centered\">Action</TH>\n\
			</TR>\n\
##SERVICETABS##\
			<TR>\n\
				<TD>New Service:</TD>\n\
				<TD><input name=\"service\" type=\"text\"></TD>\n\
				<TD colspan=\"2\" class=\"centered\"><input type=\"submit\" value=\"Add\" ##BTNDISABLED##></TD>\n\
			</TR>\n\
		</TABLE>\n\
	</FORM>\n\
##TPLFOOTER##"

#define TPLSERVICECONFIGLISTBIT "\
			<TR>\n\
				<TD>##LABEL##</TD>\n\
				<TD width=\"250\" class=\"centered\">\n\
##SIDLIST##\
				</TD>\n\
				<TD><A HREF=\"services_edit.html?service=##LABELENC##&amp;action=edit\" TITLE=\"Edit this Service\"><IMG CLASS=\"icon\" SRC=\"image?i=ICEDI\" ALT=\"Edit Service\"></A></TD>\n\
				<TD><A HREF=\"services.html?service=##LABELENC##&amp;action=delete\" TITLE=\"Delete this Service\"><IMG CLASS=\"icon\" SRC=\"image?i=ICDEL\" ALT=\"Delete Service\"></A></TD>\n\
			</TR>\n"

#define TPLSERVICECONFIGSIDBIT "				<DIV class=\"##SIDCLASS##\">##SID##</DIV>\n"

#define TPLSERVICEEDIT "\
##TPLHEADER##\
##TPLMENU##\
##MESSAGE##\
	<BR><BR>\n\
	<form action=\"services_edit.html\" method=\"get\">\n\
		<input name=\"service\" type=\"hidden\" value=\"##LABEL##\">\n\
		<TABLE CLASS=\"stats\">\n\
			<TR><TH COLSPAN=\"2\">Edit Service ##LABEL##</TH></TR>\n\
			<TR><TD>##TPLHELPPREFIX##services#caid##TPLHELPSUFFIX##caid: </A></TD><TD><input name=\"caid\" type=\"text\" size=\"63\" maxlength=\"160\" value=\"##CAIDS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##services#provid##TPLHELPSUFFIX##provid: </A></TD><TD><input name=\"provid\" type=\"text\" size=\"63\" maxlength=\"60\" value=\"##PROVIDS##\"></TD></TR>\n\
			<TR><TD>##TPLHELPPREFIX##services#srvid##TPLHELPSUFFIX##srvid: </A></TD><TD><textarea name=\"srvid\" cols=\"80\" rows=\"5\">##SRVIDS##</textarea></TD></TR>\n\
			<TR><TD>&nbsp;</TD><TD align=\"right\"><input type=\"submit\" name=\"action\" value=\"Save\" title=\"Save service and reload services\" ##BTNDISABLED##></TD>\n\
		</TABLE>\n\
	</form>\n\
##TPLFOOTER##"

#define TPLPRESHUTDOWN "\
##TPLHEADER##\
##TPLMENU##\
	<br><br><br>\n\
	<DIV class = \"warning\">Do you really want to shutdown&#47; restart oscam?<br>All users will become disconnected.<br>\n\
		If you use &#39;Shutdown&#39; you will not be able to restart oscam from webinterface.<br>\n\
		The webinterface will try to connect to oscam once a few seconds after shutdown&#47; restart.</b><br>\n\
	</DIV>\n\
	<br>\n\
	<form action=\"shutdown.html\" method=\"get\">\n\
		<input type=\"submit\" name=\"action\" value=\"Shutdown\" title=\"Shutdown OSCam\" ##BTNDISABLED##>\n\
		<input type=\"submit\" name=\"action\" value=\"Restart\" title=\"Restart OSCam\" ##BTNDISABLED##>\n\
	</form>\n\
##TPLFOOTER##"

#define TPLSHUTDOWN "\
<HTML>\n\
<HEAD>\n\
	<TITLE>OSCAM ##CS_VERSION## build ###CS_SVN_VERSION##</TITLE>\n\
	<link href=\"favicon.ico\" rel=\"icon\" type=\"image/x-icon\"/>\
	<script type=\"text/javascript\" src=\"oscam.js\"></script>\n\
##REFRESH##\
	<style type=\"text/css\">\n\
##STYLESHEET##\n\
	</style>\n\
</HEAD>\n\
<BODY>\n\
	<H2>OSCAM ##CS_VERSION## build ###CS_SVN_VERSION##</H2>\
##TPLMENU##\
	<br><P CLASS=\"blinking\">OSCam Shutdown - Try Reconnect in ##SECONDS## Seconds</p><br><br>\n\
##TPLFOOTER##"

#define TPLSCRIPT "\
##TPLHEADER##\
##TPLMENU##\
##MESSAGE##\
	<br><br><b>OSCam execute script: ##SCRIPTNAME## --> Status: ##SCRIPTRESULT## --> Returncode: ##CODE##</b><br>\n\
##TPLFOOTER##"

#define TPLGRAPH "\
<?xml-stylesheet type=\"text/css\" href=\"site.css\" ?>\n\
<svg xml:space='preserve' xmlns='http://www.w3.org/2000/svg'\n\
	xmlns:xlink='http://www.w3.org/1999/xlink'\n\
	width='100%' height='100%'\n\
	viewBox='0 0 800 300'\n\
	preserveAspectRatio='none'\n\
	onload='init(evt)'\n\
>\n\
<g id='graph'>\n\
	<rect id='g' class='graph_bg' x1='0' y1='0' width='800' height='300' />\n\
	<text id='graph_error' class='graph_error' x='400' y='125' visibility='hidden'>Error occured!</text>\n\
	<path id='graph_grid' class='graph_grid' d='M 2 75 L 800 75 M 2 150 L 800 150 M 2 225 L 800 225'/>\n\
	<text id='graph_grid_interval' style='font-size:8px;'  cursor='pointer' class='graph_grid_txt' x='400' y='10'>-</text>\n\
	<text id='graph_grid_txt3' class='graph_grid_txt' x='800' y='223'>-</text>\n\
	<text id='graph_grid_txt2' class='graph_grid_txt' x='800' y='148'>-</text>\n\
	<text id='graph_grid_txt1' class='graph_grid_txt' x='800' y='73'>-</text>\n\
</g>\n\
<script type='text/ecmascript'>\n\
<![CDATA[\n\
if (typeof getURL == 'undefined') {\n\
	getURL = function(url, callback) {\n\
 		try {\n\
			if (typeof callback.operationComplete == 'function') {\n\
				callback = callback.operationComplete;\n\
			}\n\
		} catch (e) {}\n\
		if (typeof callback != 'function') {\n\
			throw 'No callback function for getURL';\n\
		}\n\
		var http_request = null;\n\
		if (typeof XMLHttpRequest != 'undefined') {\n\
			http_request = new XMLHttpRequest();\n\
		} else if (typeof ActiveXObject != 'undefined') {\n\
			try {\n\
				http_request = new ActiveXObject('Msxml2.XMLHTTP');\n\
			} catch (e) {\n\
				try {\n\
					http_request = new ActiveXObject('Microsoft.XMLHTTP');\n\
				} catch (e) {}\n\
			}\n\
		}\n\
		if (!http_request) {\n\
			throw 'Both getURL and XMLHttpRequest are undefined';\n\
		}\n\
		http_request.onreadystatechange = function() {\n\
			if (http_request.readyState == 4) {\n\
				callback( \n\
					{\n\
						success : true,\n\
						content : http_request.responseXML,\n\
						contentType : http_request.getResponseHeader('Content-Type')\n\
					}\n\
				);\n\
			}\n\
		}\n\
		http_request.open('GET', url, true);\n\
		http_request.send(null);\n\
	}\n\
}\n\
var SVGDoc = null;\n\
var svgNS = 'http://www.w3.org/2000/svg';\n\
var max = 0;\n\
var plots = new Array();\n\
var Color = new Array('blue','green','orange','brown','fuchsia','red','cyan','yellow','purple','turquoise','coral','khaki','greenyellow','thistle','tan','silver','darkgreen','darkviolet','gold','indianred','black');\n\
var max_num_points = 800;\n\
var step = 800 / max_num_points ;\n\
var fetch_url='';\n\
var interval = 3500;\n\
var activesecs = 15;\n\
var activeTask = null;\n\
var hideLabels = false;\n\
function init(evt) {\n\
	fetch_url=location.search.split('?');\n\
	fetch_url='oscamapi.html?part=ecmhistory&' + fetch_url[fetch_url.length-1];\n\
	if ( location.search.indexOf('hidelabels=1') > 0 ) hideLabels = true;\n\
	SVGDoc = evt.target.ownerDocument;\n\
	SVGDoc.getElementById('graph_grid_interval').addEventListener('mousedown', switch_interval, false);\n\
	fetch_data();\n\
	switch_interval();\n\
}\n\
function switch_interval() {\n\
	if (interval<=1000) {\n\
		interval -= 250;\n\
	} else if (interval<=5000) {\n\
		interval -= 500;\n\
	} else {\n\
		interval -= 1000;\n\
	}\n\
	if ( interval<250 ) interval = 10000;\n\
	SVGDoc.getElementById('graph_grid_interval').firstChild.data = 'Refresh:'+interval+'ms';\n\
	window.clearInterval(activeTask);\n\
	activeTask = setInterval('fetch_data()', interval);\n\
}\n\
function fetch_data() {\n\
	if (fetch_url) {\n\
		getURL(fetch_url, plot_data);\n\
	} else {\n\
		handle_error();\n\
	}\n\
}\n\
function showlabel(evt) {\n\
	var id = evt.target.id.split('_');\n\
	var obj = SVGDoc.getElementById('graph_txt_'+id[2]);\n\
	if ( evt.type=='mouseover' ) {\n\
			obj.setAttributeNS(null,'style','font-size:9px;display:;');\n\
	} else if ( evt.type=='mouseout' ) {\n\
		obj.setAttributeNS(null,'style','font-size:9px;display:none;');\n\
	}\n\
}\n\
function plot_data(obj) {\n\
	if (!obj.success) return handle_error();\n\
	if (!obj.content) return handle_error();\n\
	var readers = obj.content.getElementsByTagName('oscam')[0].getElementsByTagName('status')[0].getElementsByTagName('client');\n\
	i=0;\n\
	max=0;\n\
	rdx=0;\n\
	while (rdx < readers.length) {\n\
		if ( plots[i] == null ) {\n\
			plots[i] = new Array();\n\
			plots[i]['data'] = new Array();\n\
			plots[i]['ecmmin'] = -1;\n\
			plots[i]['ecmmax'] = 0;\n\
			plots[i]['last_fetched_timestamp'] = 0;\n\
			plots[i]['last_valid_ecm_duration'] = -1;\n\
		}\n\
		plots[i]['name'] = readers[rdx].getAttribute('name');\n\
		var ecmhistory = readers[rdx].getElementsByTagName('request')[0].getAttribute('ecmhistory').split(',');\n\
		var maxecm = -1;\n\
		for (var ii = ecmhistory.length-1; ii >= 0; ii--) {\n\
			var ecm = ecmhistory[ii].split(':');\n\
			if ( ecm[0]>-1 ) {\n\
				if ( ecm[1]==0 ) {\n\
					if ( parseInt( ecm[2] ) > plots[i]['last_fetched_timestamp'] ) {\n\
						if ( parseInt( ecm[0] ) > maxecm ) maxecm = parseInt( ecm[0] );\n\
						plots[i]['last_fetched_timestamp'] = parseInt( ecm[2] );\n\
					}\n\
				}\n\
			}\n\
		}\n\
		if ( maxecm == -1 ) {\n\
			maxecm = plots[i]['last_valid_ecm_duration'];\n\
		} else {\n\
			plots[i]['last_valid_ecm_duration'] = maxecm;\n\
		}\n\
		plots[i]['ecmtime'] = maxecm;\n\
		plots[i]['idletime'] = parseInt( readers[rdx].getElementsByTagName('times')[0].getAttribute('idle') );\n\
		if (!isNumber(plots[i]['ecmtime'])) {\n\
			plots[i]['ecmtime'] = -1;\n\
		} else {\n\
			if ( plots[i]['ecmmax'] < plots[i]['ecmtime'] ) plots[i]['ecmmax'] = plots[i]['ecmtime'] ;\n\
			if ( ( plots[i]['ecmmin'] > plots[i]['ecmtime']) || (plots[i]['ecmmin'] == -1 ) ) plots[i]['ecmmin'] = plots[i]['ecmtime'] ;\n\
		}\n\
		if (!isNumber(plots[i]['idletime'])) {\n\
			plots[i]['ecmtime'] = -1;\n\
		} else if (plots[i]['idletime']>activesecs) {\n\
			plots[i]['ecmtime'] = -1;\n\
		}\n\
		plots[i]['idle'] = readers[rdx].getElementsByTagName('times')[0].getAttribute('idle');\n\
		if ( plots[i]['data'].length==max_num_points ) {\n\
			var ii = 0;\n\
			while (ii < max_num_points) {\n\
				plots[i]['data'][ii] = plots[i]['data'][ii+1];\n\
				ii++;\n\
			}\n\
			plots[i]['data'].length--;\n\
		}\n\
		plots[i]['data'][plots[i]['data'].length] = plots[i]['ecmtime'];\n\
		if ( SVGDoc.getElementById('graph_txt_'+i) == null ) {\n\
			var newText = document.createElementNS(svgNS,'text');\n\
			newText.setAttributeNS(null,'x',3);\n\
			newText.setAttributeNS(null,'fill',Color[ i - (parseInt(i/Color.length)*Color.length)]);\n\
			newText.setAttributeNS(null,'id','graph_txt_'+i);\n\
			if ( hideLabels ) {\n\
				newText.setAttributeNS(null,'y',8);\n\
				newText.setAttributeNS(null,'style','font-size:9px;display:none;');\n\
			} else {\n\
				newText.setAttributeNS(null,'y',8+(8*i));\n\
				newText.setAttributeNS(null,'style','font-size:9px');\n\
			}\n\
			var textNode = document.createTextNode(plots[i]['name']);\n\
      newText.appendChild(textNode);\n\
			document.getElementById('graph').appendChild(newText);\n\
		}\n\
		if ( plots[i]['ecmtime']==-1 ) {\
			SVGDoc.getElementById('graph_txt_'+i).firstChild.data = plots[i]['name'] + ':idle';\n\
		} else {\
			SVGDoc.getElementById('graph_txt_'+i).firstChild.data = plots[i]['name'] + ':' + plots[i]['ecmtime'];\n\
		}\
		if ( plots[i]['ecmmin'] != -1 ) SVGDoc.getElementById('graph_txt_'+i).firstChild.data += ' (Max:'+plots[i]['ecmmax']+'/Min:'+plots[i]['ecmmin']+')';\n\
		if ( SVGDoc.getElementById('graph_path_'+i) == null ) {\n\
			var newPath = document.createElementNS(svgNS,'path');\n\
			newPath.setAttributeNS(null,'id','graph_path_'+i);\n\
			newPath.setAttributeNS(null,'fill','none');\n\
			newPath.setAttributeNS(null,'stroke',Color[ i - (parseInt(i/Color.length)*Color.length)]);\n\
			newPath.setAttributeNS(null,'stroke-width','1');\n\
			newPath.setAttributeNS(null,'stroke-opacity','0.8');\n\
			if ( hideLabels ) {\n\
				newPath.addEventListener('mouseover', showlabel, false);\n\
				newPath.addEventListener('mouseout', showlabel, false);\n\
			}\n\
			document.getElementById('graph').appendChild(newPath);\n\
		}\n\
		a=0;\n\
		var plot = plots[i]['data'];\n\
		while (a < plot.length) {\n\
			if (plot[a] > max) max = plot[a];\n\
			a++;\n\
		}\n\
		i++;\n\
	 	rdx++;\n\
	}\n\
	var rmax=makeRoundMax(max);\n\
 	var scale = 298 / rmax;\n\
	i=0;\n\
	while (i < plots.length) {\n\
 		var plot = plots[i]['data'];\n\
		var path = 'M 0 ' + (298 - (plot[0] * scale));\n\
		for (b = 1; b < plot.length; b++) {\n\
			var x = step * b;\n\
			var y_in = 298 - (plot[b] * scale);\n\
			path += ' L' + x + ' ' + y_in;\n\
		}\n\
 		SVGDoc.getElementById('graph_path_'+i).setAttributeNS(null, 'd', path);\n\
		i++;\n\
	}\n\
 	SVGDoc.getElementById('graph_grid_txt1').firstChild.data = 3*rmax/4 + 'ms'\n\
	SVGDoc.getElementById('graph_grid_txt2').firstChild.data = 2*rmax/4 + 'ms';\n\
	SVGDoc.getElementById('graph_grid_txt3').firstChild.data = rmax/4 + 'ms';\n\
	SVGDoc.getElementById('graph_error').setAttributeNS(null, 'visibility', 'hidden');\n\
}\n\
function makeRoundMax(max) {\n\
		rmax = 1000;\n\
		i = 0;\n\
		while (max > rmax) {\n\
			i++;\n\
			if (i && (i % 4 == 0)) {\n\
				rmax *= 1.25;\n\
			} else {\n\
				rmax *= 2;\n\
			}\n\
			if (i == 8) rmax *= 1.000;\n\
		}\n\
	return rmax;\n\
}\n\
function handle_error() {\n\
	SVGDoc.getElementById('graph_error').setAttributeNS(null, 'visibility', 'visible');\n\
}\n\
function isNumber(a) {\n\
	return typeof a == 'number' && isFinite(a);\n\
}\n\
]]>\
</script>\
</svg>"

#ifdef CS_CACHEEX
#define TPLCACHEEXPAGE "\
##TPLHEADER##\
##TPLMENU##\
##MESSAGE##\
	<BR><BR>\n\
	<TABLE CLASS=\"stats\">\n\
			<TR><TH COLSPAN=\"7\">CacheEX Stats</TH></TR>\n\
			<TR><TH>Direction</TH><TH>Type</TH><TH>Name</TH><TH>Cache EX Mode</TH><TH>Push</TH><TH>Got</TH><TH>Hit</TH></TR>\n\
##TABLECLIENTROWS##\
##TABLEREADERROWS##\
	</TABLE>\n\
	<BR><BR>\n\
	<TABLE>\n\
		<TR><TH>Total push</TH><TH>Total got</TH><TH>Total hit</TH><TH>Cache size</TH></TR>\n\
		<TR><TD class=\"centered\">##TOTAL_CACHEXPUSH_IMG##</TD><TD class=\"centered\">##TOTAL_CACHEXGOT_IMG##</TD><TD class=\"centered\">&nbsp;</TD><TD class=\"centered\">&nbsp;</TD></TR>\n\
		<TR><TD class=\"centered\">##TOTAL_CACHEXPUSH##</TD><TD class=\"centered\">##TOTAL_CACHEXGOT##</TD><TD class=\"centered\">##TOTAL_CACHEXHIT## (##REL_CACHEXHIT##%)</TD><TD class=\"centered\">##TOTAL_CACHESIZE##</TD></TR>\n\
	</TABLE>\n\
	<BR><BR>\n\
##TPLFOOTER##"

#define TPLCACHEEXTABLEROW "			<TR><TD>&nbsp;&nbsp;##DIRECTIONIMG##&nbsp;&nbsp;</TD><TD>##TYPE##</TD><TD>##NAME##</TD><TD>##LEVEL##</TD><TD>##PUSH##</TD><TD>##GOT##</TD><TD>##HIT##</TD></TR>\n"
#endif

char *tpl[] = {
	"HEADER",
	"APIHEADER",
	"JSONHEADER",
	"APIERROR",
	"APICONFIRMATION",
	"FOOTER",
	"APIFOOTER",
	"JSONFOOTER",
	"MENU",
	"REFRESH",
	"HELPPREFIX",
	"HELPSUFFIX",
	"STATUS",
	"APISTATUS",
	"JSONSTATUS",
	"CLIENTSTATUSBIT",
	"APISTATUSBIT",
	"JSONSTATUSBIT",
	"USERCONFIGLIST",
	"ADDNEWUSER",
	"USERCONFIGLISTBIT",
	"APIUSERCONFIGLIST",
	"APIUSERCONFIGLISTBIT",
	"SIDTAB",
	"SIDTABBIT",
	"READERS",
	"APIREADERS",
	"APIREADERSBIT",
	"READERSBIT",
	"READERENTITLEBIT",
	"READERREFRESHBIT",
	"READERSTATS",
	"READERSTATSBIT",
	"SCANUSB",
	"SCANUSBBIT",
	"ENTITLEMENTS",
	"ENTITLEMENTGENERICBIT",
	"ENTITLEMENTBIT",
	"ENTITLEMENTITEMBIT",
	"ENTITLEMENTCCCAMBIT",
	"ENTITLEMENTCCCAMENTRYBIT",
	"APICCCAMCARDLIST",
	"APICCCAMCARDBIT",
	"APICCCAMCARDNODEBIT",
	"APICCCAMCARDPROVIDERBIT",
	"APIREADERSTATS",
	"APIREADERSTATSEMMBIT",
	"APIREADERSTATSECMBIT",
	"READERCONFIG",
	"READERCONFIGSIDOKBIT",
	"READERCONFIGSIDNOBIT",
	"READERCONFIGSTDHWREADERBIT",
	"READERCONFIGHOPBIT",
	"READERCONFIGCAMD35BIT",
	"READERCONFIGCS378XBIT",
	"READERCONFIGRADEGASTBIT",
	"READERCONFIGNCD525BIT",
	"READERCONFIGNCD524BIT",
	"READERCONFIGCCCAMBIT",
	"APIUSEREDIT",
	"USEREDIT",
	"USEREDITRDRSELECTED",
	"USEREDITSIDOKBIT",
	"USEREDITSIDNOBIT",
	"SAVETEMPLATES",
	"CONFIGMENU",
	"FILEMENU",
	"FILE",
	"APIFILE",
	"FAILBAN",
	"APIFAILBAN",
	"FAILBANBIT",
	"APIFAILBANBIT",
	"CONFIGGBOX",
	"CONFIGMONITOR",
	"CONFIGGLOBAL",
	"CONFIGSERIALDEVICEBIT",
	"SERVICECONFIGLIST",
	"SERVICECONFIGLISTBIT",
	"SERVICECONFIGSIDBIT",
	"SERVICEEDIT",
	"PRESHUTDOWN",
	"SHUTDOWN",
	"SCRIPT",
	"GRAPH"
#ifdef HAVE_DVBAPI
	,"CONFIGDVBAPI"
	,"CONFIGMENUDVBAPI"
	,"FILEMENUDVBAPI"
#endif
#ifdef CS_ANTICASC
	,"USEREDITANTICASC"
	,"CONFIGANTICASC"
	,"CONFIGMENUANTICASC"
	,"FILEMENUANTICASC"
#endif
#if defined(QBOXHD) || defined(__arm__)
	,"ENABLELEDBIT"
#endif
#if defined(QBOXHD_LED) || defined(CS_LED)
	,"ENABLELEDBIT"
#endif
#ifdef WITH_LIBUSB
	,"READERCONFIGDEVICEEPBIT"
#endif
#ifdef WITH_COOLAPI
	,"READERCOOLSTREAMBIT"
#endif
#ifdef WITH_DEBUG
	,"DEBUGSELECT"
#endif
#ifdef WITH_LB
	,"CONFIGMENULB"
	,"CONFIGLOADBALANCER"
#endif
#ifdef MODULE_CAMD33
	,"CONFIGCAMD33"
	,"CONFIGMENUCAMD33"
#endif
#ifdef MODULE_CAMD35
	,"CONFIGCAMD35"
	,"CONFIGMENUCAMD35"
#endif
#ifdef MODULE_CCCAM
	,"USEREDITCCCAM"
	,"CONFIGCCCAM"
	,"CONFIGMENUCCCAM"
#endif
#ifdef MODULE_NEWCAMD
	,"CONFIGNEWCAMD"
	,"CONFIGMENUNEWCAMD"
#endif
#ifdef MODULE_RADEGAST
	,"CONFIGRADEGAST"
	,"CONFIGMENURADEGAST"
#endif
#ifdef MODULE_CAMD35_TCP
	,"CONFIGCAMD35TCP"
	,"CONFIGMENUCAMD35TCP"
#endif
#ifdef MODULE_SERIAL
	,"CONFIGSERIAL"
	,"CONFIGMENUSERIAL"
#endif
#ifdef LCDSUPPORT
	,"LCDOPTIONS"
#endif
#ifdef WITH_SSL
	,"HTTPFORCESSLV3"
#endif
#ifdef CS_CACHEEX
	,"USEREDITCACHEEXBIT"
	,"READEREDITCACHEEXBIT"
	,"CACHEEXWAITTIME"
	,"CACHEEXPAGE"
	,"CACHEEXTABLEROW"
	,"CACHEEXMENUITEM"
	,"CONFIGMENUCSP"
	,"CONFIGCSP"
	,"ICARRR"
	,"ICARRL"
#endif
	,"ICMAI"
	,"ICSTA"
	,"ICDEL"
	,"ICEDI"
	,"ICENT"
	,"ICREF"
	,"ICKIL"
	,"ICDIS"
	,"ICENA"
	,"ICHID"
	,"ICRES"
	,"ICSPAC"
};

char *tplmap[] = {
	TPLHEADER,
	TPLAPIHEADER,
	TPLJSONHEADER,
	TPLAPIERROR,
	TPLAPICONFIRMATION,
	TPLFOOTER,
	TPLAPIFOOTER,
	TPLJSONFOOTER,
	TPLMENU,
	TPLREFRESH,
	TPLHELPPREFIX,
	TPLHELPSUFFIX,
	TPLSTATUS,
	TPLAPISTATUS,
	TPLJSONSTATUS,
	TPLCLIENTSTATUSBIT,
	TPLAPISTATUSBIT,
	TPLJSONSTATUSBIT,
	TPLUSERCONFIGLIST,
	TPLADDNEWUSER,
	TPLUSERCONFIGLISTBIT,
	TPLAPIUSERCONFIGLIST,
	TPLAPIUSERCONFIGLISTBIT,
	TPLSIDTAB,
	TPLSIDTABBIT,
	TPLREADERS,
	TPLAPIREADERS,
	TPLAPIREADERSBIT,
	TPLREADERSBIT,
	TPLREADERENTITLEBIT,
	TPLREADERREFRESHBIT,
	TPLREADERSTATS,
	TPLREADERSTATSBIT,
	TPLSCANUSB,
	TPLSCANUSBBIT,
	TPLENTITLEMENTS,
	TPLENTITLEMENTGENERICBIT,
	TPLENTITLEMENTBIT,
	TPLENTITLEMENTITEMBIT,
	TPLENTITLEMENTCCCAMBIT,
	TPLENTITLEMENTCCCAMENTRYBIT,
	TPLAPICCCAMCARDLIST,
	TPLAPICCCAMCARDBIT,
	TPLAPICCCAMCARDNODEBIT,
	TPLAPICCCAMCARDPROVIDERBIT,
	TPLAPIREADERSTATS,
	TPLAPIREADERSTATSEMMBIT,
	TPLAPIREADERSTATSECMBIT,
	TPLREADERCONFIG,
	TPLREADERCONFIGSIDOKBIT,
	TPLREADERCONFIGSIDNOBIT,
	TPLREADERCONFIGSTDHWREADERBIT,
	TPLREADERCONFIGHOPBIT,
	TPLREADERCONFIGCAMD35BIT,
	TPLREADERCONFIGCS378XBIT,
	TPLREADERCONFIGRADEGASTBIT,
	TPLREADERCONFIGNCD525BIT,
	TPLREADERCONFIGNCD524BIT,
	TPLREADERCONFIGCCCAMBIT,
	TPLAPIUSEREDIT,
	TPLUSEREDIT,
	TPLUSEREDITRDRSELECTED,
	TPLUSEREDITSIDOKBIT,
	TPLUSEREDITSIDNOBIT,
	TPLSAVETEMPLATES,
	TPLCONFIGMENU,
	TPLFILEMENU,
	TPLFILE,
	TPLAPIFILE,
	TPLFAILBAN,
	TPLAPIFAILBAN,
	TPLFAILBANBIT,
	TPLAPIFAILBANBIT,
	TPLCONFIGGBOX,
	TPLCONFIGMONITOR,
	TPLCONFIGGLOBAL,
	TPLCONFIGSERIALDEVICEBIT,
	TPLSERVICECONFIGLIST,
	TPLSERVICECONFIGLISTBIT,
	TPLSERVICECONFIGSIDBIT,
	TPLSERVICEEDIT,
	TPLPRESHUTDOWN,
	TPLSHUTDOWN,
	TPLSCRIPT,
	TPLGRAPH
#ifdef HAVE_DVBAPI
	,TPLCONFIGDVBAPI
	,TPLCONFIGMENUDVBAPI
	,TPLFILEMENUDVBAPI
#endif
#ifdef CS_ANTICASC
	,TPLUSEREDITANTICASC
	,TPLCONFIGANTICASC
	,TPLCONFIGMENUANTICASC
	,TPLFILEMENUANTICASC
#endif
#if defined(QBOXHD) || defined(__arm__)
	,TPLENABLELEDBIT
#endif
#if defined(QBOXHD_LED) || defined(CS_LED)
	,TPLENABLELEDBIT
#endif
#ifdef WITH_LIBUSB
	,TPLREADERCONFIGDEVICEEPBIT
#endif
#ifdef WITH_COOLAPI
	,TPLREADERCOOLSTREAMBIT
#endif
#ifdef WITH_DEBUG
	,TPLDEBUGSELECT
#endif
#ifdef WITH_LB
	,TPLCONFIGMENULB
	,TPLCONFIGLOADBALANCER
#endif
#ifdef MODULE_CAMD33
	,TPLCONFIGCAMD33
	,TPLCONFIGMENUCAMD33
#endif
#ifdef MODULE_CAMD35
	,TPLCONFIGCAMD35
	,TPLCONFIGMENUCAMD35
#endif
#ifdef MODULE_CCCAM
	,TPLUSEREDITCCCAM
	,TPLCONFIGCCCAM
	,TPLCONFIGMENUCCCAM
#endif
#ifdef MODULE_NEWCAMD
	,TPLCONFIGNEWCAMD
	,TPLCONFIGMENUNEWCAMD
#endif
#ifdef MODULE_RADEGAST
	,TPLCONFIGRADEGAST
	,TPLCONFIGMENURADEGAST
#endif
#ifdef MODULE_CAMD35_TCP
	,TPLCONFIGCAMD35TCP
	,TPLCONFIGMENUCAMD35TCP
#endif
#ifdef MODULE_SERIAL
	,TPLCONFIGSERIAL
	,TPLCONFIGMENUSERIAL
#endif
#ifdef LCDSUPPORT
	,TPLLCDOPTIONS
#endif
#ifdef WITH_SSL
	,TPLHTTPFORCESSLV3
#endif
#ifdef CS_CACHEEX
	,TPLUSEREDITCACHEEXBIT
	,TPLREADEREDITCACHEEXBIT
	,TPLCACHEEXWAITTIME
	,TPLCACHEEXPAGE
	,TPLCACHEEXTABLEROW
	,TPLCACHEEXMENUITEM
	,TPLCONFIGMENUCSP
	,TPLCONFIGCSP
	,ICARRR
	,ICARRL
#endif
	,ICMAI
	,ICSTA
	,ICDEL
	,ICEDI
	,ICENT
	,ICREF
	,ICKIL
	,ICDIS
	,ICENA
	,ICHID
	,ICRES
	,ICSPAC
};

int32_t tpl_count(void) { return sizeof(tpl) / sizeof(char *); }
int32_t tplmap_count(void) { return sizeof(tplmap) / sizeof(char *); }
int32_t cv(void) { return 91789605==crc32(0L,(unsigned char*)ICMAI,strlen(ICMAI))/2?1:0; }

#endif