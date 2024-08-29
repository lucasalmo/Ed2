<!DOCTYPE html>
<html lang="en" class=" " style=""><head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8"><style id="autocompletion.css">.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #CAD6FA;    z-index: 1;}.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #3a674e;}.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid #abbffe;    margin-top: -1px;    background: rgba(233,233,253,0.4);    position: absolute;    z-index: 2;}.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid rgba(109, 150, 13, 0.8);    background: rgba(58, 103, 78, 0.62);}.ace_completion-meta {    opacity: 0.5;    margin: 0.9em;}.ace_completion-message {    color: blue;}.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #2d69c7;}.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #93ca12;}.ace_editor.ace_autocomplete {    width: 300px;    z-index: 200000;    border: 1px lightgray solid;    position: fixed;    box-shadow: 2px 3px 5px rgba(0,0,0,.2);    line-height: 1.4;    background: #fefefe;    color: #111;}.ace_dark.ace_editor.ace_autocomplete {    border: 1px #484747 solid;    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);    line-height: 1.4;    background: #25282c;    color: #c1c1c1;}
/*# sourceURL=ace/css/autocompletion.css */</style><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style id="ace-xcode">.ace-xcode .ace_gutter {background: #e8e8e8;color: #333}.ace-xcode .ace_print-margin {width: 1px;background: #e8e8e8}.ace-xcode {background-color: #FFFFFF;color: #000000}.ace-xcode .ace_cursor {color: #000000}.ace-xcode .ace_marker-layer .ace_selection {background: #B5D5FF}.ace-xcode.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #FFFFFF;}.ace-xcode .ace_marker-layer .ace_step {background: rgb(198, 219, 174)}.ace-xcode .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #BFBFBF}.ace-xcode .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.071)}.ace-xcode .ace_gutter-active-line {background-color: rgba(0, 0, 0, 0.071)}.ace-xcode .ace_marker-layer .ace_selected-word {border: 1px solid #B5D5FF}.ace-xcode .ace_constant.ace_language,.ace-xcode .ace_keyword,.ace-xcode .ace_meta,.ace-xcode .ace_variable.ace_language {color: #C800A4}.ace-xcode .ace_invisible {color: #BFBFBF}.ace-xcode .ace_constant.ace_character,.ace-xcode .ace_constant.ace_other {color: #275A5E}.ace-xcode .ace_constant.ace_numeric {color: #3A00DC}.ace-xcode .ace_entity.ace_other.ace_attribute-name,.ace-xcode .ace_support.ace_constant,.ace-xcode .ace_support.ace_function {color: #450084}.ace-xcode .ace_fold {background-color: #C800A4;border-color: #000000}.ace-xcode .ace_entity.ace_name.ace_tag,.ace-xcode .ace_support.ace_class,.ace-xcode .ace_support.ace_type {color: #790EAD}.ace-xcode .ace_storage {color: #C900A4}.ace-xcode .ace_string {color: #DF0002}.ace-xcode .ace_comment {color: #008E00}.ace-xcode .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==) right repeat-y}
/*# sourceURL=ace/css/ace-xcode */</style><style id="ace-dracula">.ace-dracula .ace_gutter {background: #282a36;color: rgb(144,145,148)}.ace-dracula .ace_print-margin {width: 1px;background: #44475a}.ace-dracula {background-color: #282a36;color: #f8f8f2}.ace-dracula .ace_cursor {color: #f8f8f0}.ace-dracula .ace_marker-layer .ace_selection {background: #44475a}.ace-dracula.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #282a36;border-radius: 2px}.ace-dracula .ace_marker-layer .ace_step {background: rgb(198, 219, 174)}.ace-dracula .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #a29709}.ace-dracula .ace_marker-layer .ace_active-line {background: #44475a}.ace-dracula .ace_gutter-active-line {background-color: #44475a}.ace-dracula .ace_marker-layer .ace_selected-word {box-shadow: 0px 0px 0px 1px #a29709;border-radius: 3px;}.ace-dracula .ace_fold {background-color: #50fa7b;border-color: #f8f8f2}.ace-dracula .ace_keyword {color: #ff79c6}.ace-dracula .ace_constant.ace_language {color: #bd93f9}.ace-dracula .ace_constant.ace_numeric {color: #bd93f9}.ace-dracula .ace_constant.ace_character {color: #bd93f9}.ace-dracula .ace_constant.ace_character.ace_escape {color: #ff79c6}.ace-dracula .ace_constant.ace_other {color: #bd93f9}.ace-dracula .ace_support.ace_function {color: #8be9fd}.ace-dracula .ace_support.ace_constant {color: #6be5fd}.ace-dracula .ace_support.ace_class {font-style: italic;color: #66d9ef}.ace-dracula .ace_support.ace_type {font-style: italic;color: #66d9ef}.ace-dracula .ace_storage {color: #ff79c6}.ace-dracula .ace_storage.ace_type {font-style: italic;color: #8be9fd}.ace-dracula .ace_invalid {color: #F8F8F0;background-color: #ff79c6}.ace-dracula .ace_invalid.ace_deprecated {color: #F8F8F0;background-color: #bd93f9}.ace-dracula .ace_string {color: #f1fa8c}.ace-dracula .ace_comment {color: #6272a4}.ace-dracula .ace_variable {color: #50fa7b}.ace-dracula .ace_variable.ace_parameter {font-style: italic;color: #ffb86c}.ace-dracula .ace_entity.ace_other.ace_attribute-name {color: #50fa7b}.ace-dracula .ace_entity.ace_name.ace_function {color: #50fa7b}.ace-dracula .ace_entity.ace_name.ace_tag {color: #ff79c6}.ace-dracula .ace_invisible {color: #626680;}.ace-dracula .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAEklEQVQImWNgYGBgYHB3d/8PAAOIAdULw8qMAAAAAElFTkSuQmCC) right repeat-y}
/*# sourceURL=ace/css/ace-dracula */</style><style id="ace-github">.ace-github .ace_gutter {background: #e8e8e8;color: #AAA;}.ace-github  {background: #fff;color: #000;}.ace-github .ace_keyword {font-weight: bold;}.ace-github .ace_string {color: #D14;}.ace-github .ace_variable.ace_class {color: teal;}.ace-github .ace_constant.ace_numeric {color: #099;}.ace-github .ace_constant.ace_buildin {color: #0086B3;}.ace-github .ace_support.ace_function {color: #0086B3;}.ace-github .ace_comment {color: #998;font-style: italic;}.ace-github .ace_variable.ace_language  {color: #0086B3;}.ace-github .ace_paren {font-weight: bold;}.ace-github .ace_boolean {font-weight: bold;}.ace-github .ace_string.ace_regexp {color: #009926;font-weight: normal;}.ace-github .ace_variable.ace_instance {color: teal;}.ace-github .ace_constant.ace_language {font-weight: bold;}.ace-github .ace_cursor {color: black;}.ace-github.ace_focus .ace_marker-layer .ace_active-line {background: rgb(255, 255, 204);}.ace-github .ace_marker-layer .ace_active-line {background: rgb(245, 245, 245);}.ace-github .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-github.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-github.ace_nobold .ace_line > span {font-weight: normal !important;}.ace-github .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-github .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-github .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-github .ace_gutter-active-line {background-color : rgba(0, 0, 0, 0.07);}.ace-github .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-github .ace_invisible {color: #BFBFBF}.ace-github .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-github .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-github */</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}.ace_editor {position: relative;overflow: hidden;padding: 0;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;text-align: left;-webkit-tap-highlight-color: rgba(0, 0, 0, 0);}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;box-sizing: border-box;min-width: 100%;contain: style size layout;font-variant-ligatures: no-common-ligatures;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;contain: style size layout;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {position: absolute;top: 0;left: 0;right: 0;padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {contain: strict;position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;contain: strict;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: transparent;color: inherit;z-index: 1000;opacity: 1;}.ace_composition_placeholder { color: transparent }.ace_composition_marker { border-bottom: 1px solid;position: absolute;border-radius: 0;margin-top: 1px;}[ace_nocontext=true] {transform: none!important;filter: none!important;clip-path: none!important;mask : none!important;contain: none!important;perspective: none!important;mix-blend-mode: initial!important;z-index: auto;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;height: 1000000px;contain: style size layout;}.ace_text-layer {font: inherit !important;position: absolute;height: 1000000px;width: 1000000px;contain: style size layout;}.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {contain: style size layout;position: absolute;top: 0;left: 0;right: 0;}.ace_hidpi .ace_text-layer,.ace_hidpi .ace_gutter-layer,.ace_hidpi .ace_content,.ace_hidpi .ace_gutter {contain: strict;will-change: transform;}.ace_hidpi .ace_text-layer > .ace_line, .ace_hidpi .ace_text-layer > .ace_line_group {contain: strict;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_hasPlaceholder .ace_hidden-cursors .ace_cursor {opacity: 0;}.ace_smooth-blinking .ace_cursor {transition: opacity 0.18s;}.ace_animate-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: step-end;animation-name: blink-ace-animate;animation-iteration-count: infinite;}.ace_animate-blinking.ace_smooth-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: ease-in-out;animation-name: blink-ace-animate-smooth;}@keyframes blink-ace-animate {from, to { opacity: 1; }60% { opacity: 0; }}@keyframes blink-ace-animate-smooth {from, to { opacity: 1; }45% { opacity: 1; }60% { opacity: 0; }85% { opacity: 0; }}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_error_bracket {position: absolute;border-bottom: 1px solid #DE5555;border-radius: 0;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;box-sizing: border-box;}.ace_line .ace_fold {box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_inline_button {border: 1px solid lightgray;display: inline-block;margin: -1px 8px;padding: 0 5px;pointer-events: auto;cursor: pointer;}.ace_inline_button:hover {border-color: gray;background: rgba(200,200,200,0.2);display: inline-block;pointer-events: auto;}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}.ace_mobile-menu {position: absolute;line-height: 1.5;border-radius: 4px;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;background: white;box-shadow: 1px 3px 2px grey;border: 1px solid #dcdcdc;color: black;}.ace_dark > .ace_mobile-menu {background: #333;color: #ccc;box-shadow: 1px 3px 2px grey;border: 1px solid #444;}.ace_mobile-button {padding: 2px;cursor: pointer;overflow: hidden;}.ace_mobile-button:hover {background-color: #eee;opacity:1;}.ace_mobile-button:active {background-color: #ddd;}.ace_placeholder {font-family: arial;transform: scale(0.9);transform-origin: left;white-space: pre;opacity: 0.7;margin: 0 10px;}
/*# sourceURL=ace/css/ace_editor.css */</style><meta charset="utf-8"><link rel="shortcut icon" href="https://onecompiler.com/favicon.ico"><link rel="stylesheet" href="03-ListaLinear_arquivos/css.css"><script async="" src="03-ListaLinear_arquivos/analytics.js"></script><script async="" custom-element="amp-timeago" src="03-ListaLinear_arquivos/highlight.min.js"></script><meta name="viewport" content="width=device-width"><meta charset="utf-8"><title>42qmt9866 - C - OneCompiler</title><meta name="next-head-count" content="3"><link rel="preload" href="03-ListaLinear_arquivos/9dd41107b312b11072fc.css" as="style"><link rel="stylesheet" href="03-ListaLinear_arquivos/9dd41107b312b11072fc.css" data-n-g=""><noscript data-n-css=""></noscript><link rel="preload" href="03-ListaLinear_arquivos/main-c00f56739d4bf943dd6f.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/webpack-23ebb4aaf35236474dd0.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/framework.f0acb69465e7e5a293e0.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/9345971d10a19f172c69e3b4ac62aa051ec883cb.f50d31b9276407c94922.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/bcbe55d625e57f7d085dfb5a0f33d5c328cfe320.2ba9e442da711f9b76ef.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/de4f3b197ffa5201f9c779e1480ae6b8c04f373d.1c9536a4bed1971497a8.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/a94d6d6a584b9be86067590b3c476d02391a7d0a.41c2afd42674e7aeb47c.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/_app-0d78cddbbed2c09c49f2.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/e17e7b540dcb4382df0cec45a37d1a52b10f3ced.75f54defc4cda229b4e7.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/7fa69bf31fd19c4bb4674b4f7823d62d0c12e6ad.7cfd27c91c0c7dd84690.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/3d2c8c0d2a3170fb24e91674988c3b2d3a5f7c90.c48cc796d33266af928f.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/7b7d07bb151ce202b5cc96bf4b8b52c019b63ab0.ba478c7ff64bb70a8201.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/5119778374e01b2b42f94fc5abe92aa61ec56e16.b30f37049e3fb0fe63ba.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/7a735be72c94803398ad6c25dab608ef6cd4e1b6.d2104993924f9782f7b3.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/48c174e367c65cf61114cf885bcd50923ff1e47b.272bc54c806848ec0972.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/77081480099afbdbf3b4ed3018b8a8b9381cfcd9.7b5630cc828f4a2a5507.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/d1e226fd0deed97f1ee3dd7aa41b133ec8083cfa.06daacc6301aa9560930.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/4dac267b9e9696d2fb6704e6f70f25b6fabc7434.08bfaa1d39d8c83bd09c.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/2635d851a80d9e3c4449a1f4600770001a17fc3b.4e5b1120366337fbfcc8.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/39.4524b8306e53ef73503b.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/3bf205b55510456cfdb12ab1dcb04649827d3e86.44a8d2a465d5fed34595.js" as="script"><link rel="preload" href="03-ListaLinear_arquivos/editor-4465d5d4d2178ea7177b.js" as="script"><style data-jss="" data-meta="MuiCssBaseline">
html {
  box-sizing: border-box;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}
*, *::before, *::after {
  box-sizing: inherit;
}
strong, b {
  font-weight: 700;
}
body {
  color: #fff;
  margin: 0;
  font-size: 0.875rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.43;
  background-color: #121212;
}
@media print {
  body {
    background-color: #fff;
  }
}
body::backdrop {
  background-color: #121212;
}
</style><style data-jss="" data-meta="PrivateHiddenCss">
@media (min-width:0px) and (max-width:599.95px) {
  .jss137 {
    display: none;
  }
}
@media (min-width:0px) {
  .jss138 {
    display: none;
  }
}
@media (max-width:599.95px) {
  .jss139 {
    display: none;
  }
}
@media (min-width:600px) and (max-width:959.95px) {
  .jss140 {
    display: none;
  }
}
@media (min-width:600px) {
  .jss141 {
    display: none;
  }
}
@media (max-width:959.95px) {
  .jss142 {
    display: none;
  }
}
@media (min-width:960px) and (max-width:1279.95px) {
  .jss143 {
    display: none;
  }
}
@media (min-width:960px) {
  .jss144 {
    display: none;
  }
}
@media (max-width:1279.95px) {
  .jss145 {
    display: none;
  }
}
@media (min-width:1280px) and (max-width:1919.95px) {
  .jss146 {
    display: none;
  }
}
@media (min-width:1280px) {
  .jss147 {
    display: none;
  }
}
@media (max-width:1919.95px) {
  .jss148 {
    display: none;
  }
}
@media (min-width:1920px) {
  .jss149 {
    display: none;
  }
}
@media (min-width:1920px) {
  .jss150 {
    display: none;
  }
}
@media (min-width:0px) {
  .jss151 {
    display: none;
  }
}
</style><style data-jss="" data-meta="MuiGrid">
.MuiGrid-container {
  width: 100%;
  display: flex;
  flex-wrap: wrap;
  box-sizing: border-box;
}
.MuiGrid-item {
  margin: 0;
  box-sizing: border-box;
}
.MuiGrid-zeroMinWidth {
  min-width: 0;
}
.MuiGrid-direction-xs-column {
  flex-direction: column;
}
.MuiGrid-direction-xs-column-reverse {
  flex-direction: column-reverse;
}
.MuiGrid-direction-xs-row-reverse {
  flex-direction: row-reverse;
}
.MuiGrid-wrap-xs-nowrap {
  flex-wrap: nowrap;
}
.MuiGrid-wrap-xs-wrap-reverse {
  flex-wrap: wrap-reverse;
}
.MuiGrid-align-items-xs-center {
  align-items: center;
}
.MuiGrid-align-items-xs-flex-start {
  align-items: flex-start;
}
.MuiGrid-align-items-xs-flex-end {
  align-items: flex-end;
}
.MuiGrid-align-items-xs-baseline {
  align-items: baseline;
}
.MuiGrid-align-content-xs-center {
  align-content: center;
}
.MuiGrid-align-content-xs-flex-start {
  align-content: flex-start;
}
.MuiGrid-align-content-xs-flex-end {
  align-content: flex-end;
}
.MuiGrid-align-content-xs-space-between {
  align-content: space-between;
}
.MuiGrid-align-content-xs-space-around {
  align-content: space-around;
}
.MuiGrid-justify-xs-center {
  justify-content: center;
}
.MuiGrid-justify-xs-flex-end {
  justify-content: flex-end;
}
.MuiGrid-justify-xs-space-between {
  justify-content: space-between;
}
.MuiGrid-justify-xs-space-around {
  justify-content: space-around;
}
.MuiGrid-justify-xs-space-evenly {
  justify-content: space-evenly;
}
.MuiGrid-spacing-xs-1 {
  width: calc(100% + 8px);
  margin: -4px;
}
.MuiGrid-spacing-xs-1 > .MuiGrid-item {
  padding: 4px;
}
.MuiGrid-spacing-xs-2 {
  width: calc(100% + 16px);
  margin: -8px;
}
.MuiGrid-spacing-xs-2 > .MuiGrid-item {
  padding: 8px;
}
.MuiGrid-spacing-xs-3 {
  width: calc(100% + 24px);
  margin: -12px;
}
.MuiGrid-spacing-xs-3 > .MuiGrid-item {
  padding: 12px;
}
.MuiGrid-spacing-xs-4 {
  width: calc(100% + 32px);
  margin: -16px;
}
.MuiGrid-spacing-xs-4 > .MuiGrid-item {
  padding: 16px;
}
.MuiGrid-spacing-xs-5 {
  width: calc(100% + 40px);
  margin: -20px;
}
.MuiGrid-spacing-xs-5 > .MuiGrid-item {
  padding: 20px;
}
.MuiGrid-spacing-xs-6 {
  width: calc(100% + 48px);
  margin: -24px;
}
.MuiGrid-spacing-xs-6 > .MuiGrid-item {
  padding: 24px;
}
.MuiGrid-spacing-xs-7 {
  width: calc(100% + 56px);
  margin: -28px;
}
.MuiGrid-spacing-xs-7 > .MuiGrid-item {
  padding: 28px;
}
.MuiGrid-spacing-xs-8 {
  width: calc(100% + 64px);
  margin: -32px;
}
.MuiGrid-spacing-xs-8 > .MuiGrid-item {
  padding: 32px;
}
.MuiGrid-spacing-xs-9 {
  width: calc(100% + 72px);
  margin: -36px;
}
.MuiGrid-spacing-xs-9 > .MuiGrid-item {
  padding: 36px;
}
.MuiGrid-spacing-xs-10 {
  width: calc(100% + 80px);
  margin: -40px;
}
.MuiGrid-spacing-xs-10 > .MuiGrid-item {
  padding: 40px;
}
.MuiGrid-grid-xs-auto {
  flex-grow: 0;
  max-width: none;
  flex-basis: auto;
}
.MuiGrid-grid-xs-true {
  flex-grow: 1;
  max-width: 100%;
  flex-basis: 0;
}
.MuiGrid-grid-xs-1 {
  flex-grow: 0;
  max-width: 8.333333%;
  flex-basis: 8.333333%;
}
.MuiGrid-grid-xs-2 {
  flex-grow: 0;
  max-width: 16.666667%;
  flex-basis: 16.666667%;
}
.MuiGrid-grid-xs-3 {
  flex-grow: 0;
  max-width: 25%;
  flex-basis: 25%;
}
.MuiGrid-grid-xs-4 {
  flex-grow: 0;
  max-width: 33.333333%;
  flex-basis: 33.333333%;
}
.MuiGrid-grid-xs-5 {
  flex-grow: 0;
  max-width: 41.666667%;
  flex-basis: 41.666667%;
}
.MuiGrid-grid-xs-6 {
  flex-grow: 0;
  max-width: 50%;
  flex-basis: 50%;
}
.MuiGrid-grid-xs-7 {
  flex-grow: 0;
  max-width: 58.333333%;
  flex-basis: 58.333333%;
}
.MuiGrid-grid-xs-8 {
  flex-grow: 0;
  max-width: 66.666667%;
  flex-basis: 66.666667%;
}
.MuiGrid-grid-xs-9 {
  flex-grow: 0;
  max-width: 75%;
  flex-basis: 75%;
}
.MuiGrid-grid-xs-10 {
  flex-grow: 0;
  max-width: 83.333333%;
  flex-basis: 83.333333%;
}
.MuiGrid-grid-xs-11 {
  flex-grow: 0;
  max-width: 91.666667%;
  flex-basis: 91.666667%;
}
.MuiGrid-grid-xs-12 {
  flex-grow: 0;
  max-width: 100%;
  flex-basis: 100%;
}
@media (min-width:600px) {
  .MuiGrid-grid-sm-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-sm-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-sm-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-sm-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-sm-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-sm-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-sm-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-sm-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-sm-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-sm-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-sm-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-sm-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-sm-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-sm-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:960px) {
  .MuiGrid-grid-md-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-md-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-md-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-md-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-md-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-md-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-md-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-md-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-md-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-md-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-md-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-md-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-md-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-md-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1280px) {
  .MuiGrid-grid-lg-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-lg-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-lg-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-lg-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-lg-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-lg-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-lg-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-lg-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-lg-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-lg-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-lg-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-lg-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-lg-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-lg-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1920px) {
  .MuiGrid-grid-xl-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-xl-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-xl-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-xl-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-xl-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-xl-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-xl-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-xl-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-xl-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-xl-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-xl-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-xl-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-xl-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-xl-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
</style><style data-jss="" data-meta="MuiBox">

</style><style data-jss="" data-meta="MuiBox">
</style><style data-jss="" data-meta="MuiBox">
</style><style data-jss="" data-meta="MuiBox">
</style><style data-jss="" data-meta="MuiPaper">
.MuiPaper-root {
  color: #fff;
  transition: box-shadow 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: #121212;
}
.MuiPaper-rounded {
  border-radius: 4px;
}
.MuiPaper-outlined {
  border: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiPaper-elevation0 {
  box-shadow: none;
}
.MuiPaper-elevation1 {
  box-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation2 {
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation3 {
  box-shadow: 0px 3px 3px -2px rgba(0,0,0,0.2),0px 3px 4px 0px rgba(0,0,0,0.14),0px 1px 8px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation4 {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation5 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 5px 8px 0px rgba(0,0,0,0.14),0px 1px 14px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation6 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation7 {
  box-shadow: 0px 4px 5px -2px rgba(0,0,0,0.2),0px 7px 10px 1px rgba(0,0,0,0.14),0px 2px 16px 1px rgba(0,0,0,0.12);
}
.MuiPaper-elevation8 {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation9 {
  box-shadow: 0px 5px 6px -3px rgba(0,0,0,0.2),0px 9px 12px 1px rgba(0,0,0,0.14),0px 3px 16px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation10 {
  box-shadow: 0px 6px 6px -3px rgba(0,0,0,0.2),0px 10px 14px 1px rgba(0,0,0,0.14),0px 4px 18px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation11 {
  box-shadow: 0px 6px 7px -4px rgba(0,0,0,0.2),0px 11px 15px 1px rgba(0,0,0,0.14),0px 4px 20px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation12 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 12px 17px 2px rgba(0,0,0,0.14),0px 5px 22px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation13 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 13px 19px 2px rgba(0,0,0,0.14),0px 5px 24px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation14 {
  box-shadow: 0px 7px 9px -4px rgba(0,0,0,0.2),0px 14px 21px 2px rgba(0,0,0,0.14),0px 5px 26px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation15 {
  box-shadow: 0px 8px 9px -5px rgba(0,0,0,0.2),0px 15px 22px 2px rgba(0,0,0,0.14),0px 6px 28px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation16 {
  box-shadow: 0px 8px 10px -5px rgba(0,0,0,0.2),0px 16px 24px 2px rgba(0,0,0,0.14),0px 6px 30px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation17 {
  box-shadow: 0px 8px 11px -5px rgba(0,0,0,0.2),0px 17px 26px 2px rgba(0,0,0,0.14),0px 6px 32px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation18 {
  box-shadow: 0px 9px 11px -5px rgba(0,0,0,0.2),0px 18px 28px 2px rgba(0,0,0,0.14),0px 7px 34px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation19 {
  box-shadow: 0px 9px 12px -6px rgba(0,0,0,0.2),0px 19px 29px 2px rgba(0,0,0,0.14),0px 7px 36px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation20 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 20px 31px 3px rgba(0,0,0,0.14),0px 8px 38px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation21 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 21px 33px 3px rgba(0,0,0,0.14),0px 8px 40px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation22 {
  box-shadow: 0px 10px 14px -6px rgba(0,0,0,0.2),0px 22px 35px 3px rgba(0,0,0,0.14),0px 8px 42px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation23 {
  box-shadow: 0px 11px 14px -7px rgba(0,0,0,0.2),0px 23px 36px 3px rgba(0,0,0,0.14),0px 9px 44px 8px rgba(0,0,0,0.12);
}
.MuiPaper-elevation24 {
  box-shadow: 0px 11px 15px -7px rgba(0,0,0,0.2),0px 24px 38px 3px rgba(0,0,0,0.14),0px 9px 46px 8px rgba(0,0,0,0.12);
}
</style><style data-jss="" data-meta="MuiAppBar">
.MuiAppBar-root {
  width: 100%;
  display: flex;
  z-index: 1200;
  box-sizing: border-box;
  flex-shrink: 0;
  flex-direction: column;
}
.MuiAppBar-positionFixed {
  top: 0;
  left: auto;
  right: 0;
  position: fixed;
}
@media print {
  .MuiAppBar-positionFixed {
    position: absolute;
  }
}
.MuiAppBar-positionAbsolute {
  top: 0;
  left: auto;
  right: 0;
  position: absolute;
}
.MuiAppBar-positionSticky {
  top: 0;
  left: auto;
  right: 0;
  position: sticky;
}
.MuiAppBar-positionStatic {
  position: static;
}
.MuiAppBar-positionRelative {
  position: relative;
}
.MuiAppBar-colorDefault {
  color: #fff;
  background-color: #212121;
}
.MuiAppBar-colorPrimary {
  color: rgba(0, 0, 0, 0.87);
  background-color: #fff;
}
.MuiAppBar-colorSecondary {
  color: rgba(0, 0, 0, 0.87);
  background-color: rgba(233, 30, 99, 1);
}
.MuiAppBar-colorInherit {
  color: inherit;
}
.MuiAppBar-colorTransparent {
  color: inherit;
  background-color: transparent;
}
</style><style data-jss="" data-meta="MuiSvgIcon">
.MuiSvgIcon-root {
  fill: currentColor;
  width: 1em;
  height: 1em;
  display: inline-block;
  font-size: 1.5rem;
  transition: fill 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  flex-shrink: 0;
  -moz-user-select: none;
}
.MuiSvgIcon-colorPrimary {
  color: #fff;
}
.MuiSvgIcon-colorSecondary {
  color: rgba(233, 30, 99, 1);
}
.MuiSvgIcon-colorAction {
  color: #fff;
}
.MuiSvgIcon-colorError {
  color: #f44336;
}
.MuiSvgIcon-colorDisabled {
  color: rgba(255, 255, 255, 0.3);
}
.MuiSvgIcon-fontSizeInherit {
  font-size: inherit;
}
.MuiSvgIcon-fontSizeSmall {
  font-size: 1.25rem;
}
.MuiSvgIcon-fontSizeLarge {
  font-size: 2.1875rem;
}
</style><style data-jss="" data-meta="MuiTouchRipple">
.MuiTouchRipple-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  z-index: 0;
  overflow: hidden;
  position: absolute;
  border-radius: inherit;
  pointer-events: none;
}
.MuiTouchRipple-ripple {
  opacity: 0;
  position: absolute;
}
.MuiTouchRipple-rippleVisible {
  opacity: 0.3;
  animation: MuiTouchRipple-keyframes-enter 550ms cubic-bezier(0.4, 0, 0.2, 1);
  transform: scale(1);
}
.MuiTouchRipple-ripplePulsate {
  animation-duration: 200ms;
}
.MuiTouchRipple-child {
  width: 100%;
  height: 100%;
  display: block;
  opacity: 1;
  border-radius: 50%;
  background-color: currentColor;
}
.MuiTouchRipple-childLeaving {
  opacity: 0;
  animation: MuiTouchRipple-keyframes-exit 550ms cubic-bezier(0.4, 0, 0.2, 1);
}
.MuiTouchRipple-childPulsate {
  top: 0;
  left: 0;
  position: absolute;
  animation: MuiTouchRipple-keyframes-pulsate 2500ms cubic-bezier(0.4, 0, 0.2, 1) 200ms infinite;
}
@-moz-keyframes MuiTouchRipple-keyframes-enter {
  0% {
    opacity: 0.1;
    transform: scale(0);
  }
  100% {
    opacity: 0.3;
    transform: scale(1);
  }
}
@-moz-keyframes MuiTouchRipple-keyframes-exit {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}
@-moz-keyframes MuiTouchRipple-keyframes-pulsate {
  0% {
    transform: scale(1);
  }
  50% {
    transform: scale(0.92);
  }
  100% {
    transform: scale(1);
  }
}
</style><style data-jss="" data-meta="MuiButtonBase">
.MuiButtonBase-root {
  color: inherit;
  border: 0;
  cursor: pointer;
  margin: 0;
  display: inline-flex;
  outline: 0;
  padding: 0;
  position: relative;
  align-items: center;
  border-radius: 0;
  vertical-align: middle;
  -moz-appearance: none;
  justify-content: center;
  text-decoration: none;
  -moz-user-select: none;
  background-color: transparent;
  -webkit-appearance: none;
  -webkit-tap-highlight-color: transparent;
}
.MuiButtonBase-root::-moz-focus-inner {
  border-style: none;
}
.MuiButtonBase-root.Mui-disabled {
  cursor: default;
  pointer-events: none;
}
@media print {
  .MuiButtonBase-root {
    color-adjust: exact;
  }
}
</style><style data-jss="" data-meta="MuiButton">
.MuiButton-root {
  color: #fff;
  padding: 6px 16px;
  font-size: 0.875rem;
  min-width: 64px;
  box-sizing: border-box;
  transition: background-color 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,box-shadow 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,border 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  font-family: Lato;
  font-weight: 500;
  line-height: 1.75;
  border-radius: 4px;
  text-transform: uppercase;
}
.MuiButton-root:hover {
  text-decoration: none;
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiButton-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
}
@media (hover: none) {
  .MuiButton-root:hover {
    background-color: transparent;
  }
}
.MuiButton-root:hover.Mui-disabled {
  background-color: transparent;
}
.MuiButton-label {
  width: 100%;
  display: inherit;
  align-items: inherit;
  justify-content: inherit;
}
.MuiButton-text {
  padding: 6px 8px;
}
.MuiButton-textPrimary {
  color: #fff;
}
.MuiButton-textPrimary:hover {
  background-color: rgba(255, 255, 255, 0.08);
}
@media (hover: none) {
  .MuiButton-textPrimary:hover {
    background-color: transparent;
  }
}
.MuiButton-textSecondary {
  color: rgba(233, 30, 99, 1);
}
.MuiButton-textSecondary:hover {
  background-color: rgba(233, 30, 99, 0.08);
}
@media (hover: none) {
  .MuiButton-textSecondary:hover {
    background-color: transparent;
  }
}
.MuiButton-outlined {
  border: 1px solid rgba(255, 255, 255, 0.23);
  padding: 5px 15px;
}
.MuiButton-outlined.Mui-disabled {
  border: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiButton-outlinedPrimary {
  color: #fff;
  border: 1px solid rgba(255, 255, 255, 0.5);
}
.MuiButton-outlinedPrimary:hover {
  border: 1px solid #fff;
  background-color: rgba(255, 255, 255, 0.08);
}
@media (hover: none) {
  .MuiButton-outlinedPrimary:hover {
    background-color: transparent;
  }
}
.MuiButton-outlinedSecondary {
  color: rgba(233, 30, 99, 1);
  border: 1px solid rgba(233, 30, 99, 0.5);
}
.MuiButton-outlinedSecondary:hover {
  border: 1px solid rgba(233, 30, 99, 1);
  background-color: rgba(233, 30, 99, 0.08);
}
.MuiButton-outlinedSecondary.Mui-disabled {
  border: 1px solid rgba(255, 255, 255, 0.3);
}
@media (hover: none) {
  .MuiButton-outlinedSecondary:hover {
    background-color: transparent;
  }
}
.MuiButton-contained {
  color: rgba(0, 0, 0, 0.87);
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
  background-color: #e0e0e0;
}
.MuiButton-contained:hover {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
  background-color: #d5d5d5;
}
.MuiButton-contained.Mui-focusVisible {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiButton-contained:active {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiButton-contained.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
  box-shadow: none;
  background-color: rgba(255, 255, 255, 0.12);
}
@media (hover: none) {
  .MuiButton-contained:hover {
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
    background-color: #e0e0e0;
  }
}
.MuiButton-contained:hover.Mui-disabled {
  background-color: rgba(255, 255, 255, 0.12);
}
.MuiButton-containedPrimary {
  color: rgba(0, 0, 0, 0.87);
  background-color: #fff;
}
.MuiButton-containedPrimary:hover {
  background-color: #3845a8;
}
@media (hover: none) {
  .MuiButton-containedPrimary:hover {
    background-color: #fff;
  }
}
.MuiButton-containedSecondary {
  color: white;
  background-color: rgba(233, 30, 99, 1);
}
.MuiButton-containedSecondary:hover {
  background-color: rgba(163, 21, 69, 1);
}
@media (hover: none) {
  .MuiButton-containedSecondary:hover {
    background-color: rgba(233, 30, 99, 1);
  }
}
.MuiButton-disableElevation {
  box-shadow: none;
}
.MuiButton-disableElevation:hover {
  box-shadow: none;
}
.MuiButton-disableElevation.Mui-focusVisible {
  box-shadow: none;
}
.MuiButton-disableElevation:active {
  box-shadow: none;
}
.MuiButton-disableElevation.Mui-disabled {
  box-shadow: none;
}
.MuiButton-colorInherit {
  color: inherit;
  border-color: currentColor;
}
.MuiButton-textSizeSmall {
  padding: 4px 5px;
  font-size: 0.8125rem;
}
.MuiButton-textSizeLarge {
  padding: 8px 11px;
  font-size: 0.9375rem;
}
.MuiButton-outlinedSizeSmall {
  padding: 3px 9px;
  font-size: 0.8125rem;
}
.MuiButton-outlinedSizeLarge {
  padding: 7px 21px;
  font-size: 0.9375rem;
}
.MuiButton-containedSizeSmall {
  padding: 4px 10px;
  font-size: 0.8125rem;
}
.MuiButton-containedSizeLarge {
  padding: 8px 22px;
  font-size: 0.9375rem;
}
.MuiButton-fullWidth {
  width: 100%;
}
.MuiButton-startIcon {
  display: inherit;
  margin-left: -4px;
  margin-right: 8px;
}
.MuiButton-startIcon.MuiButton-iconSizeSmall {
  margin-left: -2px;
}
.MuiButton-endIcon {
  display: inherit;
  margin-left: 8px;
  margin-right: -4px;
}
.MuiButton-endIcon.MuiButton-iconSizeSmall {
  margin-right: -2px;
}
.MuiButton-iconSizeSmall > *:first-child {
  font-size: 18px;
}
.MuiButton-iconSizeMedium > *:first-child {
  font-size: 20px;
}
.MuiButton-iconSizeLarge > *:first-child {
  font-size: 22px;
}
</style><style data-jss="" data-meta="MuiBackdrop">
.MuiBackdrop-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  display: flex;
  z-index: -1;
  position: fixed;
  align-items: center;
  justify-content: center;
  background-color: rgba(0, 0, 0, 0.5);
  -webkit-tap-highlight-color: transparent;
}
.MuiBackdrop-invisible {
  background-color: transparent;
}
</style><style data-jss="" data-meta="MuiDialog">
@media print {
  .MuiDialog-root {
    position: absolute !important;
  }
}
.MuiDialog-scrollPaper {
  display: flex;
  align-items: center;
  justify-content: center;
}
.MuiDialog-scrollBody {
  overflow-x: hidden;
  overflow-y: auto;
  text-align: center;
}
.MuiDialog-scrollBody:after {
  width: 0;
  height: 100%;
  content: "";
  display: inline-block;
  vertical-align: middle;
}
.MuiDialog-container {
  height: 100%;
  outline: 0;
}
@media print {
  .MuiDialog-container {
    height: auto;
  }
}
.MuiDialog-paper {
  margin: 32px;
  position: relative;
  overflow-y: auto;
}
@media print {
  .MuiDialog-paper {
    box-shadow: none;
    overflow-y: visible;
  }
}
.MuiDialog-paperScrollPaper {
  display: flex;
  max-height: calc(100% - 64px);
  flex-direction: column;
}
.MuiDialog-paperScrollBody {
  display: inline-block;
  text-align: left;
  vertical-align: middle;
}
.MuiDialog-paperWidthFalse {
  max-width: calc(100% - 64px);
}
.MuiDialog-paperWidthXs {
  max-width: 444px;
}
@media (max-width:507.95px) {
  .MuiDialog-paperWidthXs.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthSm {
  max-width: 600px;
}
@media (max-width:663.95px) {
  .MuiDialog-paperWidthSm.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthMd {
  max-width: 960px;
}
@media (max-width:1023.95px) {
  .MuiDialog-paperWidthMd.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthLg {
  max-width: 1280px;
}
@media (max-width:1343.95px) {
  .MuiDialog-paperWidthLg.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthXl {
  max-width: 1920px;
}
@media (max-width:1983.95px) {
  .MuiDialog-paperWidthXl.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperFullWidth {
  width: calc(100% - 64px);
}
.MuiDialog-paperFullScreen {
  width: 100%;
  height: 100%;
  margin: 0;
  max-width: 100%;
  max-height: none;
  border-radius: 0;
}
.MuiDialog-paperFullScreen.MuiDialog-paperScrollBody {
  margin: 0;
  max-width: 100%;
}
</style><style data-jss="" data-meta="MuiDivider">
.MuiDivider-root {
  border: none;
  height: 1px;
  margin: 0;
  flex-shrink: 0;
  background-color: rgba(255, 255, 255, 0.12);
}
.MuiDivider-absolute {
  left: 0;
  width: 100%;
  bottom: 0;
  position: absolute;
}
.MuiDivider-inset {
  margin-left: 72px;
}
.MuiDivider-light {
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiDivider-middle {
  margin-left: 16px;
  margin-right: 16px;
}
.MuiDivider-vertical {
  width: 1px;
  height: 100%;
}
.MuiDivider-flexItem {
  height: auto;
  align-self: stretch;
}
</style><style data-jss="" data-meta="MuiDrawer">
.MuiDrawer-docked {
  flex: 0 0 auto;
}
.MuiDrawer-paper {
  top: 0;
  flex: 1 0 auto;
  height: 100%;
  display: flex;
  outline: 0;
  z-index: 1100;
  position: fixed;
  overflow-y: auto;
  flex-direction: column;
  -webkit-overflow-scrolling: touch;
}
.MuiDrawer-paperAnchorLeft {
  left: 0;
  right: auto;
}
.MuiDrawer-paperAnchorRight {
  left: auto;
  right: 0;
}
.MuiDrawer-paperAnchorTop {
  top: 0;
  left: 0;
  right: 0;
  bottom: auto;
  height: auto;
  max-height: 100%;
}
.MuiDrawer-paperAnchorBottom {
  top: auto;
  left: 0;
  right: 0;
  bottom: 0;
  height: auto;
  max-height: 100%;
}
.MuiDrawer-paperAnchorDockedLeft {
  border-right: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiDrawer-paperAnchorDockedTop {
  border-bottom: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiDrawer-paperAnchorDockedRight {
  border-left: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiDrawer-paperAnchorDockedBottom {
  border-top: 1px solid rgba(255, 255, 255, 0.12);
}
</style><style data-jss="" data-meta="MuiIconButton">
.MuiIconButton-root {
  flex: 0 0 auto;
  color: #fff;
  padding: 12px;
  overflow: visible;
  font-size: 1.5rem;
  text-align: center;
  transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  border-radius: 50%;
}
.MuiIconButton-root:hover {
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiIconButton-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
  background-color: transparent;
}
@media (hover: none) {
  .MuiIconButton-root:hover {
    background-color: transparent;
  }
}
.MuiIconButton-edgeStart {
  margin-left: -12px;
}
.MuiIconButton-sizeSmall.MuiIconButton-edgeStart {
  margin-left: -3px;
}
.MuiIconButton-edgeEnd {
  margin-right: -12px;
}
.MuiIconButton-sizeSmall.MuiIconButton-edgeEnd {
  margin-right: -3px;
}
.MuiIconButton-colorInherit {
  color: inherit;
}
.MuiIconButton-colorPrimary {
  color: #fff;
}
.MuiIconButton-colorPrimary:hover {
  background-color: rgba(255, 255, 255, 0.08);
}
@media (hover: none) {
  .MuiIconButton-colorPrimary:hover {
    background-color: transparent;
  }
}
.MuiIconButton-colorSecondary {
  color: rgba(233, 30, 99, 1);
}
.MuiIconButton-colorSecondary:hover {
  background-color: rgba(233, 30, 99, 0.08);
}
@media (hover: none) {
  .MuiIconButton-colorSecondary:hover {
    background-color: transparent;
  }
}
.MuiIconButton-sizeSmall {
  padding: 3px;
  font-size: 1.125rem;
}
.MuiIconButton-label {
  width: 100%;
  display: flex;
  align-items: inherit;
  justify-content: inherit;
}
</style><style data-jss="" data-meta="MuiTypography">
.MuiTypography-root {
  margin: 0;
}
.MuiTypography-body2 {
  font-size: 0.875rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.43;
}
.MuiTypography-body1 {
  font-size: 1rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.5;
}
.MuiTypography-caption {
  font-size: 0.75rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.66;
}
.MuiTypography-button {
  font-size: 0.875rem;
  font-family: Lato;
  font-weight: 500;
  line-height: 1.75;
  text-transform: uppercase;
}
.MuiTypography-h1 {
  font-size: 3.5rem;
  font-family: Lato;
  font-weight: 300;
  line-height: 1.167;
}
@media (min-width:600px) {
  .MuiTypography-h1 {
    font-size: 4.7129rem;
  }
}
@media (min-width:960px) {
  .MuiTypography-h1 {
    font-size: 5.3556rem;
  }
}
@media (min-width:1280px) {
  .MuiTypography-h1 {
    font-size: 5.9983rem;
  }
}
.MuiTypography-h2 {
  font-size: 2.375rem;
  font-family: Lato;
  font-weight: 300;
  line-height: 1.2;
}
@media (min-width:600px) {
  .MuiTypography-h2 {
    font-size: 2.9167rem;
  }
}
@media (min-width:960px) {
  .MuiTypography-h2 {
    font-size: 3.3333rem;
  }
}
@media (min-width:1280px) {
  .MuiTypography-h2 {
    font-size: 3.75rem;
  }
}
.MuiTypography-h3 {
  font-size: 2rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.167;
}
@media (min-width:600px) {
  .MuiTypography-h3 {
    font-size: 2.5707rem;
  }
}
@media (min-width:960px) {
  .MuiTypography-h3 {
    font-size: 2.7849rem;
  }
}
@media (min-width:1280px) {
  .MuiTypography-h3 {
    font-size: 2.9991rem;
  }
}
.MuiTypography-h4 {
  font-size: 1.5625rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.235;
}
@media (min-width:600px) {
  .MuiTypography-h4 {
    font-size: 1.8219rem;
  }
}
@media (min-width:960px) {
  .MuiTypography-h4 {
    font-size: 2.0243rem;
  }
}
@media (min-width:1280px) {
  .MuiTypography-h4 {
    font-size: 2.0243rem;
  }
}
.MuiTypography-h5 {
  font-size: 1.25rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.334;
}
@media (min-width:600px) {
  .MuiTypography-h5 {
    font-size: 1.3118rem;
  }
}
@media (min-width:960px) {
  .MuiTypography-h5 {
    font-size: 1.4993rem;
  }
}
@media (min-width:1280px) {
  .MuiTypography-h5 {
    font-size: 1.4993rem;
  }
}
.MuiTypography-h6 {
  font-size: 1.125rem;
  font-family: Lato;
  font-weight: 500;
  line-height: 1.6;
}
@media (min-width:600px) {
  .MuiTypography-h6 {
    font-size: 1.25rem;
  }
}
@media (min-width:960px) {
  .MuiTypography-h6 {
    font-size: 1.25rem;
  }
}
@media (min-width:1280px) {
  .MuiTypography-h6 {
    font-size: 1.25rem;
  }
}
.MuiTypography-subtitle1 {
  font-size: 1rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.75;
}
.MuiTypography-subtitle2 {
  font-size: 0.875rem;
  font-family: Lato;
  font-weight: 500;
  line-height: 1.57;
}
.MuiTypography-overline {
  font-size: 0.75rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 2.66;
  text-transform: uppercase;
}
.MuiTypography-srOnly {
  width: 1px;
  height: 1px;
  overflow: hidden;
  position: absolute;
}
.MuiTypography-alignLeft {
  text-align: left;
}
.MuiTypography-alignCenter {
  text-align: center;
}
.MuiTypography-alignRight {
  text-align: right;
}
.MuiTypography-alignJustify {
  text-align: justify;
}
.MuiTypography-noWrap {
  overflow: hidden;
  white-space: nowrap;
  text-overflow: ellipsis;
}
.MuiTypography-gutterBottom {
  margin-bottom: 0.35em;
}
.MuiTypography-paragraph {
  margin-bottom: 16px;
}
.MuiTypography-colorInherit {
  color: inherit;
}
.MuiTypography-colorPrimary {
  color: #fff;
}
.MuiTypography-colorSecondary {
  color: rgba(233, 30, 99, 1);
}
.MuiTypography-colorTextPrimary {
  color: #fff;
}
.MuiTypography-colorTextSecondary {
  color: rgba(255, 255, 255, 0.7);
}
.MuiTypography-colorError {
  color: #f44336;
}
.MuiTypography-displayInline {
  display: inline;
}
.MuiTypography-displayBlock {
  display: block;
}
</style><style data-jss="" data-meta="MuiPopover">
.MuiPopover-paper {
  outline: 0;
  position: absolute;
  max-width: calc(100% - 32px);
  min-width: 16px;
  max-height: calc(100% - 32px);
  min-height: 16px;
  overflow-x: hidden;
  overflow-y: auto;
}
</style><style data-jss="" data-meta="MuiMenu">
.MuiMenu-paper {
  max-height: calc(100% - 96px);
  -webkit-overflow-scrolling: touch;
}
.MuiMenu-list {
  outline: 0;
}
</style><style data-jss="" data-meta="MuiToolbar">
.MuiToolbar-root {
  display: flex;
  position: relative;
  align-items: center;
}
.MuiToolbar-gutters {
  padding-left: 16px;
  padding-right: 16px;
}
@media (min-width:600px) {
  .MuiToolbar-gutters {
    padding-left: 24px;
    padding-right: 24px;
  }
}
.MuiToolbar-regular {
  min-height: 56px;
}
@media (min-width:0px) and (orientation: landscape) {
  .MuiToolbar-regular {
    min-height: 48px;
  }
}
@media (min-width:600px) {
  .MuiToolbar-regular {
    min-height: 64px;
  }
}
.MuiToolbar-dense {
  min-height: 48px;
}
</style><style data-jss="" data-meta="MuiTooltip">
.MuiTooltip-popper {
  z-index: 1500;
  pointer-events: none;
}
.MuiTooltip-popperInteractive {
  pointer-events: auto;
}
.MuiTooltip-popperArrow[x-placement*="bottom"] .MuiTooltip-arrow {
  top: 0;
  left: 0;
  margin-top: -0.71em;
  margin-left: 4px;
  margin-right: 4px;
}
.MuiTooltip-popperArrow[x-placement*="top"] .MuiTooltip-arrow {
  left: 0;
  bottom: 0;
  margin-left: 4px;
  margin-right: 4px;
  margin-bottom: -0.71em;
}
.MuiTooltip-popperArrow[x-placement*="right"] .MuiTooltip-arrow {
  left: 0;
  width: 0.71em;
  height: 1em;
  margin-top: 4px;
  margin-left: -0.71em;
  margin-bottom: 4px;
}
.MuiTooltip-popperArrow[x-placement*="left"] .MuiTooltip-arrow {
  right: 0;
  width: 0.71em;
  height: 1em;
  margin-top: 4px;
  margin-right: -0.71em;
  margin-bottom: 4px;
}
.MuiTooltip-popperArrow[x-placement*="left"] .MuiTooltip-arrow::before {
  transform-origin: 0 0;
}
.MuiTooltip-popperArrow[x-placement*="right"] .MuiTooltip-arrow::before {
  transform-origin: 100% 100%;
}
.MuiTooltip-popperArrow[x-placement*="top"] .MuiTooltip-arrow::before {
  transform-origin: 100% 0;
}
.MuiTooltip-popperArrow[x-placement*="bottom"] .MuiTooltip-arrow::before {
  transform-origin: 0 100%;
}
.MuiTooltip-tooltip {
  color: #fff;
  padding: 4px 8px;
  font-size: 0.625rem;
  max-width: 300px;
  word-wrap: break-word;
  font-family: Lato;
  font-weight: 500;
  line-height: 1.4em;
  border-radius: 4px;
  background-color: rgba(97, 97, 97, 0.9);
}
.MuiTooltip-tooltipArrow {
  margin: 0;
  position: relative;
}
.MuiTooltip-arrow {
  color: rgba(97, 97, 97, 0.9);
  width: 1em;
  height: 0.71em;
  overflow: hidden;
  position: absolute;
  box-sizing: border-box;
}
.MuiTooltip-arrow::before {
  width: 100%;
  height: 100%;
  margin: auto;
  content: "";
  display: block;
  transform: rotate(45deg);
  background-color: currentColor;
}
.MuiTooltip-touch {
  padding: 8px 16px;
  font-size: 0.875rem;
  font-weight: 400;
  line-height: 1.14286em;
}
.MuiTooltip-tooltipPlacementLeft {
  margin: 0 24px ;
  transform-origin: right center;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementLeft {
    margin: 0 14px;
  }
}
.MuiTooltip-tooltipPlacementRight {
  margin: 0 24px;
  transform-origin: left center;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementRight {
    margin: 0 14px;
  }
}
.MuiTooltip-tooltipPlacementTop {
  margin: 24px 0;
  transform-origin: center bottom;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementTop {
    margin: 14px 0;
  }
}
.MuiTooltip-tooltipPlacementBottom {
  margin: 24px 0;
  transform-origin: center top;
}
@media (min-width:600px) {
  .MuiTooltip-tooltipPlacementBottom {
    margin: 14px 0;
  }
}
</style><style data-jss="" data-meta="MuiInputBase">
@-moz-keyframes mui-auto-fill {}
@-moz-keyframes mui-auto-fill-cancel {}
.MuiInputBase-root {
  color: #fff;
  cursor: text;
  display: inline-flex;
  position: relative;
  font-size: 1rem;
  box-sizing: border-box;
  align-items: center;
  font-family: Lato;
  font-weight: 400;
  line-height: 1.1876em;
}
.MuiInputBase-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.5);
  cursor: default;
}
.MuiInputBase-multiline {
  padding: 6px 0 7px;
}
.MuiInputBase-multiline.MuiInputBase-marginDense {
  padding-top: 3px;
}
.MuiInputBase-fullWidth {
  width: 100%;
}
.MuiInputBase-input {
  font: inherit;
  color: currentColor;
  width: 100%;
  border: 0;
  height: 1.1876em;
  margin: 0;
  display: block;
  padding: 6px 0 7px;
  min-width: 0;
  background: none;
  box-sizing: content-box;
  animation-name: mui-auto-fill-cancel;
  letter-spacing: inherit;
  animation-duration: 10ms;
  -webkit-tap-highlight-color: transparent;
}
.MuiInputBase-input::-webkit-input-placeholder {
  color: currentColor;
  opacity: 0.5;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input::-moz-placeholder {
  color: currentColor;
  opacity: 0.5;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input:-ms-input-placeholder {
  color: currentColor;
  opacity: 0.5;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input::-ms-input-placeholder {
  color: currentColor;
  opacity: 0.5;
  transition: opacity 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiInputBase-input:focus {
  outline: 0;
}
.MuiInputBase-input:invalid {
  box-shadow: none;
}
.MuiInputBase-input::-webkit-search-decoration {
  -webkit-appearance: none;
}
.MuiInputBase-input.Mui-disabled {
  opacity: 1;
}
.MuiInputBase-input:-webkit-autofill {
  animation-name: mui-auto-fill;
  animation-duration: 5000s;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input::-webkit-input-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input::-moz-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:-ms-input-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input::-ms-input-placeholder {
  opacity: 0 !important;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus::-webkit-input-placeholder {
  opacity: 0.5;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus::-moz-placeholder {
  opacity: 0.5;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus:-ms-input-placeholder {
  opacity: 0.5;
}
label[data-shrink=false] + .MuiInputBase-formControl .MuiInputBase-input:focus::-ms-input-placeholder {
  opacity: 0.5;
}
.MuiInputBase-inputMarginDense {
  padding-top: 3px;
}
.MuiInputBase-inputMultiline {
  height: auto;
  resize: none;
  padding: 0;
}
.MuiInputBase-inputTypeSearch {
  -moz-appearance: textfield;
  -webkit-appearance: textfield;
}
</style><style data-jss="" data-meta="PrivateNotchedOutline">
.jss169 {
  top: -5px;
  left: 0;
  right: 0;
  bottom: 0;
  margin: 0;
  padding: 0 8px;
  overflow: hidden;
  position: absolute;
  border-style: solid;
  border-width: 1px;
  border-radius: inherit;
  pointer-events: none;
}
.jss170 {
  padding: 0;
  text-align: left;
  transition: width 150ms cubic-bezier(0.0, 0, 0.2, 1) 0ms;
  line-height: 11px;
}
.jss171 {
  width: auto;
  height: 11px;
  display: block;
  padding: 0;
  font-size: 0.75em;
  max-width: 0.01px;
  text-align: left;
  transition: max-width 50ms cubic-bezier(0.0, 0, 0.2, 1) 0ms;
  visibility: hidden;
}
.jss171 > span {
  display: inline-block;
  padding-left: 5px;
  padding-right: 5px;
}
.jss172 {
  max-width: 1000px;
  transition: max-width 100ms cubic-bezier(0.0, 0, 0.2, 1) 50ms;
}
</style><style data-jss="" data-meta="MuiOutlinedInput">
.MuiOutlinedInput-root {
  position: relative;
  border-radius: 4px;
}
.MuiOutlinedInput-root:hover .MuiOutlinedInput-notchedOutline {
  border-color: #fff;
}
@media (hover: none) {
  .MuiOutlinedInput-root:hover .MuiOutlinedInput-notchedOutline {
    border-color: rgba(255, 255, 255, 0.23);
  }
}
.MuiOutlinedInput-root.Mui-focused .MuiOutlinedInput-notchedOutline {
  border-color: #fff;
  border-width: 2px;
}
.MuiOutlinedInput-root.Mui-error .MuiOutlinedInput-notchedOutline {
  border-color: #f44336;
}
.MuiOutlinedInput-root.Mui-disabled .MuiOutlinedInput-notchedOutline {
  border-color: rgba(255, 255, 255, 0.3);
}
.MuiOutlinedInput-colorSecondary.Mui-focused .MuiOutlinedInput-notchedOutline {
  border-color: rgba(233, 30, 99, 1);
}
.MuiOutlinedInput-adornedStart {
  padding-left: 14px;
}
.MuiOutlinedInput-adornedEnd {
  padding-right: 14px;
}
.MuiOutlinedInput-multiline {
  padding: 18.5px 14px;
}
.MuiOutlinedInput-multiline.MuiOutlinedInput-marginDense {
  padding-top: 10.5px;
  padding-bottom: 10.5px;
}
.MuiOutlinedInput-notchedOutline {
  border-color: rgba(255, 255, 255, 0.23);
}
.MuiOutlinedInput-input {
  padding: 18.5px 14px;
}
.MuiOutlinedInput-input:-webkit-autofill {
  caret-color: #fff;
  border-radius: inherit;
  -webkit-box-shadow: 0 0 0 100px #266798 inset;
  -webkit-text-fill-color: #fff;
}
.MuiOutlinedInput-inputMarginDense {
  padding-top: 10.5px;
  padding-bottom: 10.5px;
}
.MuiOutlinedInput-inputMultiline {
  padding: 0;
}
.MuiOutlinedInput-inputAdornedStart {
  padding-left: 0;
}
.MuiOutlinedInput-inputAdornedEnd {
  padding-right: 0;
}
</style><style data-jss="" data-meta="MuiFormLabel">
.MuiFormLabel-root {
  color: rgba(255, 255, 255, 0.7);
  padding: 0;
  font-size: 1rem;
  font-family: Lato;
  font-weight: 400;
  line-height: 1;
}
.MuiFormLabel-root.Mui-focused {
  color: #fff;
}
.MuiFormLabel-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.5);
}
.MuiFormLabel-root.Mui-error {
  color: #f44336;
}
.MuiFormLabel-colorSecondary.Mui-focused {
  color: rgba(233, 30, 99, 1);
}
.MuiFormLabel-asterisk.Mui-error {
  color: #f44336;
}
</style><style data-jss="" data-meta="MuiInputLabel">
.MuiInputLabel-root {
  display: block;
  transform-origin: top left;
}
.MuiInputLabel-formControl {
  top: 0;
  left: 0;
  position: absolute;
  transform: translate(0, 24px) scale(1);
}
.MuiInputLabel-marginDense {
  transform: translate(0, 21px) scale(1);
}
.MuiInputLabel-shrink {
  transform: translate(0, 1.5px) scale(0.75);
  transform-origin: top left;
}
.MuiInputLabel-animated {
  transition: color 200ms cubic-bezier(0.0, 0, 0.2, 1) 0ms,transform 200ms cubic-bezier(0.0, 0, 0.2, 1) 0ms;
}
.MuiInputLabel-filled {
  z-index: 1;
  transform: translate(12px, 20px) scale(1);
  pointer-events: none;
}
.MuiInputLabel-filled.MuiInputLabel-marginDense {
  transform: translate(12px, 17px) scale(1);
}
.MuiInputLabel-filled.MuiInputLabel-shrink {
  transform: translate(12px, 10px) scale(0.75);
}
.MuiInputLabel-filled.MuiInputLabel-shrink.MuiInputLabel-marginDense {
  transform: translate(12px, 7px) scale(0.75);
}
.MuiInputLabel-outlined {
  z-index: 1;
  transform: translate(14px, 20px) scale(1);
  pointer-events: none;
}
.MuiInputLabel-outlined.MuiInputLabel-marginDense {
  transform: translate(14px, 12px) scale(1);
}
.MuiInputLabel-outlined.MuiInputLabel-shrink {
  transform: translate(14px, -6px) scale(0.75);
}
</style><style data-jss="" data-meta="MuiFormControl">
.MuiFormControl-root {
  border: 0;
  margin: 0;
  display: inline-flex;
  padding: 0;
  position: relative;
  min-width: 0;
  flex-direction: column;
  vertical-align: top;
}
.MuiFormControl-marginNormal {
  margin-top: 16px;
  margin-bottom: 8px;
}
.MuiFormControl-marginDense {
  margin-top: 8px;
  margin-bottom: 4px;
}
.MuiFormControl-fullWidth {
  width: 100%;
}
</style><style data-jss="" data-meta="MuiTextField">

</style><style data-jss="" data-meta="makeStyles">
.jss101 {
  z-index: 1101;
  border-bottom: 1px solid #d3d7da;
}
.jss102 {
  background: #ffffff;
}
.jss103 {
  border: 1px solid #c1c1c1;
  cursor: pointer;
}
.jss104 {
  flex-grow: 1;
}
.jss105 {
  padding-top: 1px;
  padding-left: 5px;
  padding-right: 10px;
}
.jss106 {
  width: 180px;
  cursor: pointer;
  height: 27px;
  background-size: auto;
  background-image: url(https://static.onecompiler.com/images/logo/oc_logo_v4_dark.svg);
  background-repeat: no-repeat;
  background-position: center;
}
.jss107 {
  width: 48px;
  height: 48px;
}
.jss108 {
  height: 40px;
  font-size: 30px;;
  margin-left: 18px;;
  border-right: 1px solid #464748;
  margin-right: 18px;;
  padding-bottom: 10px;;
}
.jss109 {
  margin-bottom: 30px;
}
@media (max-width:959.95px) {
  .jss109 {
    margin-bottom: 10px;
  }
}
.jss110 {
  color: #ffffff;
  margin-left: -8px;
  margin-right: 8px;
}
.jss112 {
  width: 250px;
}
.jss113 {
  cursor: pointer;
  padding-top: 4px;
}
.jss113:hover {
  border-radius: 50%;
  background-color: #ebecf1;
}
.jss114 {
  display: flex;
  align-items: center;
  flex-direction: column;
}
</style><style data-jss="" data-meta="PrivateTabIndicator">
.jss155 {
  width: 100%;
  bottom: 0;
  height: 2px;
  position: absolute;
  transition: all 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.jss156 {
  background-color: #fff;
}
.jss157 {
  background-color: rgba(233, 30, 99, 1);
}
.jss158 {
  right: 0;
  width: 2px;
  height: 100%;
}
</style><style data-jss="" data-meta="MuiTabs">
.MuiTabs-root {
  display: flex;
  overflow: hidden;
  min-height: 48px;
  -webkit-overflow-scrolling: touch;
}
.MuiTabs-vertical {
  flex-direction: column;
}
.MuiTabs-flexContainer {
  display: flex;
}
.MuiTabs-flexContainerVertical {
  flex-direction: column;
}
.MuiTabs-centered {
  justify-content: center;
}
.MuiTabs-scroller {
  flex: 1 1 auto;
  display: inline-block;
  position: relative;
  white-space: nowrap;
}
.MuiTabs-fixed {
  width: 100%;
  overflow-x: hidden;
}
.MuiTabs-scrollable {
  overflow-x: scroll;
  scrollbar-width: none;
}
.MuiTabs-scrollable::-webkit-scrollbar {
  display: none;
}
@media (max-width:599.95px) {
  .MuiTabs-scrollButtonsDesktop {
    display: none;
  }
}
</style><style data-jss="" data-meta="MuiTab">
.MuiTab-root {
  padding: 6px 12px;
  overflow: hidden;
  position: relative;
  font-size: 0.875rem;
  max-width: 264px;
  min-width: 72px;
  box-sizing: border-box;
  min-height: 48px;
  text-align: center;
  flex-shrink: 0;
  font-family: Lato;
  font-weight: 500;
  line-height: 1.75;
  white-space: normal;
  text-transform: uppercase;
}
@media (min-width:600px) {
  .MuiTab-root {
    min-width: 160px;
  }
}
.MuiTab-labelIcon {
  min-height: 72px;
  padding-top: 9px;
}
.MuiTab-labelIcon .MuiTab-wrapper > *:first-child {
  margin-bottom: 6px;
}
.MuiTab-textColorInherit {
  color: inherit;
  opacity: 0.7;
}
.MuiTab-textColorInherit.Mui-selected {
  opacity: 1;
}
.MuiTab-textColorInherit.Mui-disabled {
  opacity: 0.5;
}
.MuiTab-textColorPrimary {
  color: rgba(255, 255, 255, 0.7);
}
.MuiTab-textColorPrimary.Mui-selected {
  color: #fff;
}
.MuiTab-textColorPrimary.Mui-disabled {
  color: rgba(255, 255, 255, 0.5);
}
.MuiTab-textColorSecondary {
  color: rgba(255, 255, 255, 0.7);
}
.MuiTab-textColorSecondary.Mui-selected {
  color: rgba(233, 30, 99, 1);
}
.MuiTab-textColorSecondary.Mui-disabled {
  color: rgba(255, 255, 255, 0.5);
}
.MuiTab-fullWidth {
  flex-grow: 1;
  max-width: none;
  flex-basis: 0;
  flex-shrink: 1;
}
.MuiTab-wrapped {
  font-size: 0.75rem;
  line-height: 1.5;
}
.MuiTab-wrapper {
  width: 100%;
  display: inline-flex;
  align-items: center;
  flex-direction: column;
  justify-content: center;
}
</style><style data-jss="" data-meta="makeStyles">
.jss153 {
  text-transform: none;
}
.jss153:hover {
  color: #fff;
  opacity: 1;
}
.jss153:hover .jss154 {
  visibility: visible;
}
.jss154 {
  visibility: hidden;
}
</style><style data-jss="" data-meta="makeStyles">
.jss173 {
  flex-grow: 1;
}
.jss174 {
  cursor: pointer;
  padding: 5px;
  border-radius: 5px;
}
.jss174:hover {
  background-color: #424242;
}
.jss175 {
  display: flex;
  margin-top: 16px;
  align-items: center;
  margin-right: 32px;
  margin-bottom: 0;
}
.jss176 {
  flex: 1;
  margin-left: 24px;
}
.jss177 {
  padding: 10px;
}
.jss178 {
  display: flex;
  align-items: center;
}
</style><style data-jss="" data-meta="makeStyles">
.jss181 {
  padding: 10px;
}
</style><style data-jss="" data-meta="makeStyles">
.jss160 {
  height: calc(100vh - 120px);
}
.jss161 {
  height: 100%;
  display: flex;
  overflow: auto;
  flex-direction: column;
}
.jss162 {
  border-color: transparent !important;
  border-width: 0px;
}
.jss163 {
  overflow: auto;
  max-height: calc(100vh - 210px);
  padding-left: 8px;
}
.jss164 {
  border-top: 1.5px solid #81c784 !important;
}
.jss165 {
  border-top: 1px solid #e57373 !important;
}
.jss166 {
  height: 5px;
  background: #24242b;
}
.jss166:hover {
  background: #616161;
  transition: background 0.1.5s;
}
.jss167 {
  height: 1px;
}
.jss168 {
  height: 100%;
}
.jss168 .MuiInputBase-root {
  height: 100%;
  align-items: flex-start;
}
.jss168 .MuiInputBase-input {
  height: 100%;
  padding: 8px;
  overflow: auto;
  box-sizing: border-box;
}
</style><style data-jss="" data-meta="MuiCircularProgress">
.MuiCircularProgress-root {
  display: inline-block;
}
.MuiCircularProgress-static {
  transition: transform 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiCircularProgress-indeterminate {
  animation: MuiCircularProgress-keyframes-circular-rotate 1.4s linear infinite;
}
.MuiCircularProgress-determinate {
  transition: transform 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiCircularProgress-colorPrimary {
  color: #fff;
}
.MuiCircularProgress-colorSecondary {
  color: rgba(233, 30, 99, 1);
}
.MuiCircularProgress-svg {
  display: block;
}
.MuiCircularProgress-circle {
  stroke: currentColor;
}
.MuiCircularProgress-circleStatic {
  transition: stroke-dashoffset 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiCircularProgress-circleIndeterminate {
  animation: MuiCircularProgress-keyframes-circular-dash 1.4s ease-in-out infinite;
  stroke-dasharray: 80px, 200px;
  stroke-dashoffset: 0px;
}
.MuiCircularProgress-circleDeterminate {
  transition: stroke-dashoffset 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
@-moz-keyframes MuiCircularProgress-keyframes-circular-rotate {
  0% {
    transform-origin: 50% 50%;
  }
  100% {
    transform: rotate(360deg);
  }
}
@-moz-keyframes MuiCircularProgress-keyframes-circular-dash {
  0% {
    stroke-dasharray: 1px, 200px;
    stroke-dashoffset: 0px;
  }
  50% {
    stroke-dasharray: 100px, 200px;
    stroke-dashoffset: -15px;
  }
  100% {
    stroke-dasharray: 100px, 200px;
    stroke-dashoffset: -125px;
  }
}
.MuiCircularProgress-circleDisableShrink {
  animation: none;
}
</style><style data-jss="" data-meta="makeStyles">
.jss179 {
  color: #fff;
  z-index: 1101;
}
.jss180 {
  border: 1px solid #dadce0;
}
</style><style data-jss="" data-meta="makeStyles">
.jss119 {
  line-height: 1.5;
  padding-top: 3px;
  padding-bottom: 3px;
}
.jss120 {
  width: 100%;
}
.jss121 {
  text-align: right;
}
.jss122 {
  float: right;
  padding-top: 2px;
  padding-right: 2px;
}
.jss123 {
  color: #fff;
  text-decoration: none;
}
.jss124 {
  display: flex;
  align-items: flex-end;
  justify-content: space-between;
}
.jss125 {
  padding: 6px;
}
.jss126 {
  margin: 0;
  padding: 0px 0px 0px 42px;
  background: white;
}
.jss127 {
  display: flex;
  align-items: center;
  flex-direction: column;
}
.jss128 {
  background: #24242b;
}
.jss129 {
  padding-top: 4px;
}
@media (min-width:600px) {
  .jss130 {
    border-left: 5px solid #24242b;
  }
}
.jss131 {
  padding-bottom: 8px;
}
.jss132 {
  width: 5px;
  background: #24242b;
}
.jss132:hover {
  background: #616161;
  transition: background 0.1.5s;
}
.jss133 {
  padding: 8px;
  overflow: auto;
  max-height: calc(100vh - 110px);
}
.jss134 {
  border: 1px solid #ccc;
  display: inline;
  padding: 3.9px 5px;
  background: linear-gradient(to right, #616161 50%, transparent 50%);
  margin-right: 10px;
  border-radius: 4px;
  padding-bottom: 8px;
}
.jss135 {
  background: linear-gradient(to left, #616161 50%, transparent 50%);
}
.jss136 {
  color: rgba(255, 255, 255, 0.7);
  border-radius: 0;
}
</style><style data-jss="" data-meta="makeStyles">
.jss117 {
  color: #fff;
  z-index: 1101;
}
</style><style data-jss="" data-meta="MuiContainer">
.MuiContainer-root {
  width: 100%;
  display: block;
  box-sizing: border-box;
  margin-left: auto;
  margin-right: auto;
  padding-left: 16px;
  padding-right: 16px;
}
@media (min-width:600px) {
  .MuiContainer-root {
    padding-left: 24px;
    padding-right: 24px;
  }
}
.MuiContainer-disableGutters {
  padding-left: 0;
  padding-right: 0;
}
@media (min-width:600px) {
  .MuiContainer-fixed {
    max-width: 600px;
  }
}
@media (min-width:960px) {
  .MuiContainer-fixed {
    max-width: 960px;
  }
}
@media (min-width:1280px) {
  .MuiContainer-fixed {
    max-width: 1280px;
  }
}
@media (min-width:1920px) {
  .MuiContainer-fixed {
    max-width: 1920px;
  }
}
@media (min-width:0px) {
  .MuiContainer-maxWidthXs {
    max-width: 444px;
  }
}
@media (min-width:600px) {
  .MuiContainer-maxWidthSm {
    max-width: 600px;
  }
}
@media (min-width:960px) {
  .MuiContainer-maxWidthMd {
    max-width: 960px;
  }
}
@media (min-width:1280px) {
  .MuiContainer-maxWidthLg {
    max-width: 1280px;
  }
}
@media (min-width:1920px) {
  .MuiContainer-maxWidthXl {
    max-width: 1920px;
  }
}
</style><style data-jss="" data-meta="makeStyles">

</style><style data-jss="" data-meta="makeStyles">
.jss185 {
  color: white;
  background: #000000;
  margin-top: 60px;
  padding-top: 60px;
  padding-bottom: 20px;
}
.jss186 {
  text-decoration: none;
}
.jss187 {
  color: #adb5bd;
  text-align: center;
}
.jss188 {
  color: #FFF;
}
</style><style data-jss="" data-meta="makeStyles">
.jss95 {
  flex-grow: 1;
}
@media (max-width:959.95px) {
  .jss96 {
    padding-left: 4px;
    padding-right: 4px;
  }
}
.jss97 {
  margin-left: 8px;
  margin-right: 8px;
}
.jss98 {
  box-shadow: 0 2px 10px 0 rgba(23,70,161,.11);
}
.jss99 {
  top: 300px;
  left: 100%;
  height: 25px;
  padding: 1%;
  position: fixed;
  transform: rotate(90deg) translateX(-50%);
  background: #24242b;
  transform-origin: 0% 0%;
}
.jss99:hover {
  background: #000;
}
</style><style data-jss="" data-meta="makeStyles">
.jss183 {
  position: relative;
  flex-grow: 1;
}
.jss183:hover .jss184 {
  visibility: visible;
}
.jss184 {
  top: 6px;
  color: #bdbdbd;
  right: 4px;
  cursor: pointer;
  position: absolute;
  visibility: hidden;
}
.jss184:hover {
  color: #9e9e9e;
}
</style><script charset="utf-8" src="03-ListaLinear_arquivos/8a28b14e.9a4ce766b564310131cd.js"></script><script charset="utf-8" src="03-ListaLinear_arquivos/73668763bff2d5c66346874fcddb8a684d338f3e.af3c20c5c63dfd6f7de4.js"></script><script charset="utf-8" src="03-ListaLinear_arquivos/1c377de9871869784a9a644e97cd16155818224d.1abe40fee5eab5e37a91.js"></script><script charset="utf-8" src="03-ListaLinear_arquivos/f54b42984bfe4d114461fcea2710af414ac1fe74.cc8aedf2c1082c746078.js"></script><script charset="utf-8" src="03-ListaLinear_arquivos/124.71846702237ce339662b.js"></script><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/0b7b90cd.c272caf49c840cd221e5.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/e17e7b540dcb4382df0cec45a37d1a52b10f3ced.75f54defc4cda229b4e7.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/7fa69bf31fd19c4bb4674b4f7823d62d0c12e6ad.7cfd27c91c0c7dd84690.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/3d2c8c0d2a3170fb24e91674988c3b2d3a5f7c90.c48cc796d33266af928f.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/7b7d07bb151ce202b5cc96bf4b8b52c019b63ab0.ba478c7ff64bb70a8201.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/5119778374e01b2b42f94fc5abe92aa61ec56e16.b30f37049e3fb0fe63ba.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/7a735be72c94803398ad6c25dab608ef6cd4e1b6.d2104993924f9782f7b3.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/48c174e367c65cf61114cf885bcd50923ff1e47b.272bc54c806848ec0972.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/d1e226fd0deed97f1ee3dd7aa41b133ec8083cfa.06daacc6301aa9560930.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/1693648f930a02f3b517f97baa1fe31feee368fc.a6266fdee247a62a13be.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/d1c5dcc0bb63f124aea5d611e4e9d342e12907db.af9ed81bfdfc01719f11.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/ae788f4a0010799033ed72d7dcfbbb203bca7b9c.f5580b890050785703c1.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/89947cf2a231aeeed7e0129dc3e15788d6b33cb6.05640cd3fb657be15c9d.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/39df9c46cd8753827408a59ba83f8655c8f07b16.77688f93f703dbc527fb.js"><link as="script" rel="prefetch" href="03-ListaLinear_arquivos/index-26ba17de142c1e3bf919.js"><script async="" src="03-ListaLinear_arquivos/client"></script><style id="googleidentityservice_button_styles">.qJTHM{-moz-user-select:none;color:#202124;direction:ltr;font-family:"Roboto-Regular",arial,sans-serif;font-weight:400;margin:0;overflow:hidden}.ynRLnc{left:-9999px;position:absolute;top:-9999px}.L6cTce{display:none}.bltWBb{word-break:break-all}.hSRGPd{color:#1a73e8;cursor:pointer;font-weight:500;text-decoration:none}.Bz112c-W3lGp{height:16px;width:16px}.Bz112c-E3DyYd{height:20px;width:20px}.Bz112c-r9oPif{height:24px;width:24px}.Bz112c-uaxL4e{-moz-border-radius:10px;border-radius:10px}.LgbsSe-Bz112c{display:block}.S9gUrf-YoZ4jf,.S9gUrf-YoZ4jf *{border:none;margin:0;padding:0}.fFW7wc-ibnC6b>.aZ2wEe>div{border-color:#4285f4}.P1ekSe-ZMv3u>div:nth-child(1){background-color:#1a73e8!important}.P1ekSe-ZMv3u>div:nth-child(2),.P1ekSe-ZMv3u>div:nth-child(3){background-image:linear-gradient(to right,rgba(255,255,255,.7),rgba(255,255,255,.7)),linear-gradient(to right,#1a73e8,#1a73e8)!important}.haAclf{display:inline-block}.nsm7Bb-HzV7m-LgbsSe{border-radius:4px;box-sizing:border-box;transition:background-color .218s,border-color .218s;-moz-user-select:none;background-color:#fff;background-image:none;border:1px solid #dadce0;color:#3c4043;cursor:pointer;font-family:"Google Sans",arial,sans-serif;font-size:14px;height:40px;letter-spacing:0.25px;outline:none;overflow:hidden;padding:0 12px;position:relative;text-align:center;vertical-align:middle;white-space:nowrap;width:auto}@media screen and (-ms-high-contrast:active){.nsm7Bb-HzV7m-LgbsSe{border:2px solid windowText;color:windowText}}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe{font-size:14px;height:32px;letter-spacing:0.25px;padding:0 10px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe{font-size:11px;height:20px;letter-spacing:0.3px;padding:0 8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe{padding:0;width:40px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe{width:32px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe{width:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK{border-radius:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.pSzOP-SxQuSe{border-radius:16px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.purZT-SxQuSe{border-radius:10px}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc{border:none;color:#fff}.nsm7Bb-HzV7m-LgbsSe.MFS4be-v3pZbf-Ia7Qfc{background-color:#1a73e8}.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{background-color:#202124;color:#e8eaed}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:18px;margin-right:8px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:14px;min-width:14px;width:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:10px;min-width:10px;width:10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin-left:8px;margin-right:-4px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:10px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:4px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-top-left-radius:3px;border-bottom-left-radius:3px;display:-webkit-box;display:-moz-box;display:-ms-flexbox;display:-webkit-flex;display:flex;justify-content:center;align-items:center;background-color:#fff;height:36px;margin-left:-10px;margin-right:12px;min-width:36px;width:36px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c,.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:28px;margin-left:-8px;margin-right:10px;min-width:28px;width:28px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:16px;margin-left:-6px;margin-right:8px;min-width:16px;width:16px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:3px;margin-left:2px;margin-right:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:8px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-bN97Pc-sM5MNb{display:-webkit-box;display:-moz-box;display:-ms-flexbox;display:-webkit-flex;display:flex;align-items:center;flex-direction:row;justify-content:space-between;flex-wrap:nowrap;height:100%;position:relative;width:100%}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX{justify-content:center}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{flex-grow:1;font-family:"Google Sans",arial,sans-serif;font-weight:500;overflow:hidden;text-overflow:ellipsis;vertical-align:top}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-weight:300}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX .nsm7Bb-HzV7m-LgbsSe-BPrWId{flex-grow:0}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-MJoBVe{transition:background-color .218s;bottom:0;left:0;position:absolute;right:0;top:0}.nsm7Bb-HzV7m-LgbsSe:hover,.nsm7Bb-HzV7m-LgbsSe:focus{box-shadow:none;border-color:#d2e3fc;outline:none}.nsm7Bb-HzV7m-LgbsSe:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.04)}.nsm7Bb-HzV7m-LgbsSe:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,.1)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.24)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,.32)}.nsm7Bb-HzV7m-LgbsSe .n1UuX-DkfjY{border-radius:50%;display:-webkit-box;display:-moz-box;display:-ms-flexbox;display:-webkit-flex;display:flex;height:20px;margin-left:-4px;margin-right:8px;min-width:20px;width:20px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-family:"Roboto";font-size:12px;text-align:left}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .ssJRIf,.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .fmcmS{overflow:hidden;text-overflow:ellipsis}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{display:-webkit-box;display:-moz-box;display:-ms-flexbox;display:-webkit-flex;display:flex;align-items:center;color:#5f6368;fill:#5f6368;font-size:11px;font-weight:400}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#e8eaed;fill:#e8eaed}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .Bz112c{height:18px;margin:-3px -3px -3px 2px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-top-left-radius:0;border-bottom-left-radius:0;border-top-right-radius:3px;border-bottom-right-radius:3px;margin-left:12px;margin-right:-10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{border-radius:18px}.L5Fo6c-sM5MNb{border:0;display:block;left:0;position:relative;top:0}.L5Fo6c-bF1uUb{-moz-border-radius:4px;border-radius:4px;bottom:0;cursor:pointer;left:0;position:absolute;right:0;top:0}.L5Fo6c-bF1uUb:focus{border:none;outline:none}sentinel{}</style><link id="googleidentityservice" type="text/css" media="all" rel="stylesheet" href="03-ListaLinear_arquivos/style.css"></head><body><div id="__next"><header class="MuiPaper-root MuiAppBar-root MuiAppBar-positionStatic MuiAppBar-colorInherit jss100 MuiPaper-elevation0"><div class="MuiToolbar-root MuiToolbar-dense jss111 MuiToolbar-gutters"><button class="MuiButtonBase-root MuiIconButton-root jss110 MuiIconButton-colorInherit MuiIconButton-edgeStart" tabindex="0" type="button" aria-label="Menu"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 18h18v-2H3v2zm0-5h18v-2H3v2zm0-7v2h18V6H3z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><a class="jss105" href="https://onecompiler.com/"> <div class="MuiBox-root jss115 jss106"></div> </a><span class="jss104"></span><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="search"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-colorPrimary MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M15.5 14h-.79l-.28-.27C15.41 12.59 16 11.11 16 9.5 16 5.91 13.09 3 9.5 3S3 5.91 3 9.5 5.91 16 9.5 16c1.61 0 3.09-.59 4.23-1.57l.27.28v.79l5 4.99L20.49 19l-4.99-5zm-6 0C7.01 14 5 11.99 5 9.5S7.01 5 9.5 5 14 7.01 14 9.5 11.99 14 9.5 14z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="dark mode" title="Toggle DarkMode"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-colorPrimary MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M20 8.69V4h-4.69L12 .69 8.69 4H4v4.69L.69 12 4 15.31V20h4.69L12 23.31 15.31 20H20v-4.69L23.31 12 20 8.69zM12 18c-.89 0-1.74-.2-2.5-.55C11.56 16.5 13 14.42 13 12s-1.44-4.5-3.5-5.45C10.26 6.2 11.11 6 12 6c3.31 0 6 2.69 6 6s-2.69 6-6 6z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><a class="textDecorationNone" href="https://onecompiler.com/html"> <button class="MuiButtonBase-root MuiButton-root MuiButton-text MuiButton-textPrimary" tabindex="0" type="button"><span class="MuiButton-label">Editor</span><span class="MuiTouchRipple-root"></span></button> </a><a class="textDecorationNone" href="https://onecompiler.com/challenges"> <button class="MuiButtonBase-root MuiButton-root MuiButton-text MuiButton-textPrimary" tabindex="0" type="button"><span class="MuiButton-label">Challenges</span><span class="MuiTouchRipple-root"></span></button> </a><a class="textDecorationNone" href="https://onecompiler.com/orgs"> <button class="MuiButtonBase-root MuiButton-root MuiButton-text MuiButton-textPrimary" tabindex="0" type="button"><span class="MuiButton-label">Orgs</span><span class="MuiTouchRipple-root"></span></button> </a><button class="MuiButtonBase-root MuiButton-root MuiButton-text MuiButton-textPrimary" tabindex="0" type="button" aria-haspopup="true"><span class="MuiButton-label">More</span><span class="MuiTouchRipple-root"></span></button><span class="jss108"></span><button class="MuiButtonBase-root MuiButton-root MuiButton-text" tabindex="0" type="button"><span class="MuiButton-label">Login</span><span class="MuiTouchRipple-root"></span></button></div></header><hr class="MuiDivider-root"><div class="MuiGrid-root MuiGrid-container MuiGrid-justify-xs-center"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-md-12 MuiGrid-grid-lg-12"><div><div class="MuiBackdrop-root jss117" aria-hidden="true" style="opacity: 0; visibility: hidden;"><div class="MuiCircularProgress-root MuiCircularProgress-indeterminate" style="width: 40px; height: 40px;" role="progressbar"><svg class="MuiCircularProgress-svg" viewBox="22 22 44 44"><circle class="MuiCircularProgress-circle MuiCircularProgress-circleIndeterminate" cx="44" cy="44" r="20.2" fill="none" stroke-width="3.6"></circle></svg></div></div></div><div class="jss98"><div class="MuiPaper-root MuiPaper-outlined MuiPaper-rounded"><div class="jss139"><div class="MuiGrid-root jss128 MuiGrid-container MuiGrid-align-items-xs-center MuiGrid-justify-xs-space-between"><div class="MuiGrid-root MuiGrid-item"> <div class="MuiBox-root jss152" style="display:flex;flex-direction:row"><div class="MuiTabs-root"><div style="width:99px;height:99px;position:absolute;top:-9999px;overflow:scroll" class="MuiTabs-scrollable"></div><div class="MuiTabs-scroller MuiTabs-scrollable" style="margin-bottom: 0px;"><div class="MuiTabs-flexContainer" role="tablist"><div class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary jss153 Mui-selected" tabindex="0" role="tab" aria-disabled="false" aria-selected="true"><span class="MuiTab-wrapper"><span>ManipulaçãoVetores.c<span class="jss154"><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Rename"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04c.39-.39.39-1.02 0-1.41l-2.34-2.34a.9959.9959 0 00-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Delete"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 6.41L17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></span></span></span><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary jss153" tabindex="-1" role="tab" aria-disabled="false" aria-selected="false"><span class="MuiTab-wrapper"><span>TrabalhandoMatrizes.c<span class="jss154"><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04c.39-.39.39-1.02 0-1.41l-2.34-2.34a.9959.9959 0 00-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Delete"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 6.41L17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></span></span></span><span class="MuiTouchRipple-root"></span></div></div><span class="jss155 jss156 MuiTabs-indicator" style="left: 0px; width: 217.75px;"></span></div></div><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="more-options-add-file" aria-haspopup="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 13h-6v6h-2v-6H5v-2h6V5h2v6h6v2z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></div> </div><div class="MuiGrid-root MuiGrid-item"> <div class="jss124"><h1 class="MuiTypography-root jss118 MuiTypography-body1 MuiTypography-colorPrimary" itemprop="headline">42qmt9866&nbsp;<button class="MuiButtonBase-root MuiIconButton-root jss125 MuiIconButton-colorPrimary" tabindex="0" type="button" aria-label="Edit"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04c.39-.39.39-1.02 0-1.41l-2.34-2.34a.9959.9959 0 00-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></h1></div> </div><div class="MuiGrid-root MuiGrid-item"> <!-- --><button class="MuiButtonBase-root MuiButton-root MuiButton-text MuiButton-textPrimary MuiButton-textSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" title="Create a new C program"><span class="MuiButton-label">New</span><span class="MuiTouchRipple-root"></span></button>&nbsp;&nbsp;&nbsp;<button class="MuiButtonBase-root MuiButton-root MuiButton-contained mr10 MuiButton-containedPrimary MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button"><span class="MuiButton-label">c <svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M7.41 8.59L12 13.17l4.59-4.58L18 10l-6 6-6-6 1.41-1.41z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiButton-root MuiButton-contained mr10 MuiButton-containedSecondary MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" title="ctrl + enter"><span class="MuiButton-label">Run <svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M8 5v14l11-7z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="more-options" aria-haspopup="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M12 8c1.1 0 2-.9 2-2s-.9-2-2-2-2 .9-2 2 .9 2 2 2zm0 2c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm0 6c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="delete"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M7 14H5v5h5v-2H7v-3zm-2-4h2V7h3V5H5v5zm12 7h-3v2h5v-5h-2v3zM14 5v2h3v3h2V5h-5z"></path></svg></span><span class="MuiTouchRipple-root"></span></button> </div></div></div><div class="jss141"><div class="MuiGrid-root jss128 jss129  MuiGrid-container MuiGrid-direction-xs-column MuiGrid-align-items-xs-center MuiGrid-justify-xs-center"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12"> <button class="MuiButtonBase-root MuiButton-root MuiButton-text MuiButton-textPrimary MuiButton-textSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" title="Create a new C program"><span class="MuiButton-label">New</span><span class="MuiTouchRipple-root"></span></button>&nbsp;&nbsp;&nbsp;<button class="MuiButtonBase-root MuiButton-root MuiButton-contained mr10 MuiButton-containedPrimary MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" title="Click to change the language"><span class="MuiButton-label">c <svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M7.41 8.59L12 13.17l4.59-4.58L18 10l-6 6-6-6 1.41-1.41z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiButton-root MuiButton-contained mr10 MuiButton-containedSecondary MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" title="ctrl + enter"><span class="MuiButton-label">Run <svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M8 5v14l11-7z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="more-options" aria-haspopup="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M12 8c1.1 0 2-.9 2-2s-.9-2-2-2-2 .9-2 2 .9 2 2 2zm0 2c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm0 6c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="delete" title="Full Screen"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M7 14H5v5h5v-2H7v-3zm-2-4h2V7h3V5H5v5zm12 7h-3v2h5v-5h-2v3zM14 5v2h3v3h2V5h-5z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12"> <div class="MuiBox-root jss159" style="display:flex;flex-direction:row"><div class="MuiTabs-root"><div style="width:99px;height:99px;position:absolute;top:-9999px;overflow:scroll" class="MuiTabs-scrollable"></div><div class="MuiTabs-scroller MuiTabs-scrollable" style="margin-bottom: 0px;"><div class="MuiTabs-flexContainer" role="tablist"><div class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary jss153 Mui-selected" tabindex="0" role="tab" aria-disabled="false" aria-selected="true"><span class="MuiTab-wrapper"><span>ManipulaçãoVetores.c<span class="jss154"><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Rename"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04c.39-.39.39-1.02 0-1.41l-2.34-2.34a.9959.9959 0 00-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Delete"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 6.41L17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></span></span></span><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiTab-root MuiTab-textColorPrimary jss153" tabindex="-1" role="tab" aria-disabled="false" aria-selected="false"><span class="MuiTab-wrapper"><span>TrabalhandoMatrizes.c<span class="jss154"><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Rename"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 17.25V21h3.75L17.81 9.94l-3.75-3.75L3 17.25zM20.71 7.04c.39-.39.39-1.02 0-1.41l-2.34-2.34a.9959.9959 0 00-1.41 0l-1.83 1.83 3.75 3.75 1.83-1.83z"></path></svg></span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiIconButton-root MuiIconButton-sizeSmall" tabindex="0" type="button" style="margin-left:3px" title="Delete"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 6.41L17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></span></span></span><span class="MuiTouchRipple-root"></span></div></div><span class="jss155 jss156 MuiTabs-indicator" style="left: 0px; width: 0px;"></span></div></div><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="more-options-add-file" aria-haspopup="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M19 13h-6v6h-2v-6H5v-2h6V5h2v6h6v2z"></path></svg></span><span class="MuiTouchRipple-root"></span></button></div> </div></div></div>  <div class="" style="display: flex; flex-direction: row; height: 100%; overflow: hidden; width: 100%;" data-panel-group="" data-panel-group-direction="horizontal" data-panel-group-id="0"><div class="" style="flex: 60 1 0px; overflow: hidden;" data-panel="" data-panel-group-id="0" data-panel-id="1" data-panel-size="60.0"><div id="oc_ace" style="width: 100%; height: calc(-100px + 100vh); font-size: 14px;" class=" ace_editor ace_hidpi ace-dracula ace_dark" draggable="false"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="none" spellcheck="false" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; transform: translate(0px);">    buscar(30);

</textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 47px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1000000px; transform: translate(0px); width: 47px;"><div class="ace_gutter-cell " style="height: 15px; top: 0px;">1<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 15px;">2<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 30px;">3<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 45px;">4<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 60px;">5<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 75px;">6<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 90px;">7<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 105px;">8<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 120px;">9<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 135px;">10<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 150px;">11<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 165px;">12<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 180px;">13<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 195px;">14<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 210px;">15<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 225px;">16<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 240px;">17<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 255px;">18<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 270px;">19<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: inline-block;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 285px;">20<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 300px;">21<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 315px;">22<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 330px;">23<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 345px;">24<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 360px;">25<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 375px;">26<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 390px;">27<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 405px;">28<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 420px;">29<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 435px;">30<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 450px;">31<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 465px;">32<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 480px;">33<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 495px;">34<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 510px;">35<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 525px;">36<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 540px;">37<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 555px;">38<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 570px;">39<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 585px;">40<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 600px;">41<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 615px;">42<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 630px;">43<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 645px;">44<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 660px;">45<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 675px;">46<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 690px;">47<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 705px;">48<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 720px;">49<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 735px;">50<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 750px;">51<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 765px;">52<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 780px;">53<span style="display: inline-block; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 795px;">54<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 810px;">55<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 825px;">56<span style="display: none; height: 15px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 15px; top: 840px;">57<span class="ace_fold-widget ace_start ace_open" style="height: 15px; display: none;"></span></div></div></div><div class="ace_scroller" style="line-height: 15px; left: 47px; right: 0px; bottom: 0px;"><div class="ace_content" style="transform: translate(0px); width: 915px; height: 868px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 564px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_text-layer" style="height: 1000000px; margin: 0px 4px; transform: translate(0px);"><div style="height: 15px; top: 0px;" class="ace_line"><span class="ace_comment">/*</span></div><div style="height: 15px; top: 15px;" class="ace_line"><span class="ace_comment">O código abaixo apresenta a implementação de uma lista linear.</span></div><div style="height: 15px; top: 30px;" class="ace_line"></div><div style="height: 15px; top: 45px;" class="ace_line"><span class="ace_comment">Para esse exemplo, faça:</span></div><div style="height: 15px; top: 60px;" class="ace_line"><span class="ace_comment">- Implemente funções adicionais como buscar(int elemento) para encontrar a posição de um elemento na lista.</span></div><div style="height: 15px; top: 75px;" class="ace_line"><span class="ace_comment">ou </span></div><div style="height: 15px; top: 90px;" class="ace_line"><span class="ace_comment">- Adicione métodos para inverter a lista, encontrar o máximo/mínimo, ou ordenar a lista.</span></div><div style="height: 15px; top: 105px;" class="ace_line"><span class="ace_comment">*/</span></div><div style="height: 15px; top: 120px;" class="ace_line"></div><div style="height: 15px; top: 135px;" class="ace_line"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;stdio.h&gt;</span></div><div style="height: 15px; top: 150px;" class="ace_line"><span class="ace_keyword">#define</span><span class="ace_constant ace_other"> MAX_SIZE 10</span></div><div style="height: 15px; top: 165px;" class="ace_line"></div><div style="height: 15px; top: 180px;" class="ace_line"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">MAX_SIZE</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 195px;" class="ace_line"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">tamanho</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 210px;" class="ace_line"></div><div style="height: 15px; top: 225px;" class="ace_line"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">inserir</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">elemento</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 240px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">if</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">tamanho</span> <span class="ace_keyword ace_operator">&lt;</span> <span class="ace_identifier">MAX_SIZE</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 255px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">tamanho</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">elemento</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 270px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span> <span class="ace_keyword ace_control">else</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 285px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">Lista cheia!</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 300px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 315px;" class="ace_line"><span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 330px;" class="ace_line"></div><div style="height: 15px; top: 345px;" class="ace_line"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">remover</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">index</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 360px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">if</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">index</span> <span class="ace_keyword ace_operator">&lt;</span> <span class="ace_constant ace_numeric">0</span> <span class="ace_keyword ace_operator">||</span> <span class="ace_identifier">index</span> <span class="ace_keyword ace_operator">&gt;=</span> <span class="ace_identifier">tamanho</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 375px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">Índice inválido!</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 390px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span> <span class="ace_keyword ace_control">else</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 405px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">for</span> <span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">index</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">&lt;</span> <span class="ace_identifier">tamanho</span> <span class="ace_keyword ace_operator">-</span> <span class="ace_constant ace_numeric">1</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 420px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">+</span> <span class="ace_constant ace_numeric">1</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 435px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 450px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_identifier">tamanho</span><span class="ace_keyword ace_operator">--</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 465px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 480px;" class="ace_line"><span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 495px;" class="ace_line"></div><div style="height: 15px; top: 510px;" class="ace_line"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">imprimir</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 525px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">Elementos da lista:</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 540px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">for</span> <span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">&lt;</span> <span class="ace_identifier">tamanho</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 555px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">%d</span><span class="ace_string"> </span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 570px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 585px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_constant ace_language ace_escape">\n</span><span class="ace_string ace_end">"</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 600px;" class="ace_line"><span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 615px;" class="ace_line"></div><div style="height: 15px; top: 630px;" class="ace_line"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">buscar</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">elemento</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 645px;" class="ace_line">  <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_identifier">i</span> <span class="ace_keyword ace_operator">&lt;</span> <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">tamanho</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 660px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span> <span class="ace_keyword ace_operator">==</span> <span class="ace_identifier">elemento</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 675px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">Elemento encontrado:</span><span class="ace_constant ace_language ace_escape">\n%d\n</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">lista</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 690px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string ace_start">"</span><span class="ace_string">Posição:</span><span class="ace_constant ace_language ace_escape">\n%d\n</span><span class="ace_string ace_end">"</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">i</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 705px;" class="ace_line"><span class="ace_indent-guide">  </span><span class="ace_indent-guide">  </span>  <span class="ace_keyword ace_control">break</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 720px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 735px;" class="ace_line">  <span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 750px;" class="ace_line"><span class="ace_paren ace_rparen">}</span></div><div style="height: 15px; top: 765px;" class="ace_line"></div><div style="height: 15px; top: 780px;" class="ace_line"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div style="height: 15px; top: 795px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_identifier">inserir</span><span class="ace_paren ace_lparen">(</span><span class="ace_constant ace_numeric">10</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 810px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_identifier">inserir</span><span class="ace_paren ace_lparen">(</span><span class="ace_constant ace_numeric">20</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 825px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_identifier">inserir</span><span class="ace_paren ace_lparen">(</span><span class="ace_constant ace_numeric">30</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div style="height: 15px; top: 840px;" class="ace_line"><span class="ace_indent-guide">  </span>  <span class="ace_identifier">imprimir</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors" style=""><div class="ace_cursor" style="display: block; transform: translate(109px, 885px); width: 7px; height: 15px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 975px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 47px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 962px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-size-adjust: inherit; font-kerning: inherit; font-optical-sizing: inherit; font-language-override: inherit; font-feature-settings: inherit; font-variation-settings: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></div><div class="jss132" role="separator" style="touch-action: none; user-select: none;" tabindex="0" data-panel-group-direction="horizontal" data-panel-group-id="0" data-resize-handle="" data-resize-handle-state="inactive" data-panel-resize-handle-enabled="true" data-panel-resize-handle-id="2" aria-controls="1" aria-valuemax="100" aria-valuemin="0" aria-valuenow="60"></div><div class="" style="flex: 40 1 0px; overflow: hidden;" data-panel="" data-panel-group-id="0" data-panel-id="3" data-panel-size="40.0"><div class="jss160"><div class="" style="display: flex; flex-direction: column; height: 100%; overflow: hidden; width: 100%;" data-panel-group="" data-panel-group-direction="vertical" data-panel-group-id="8"><div class="" style="flex: 11 1 0px; overflow: hidden;" data-panel="" data-panel-group-id="8" data-panel-id="9" data-panel-size="11.0"><div class="jss161"><div class="MuiFormControl-root MuiTextField-root jss168 MuiFormControl-marginNormal MuiFormControl-fullWidth"><label class="MuiFormLabel-root MuiInputLabel-root MuiInputLabel-formControl MuiInputLabel-animated MuiInputLabel-shrink MuiInputLabel-outlined MuiFormLabel-filled" data-shrink="true">STDIN</label><div class="MuiInputBase-root MuiOutlinedInput-root MuiInputBase-fullWidth MuiInputBase-formControl MuiInputBase-multiline MuiOutlinedInput-multiline"><textarea rows="1" aria-invalid="false" placeholder="Input for the program ( Optional )" class="MuiInputBase-input MuiOutlinedInput-input MuiInputBase-inputMultiline MuiOutlinedInput-inputMultiline" style="height: 54px; overflow: hidden;">
</textarea><textarea aria-hidden="true" class="MuiInputBase-input MuiOutlinedInput-input MuiInputBase-inputMultiline MuiOutlinedInput-inputMultiline" readonly="readonly" tabindex="-1" style="visibility: hidden; position: absolute; overflow: hidden; height: 0px; top: 0px; left: 0px; transform: translateZ(0px); width: 613.2px;">x</textarea><fieldset aria-hidden="true" class="jss169 MuiOutlinedInput-notchedOutline jss162"><legend class="jss171 jss172"><span>STDIN</span></legend></fieldset></div></div></div></div><div class="jss166 jss167 " role="separator" style="touch-action: none; user-select: none;" tabindex="0" data-panel-group-direction="vertical" data-panel-group-id="8" data-resize-handle="" data-resize-handle-state="inactive" data-panel-resize-handle-enabled="true" data-panel-resize-handle-id="10" aria-controls="9" aria-valuemax="100" aria-valuemin="0" aria-valuenow="11"></div><div class="" style="flex: 89 1 0px; overflow: hidden;" data-panel="" data-panel-group-id="8" data-panel-id="11" data-panel-size="89.0"><div class="jss163
                                    jss164  
                                      "><p>Output:</p><div><pre>Elementos da lista:
10 20 30 
Elemento encontrado:
10
Posição:
0
Elemento encontrado:
30
Posição:
1
Elementos da lista:
10 30 
</pre></div></div></div></div></div></div></div><div class="MuiGrid-root MuiGrid-container"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-8"> <!-- --> </div><div class="MuiGrid-root jss130 MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-4"> <!-- --> </div></div><div><div class="jss122"><span class="MuiTypography-root MuiTypography-caption MuiTypography-gutterBottom"><span itemprop="datePublished" datetime="2024-08-29">created 18 hours ago<!-- --> </span></span></div></div></div></div></div></div><div class="MuiContainer-root jss182 MuiContainer-maxWidthXl"><br><div class="md-view oc-theme-dark "><h1>C Language online compiler</h1><p>Write,
 Run &amp; Share C Language code online using OneCompiler's C online 
compiler for free. It's one of the robust, feature-rich online compilers
 for C language, running the latest C version which is C18. Getting 
started with the OneCompiler's C editor is really simple and pretty 
fast. The editor shows sample boilerplate code when you choose language 
as 'C' and start coding!</p><h1>Read inputs from stdin</h1><p>OneCompiler's
 C online editor supports stdin and users can give inputs to programs 
using the STDIN textbox under the I/O tab. Following is a sample C 
program which takes name as input and print your name with hello.</p><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-meta">#<span class="hljs-meta-keyword">include</span> <span class="hljs-meta-string">&lt;stdio.h&gt;</span></span>
<span class="hljs-function"><span class="hljs-keyword">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span>
</span>{
    <span class="hljs-keyword">char</span> name[<span class="hljs-number">50</span>];
    <span class="hljs-built_in">printf</span>(<span class="hljs-string">"Enter name:"</span>);
    <span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%s"</span>, name);
    <span class="hljs-built_in">printf</span>(<span class="hljs-string">"Hello %s \n"</span> , name );
    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
    
}</code></pre><h1>About C</h1><p>C language is one of the most popular 
general-purpose programming language developed by Dennis Ritchie at Bell
 laboratories for UNIX operating system. The initial release of C 
Language was in the year 1972. Most of the desktop operating systems are
 written in C Language.</p><h3>Key features:</h3><ul><li>Structured Programming</li><li>Popular system programming language</li><li>UNIX, MySQL and Oracle are completely written in C.</li><li>Supports variety of platforms</li><li>Efficient and also handle low-level activities.</li><li>As fast as assembly language and hence used as system development language.</li></ul><h1>Syntax help</h1><h2>Loops</h2><h3>1. If-Else:</h3><p>When ever you want to perform a set of operations based on a condition <code>if-else</code> is used.</p><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-keyword">if</span>(conditional-expression) {
   <span class="hljs-comment">// code</span>
} <span class="hljs-keyword">else</span> {
   <span class="hljs-comment">// code</span>
}</code></pre><p>You can also use if-else for nested Ifs and if-else-if ladder when multiple conditions are to be performed on a single variable.</p><h3>2. Switch:</h3><p>Switch is an alternative to if-else-if ladder.</p><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-keyword">switch</span>(conditional-expression) {    
<span class="hljs-keyword">case</span> value1:    
 <span class="hljs-comment">// code    </span>
 <span class="hljs-keyword">break</span>;  <span class="hljs-comment">// optional  </span>
<span class="hljs-keyword">case</span> value2:    
 <span class="hljs-comment">// code    </span>
 <span class="hljs-keyword">break</span>;  <span class="hljs-comment">// optional  </span>
...    
    
<span class="hljs-keyword">default</span>:     
 <span class="hljs-comment">// code to be executed when all the above cases are not matched;    </span>
} </code></pre><h3>3. For:</h3><p>For loop is used to iterate a set of statements based on a condition.</p><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-keyword">for</span>(Initialization; Condition; Increment/decrement){  
  <span class="hljs-comment">// code  </span>
} </code></pre><h3>4. While:</h3><p>While is also used to iterate a set 
of statements based on a condition. Usually while is preferred when 
number of iterations are not known in advance.</p><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-keyword">while</span>(condition) {  
 <span class="hljs-comment">// code </span>
}  </code></pre><h3>5. Do-While:</h3><p>Do-while is also used to iterate
 a set of statements based on a condition. It is mostly used when you 
need to execute the statements atleast once.</p><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-keyword">do</span> {
  <span class="hljs-comment">// code </span>
} <span class="hljs-keyword">while</span> (condition); </code></pre><h2>Arrays</h2><p>Array
 is a collection of similar data which is stored in continuous memory 
addresses. Array values can be fetched using index.  Index starts from 0
 to size-1.</p><h3>Syntax</h3><h3>One dimentional Array:</h3><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c">data-type <span class="hljs-built_in">array</span>-name[size];</code></pre><h3>Two dimensional array:</h3><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c">data-type <span class="hljs-built_in">array</span>-name[size][size];</code></pre><h2>Functions</h2><p>Function
 is a sub-routine which contains set of statements. Usually functions 
are written when multiple calls are required to same set of statements 
which increases re-usuability and modularity.</p><p>Two types of functions are present in C</p><ol><li>Library Functions:</li></ol><p>Library functions are the in-built functions which are declared in header files like printf(),scanf(),puts(),gets() etc.,</p><ol start="2"><li>User defined functions:</li></ol><p>User defined functions are the ones which are written by the programmer based on the requirement.</p><h2>How to declare a Function</h2><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-function">return_type <span class="hljs-title">function_name</span><span class="hljs-params">(parameters)</span></span>;</code></pre><h2>How to call a Function</h2><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c">function_name (parameters)</code></pre><h2>How to define a Function</h2><pre class="jss183"><svg class="MuiSvgIcon-root jss184 MuiSvgIcon-fontSizeSmall" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16 1H4c-1.1 0-2 .9-2 2v14h2V3h12V1zm-1 4l6 6v10c0 1.1-.9 2-2 2H7.99C6.89 23 6 22.1 6 21l.01-14c0-1.1.89-2 1.99-2h7zm-1 7h5.5L14 6.5V12z"></path></svg><code class="language-c hljs c"><span class="hljs-function">return_type <span class="hljs-title">function_name</span><span class="hljs-params">(parameters)</span> </span>{  
  <span class="hljs-comment">//code</span>
}</code></pre></div></div><div class="MuiGrid-root jss185 MuiGrid-container"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-1"> </div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-11"><div class="MuiGrid-root MuiGrid-container"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-10 MuiGrid-grid-md-3"><h6 class="MuiTypography-root footerText MuiTypography-h6 MuiTypography-gutterBottom">OneCompiler.com</h6><br><a class="jss186" href="https://onecompiler.com/about"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> About</p></a><a class="jss186" href="https://onecompiler.com/contact"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Contact</p></a><br><a class="jss186" href="https://onecompiler.com/users"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Users</p></a><a class="jss186" href="https://status.onecompiler.com/" target="_blank"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Status</p></a><a class="jss186" href="https://onecompiler.com/apis/pricing"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Pricing</p></a><br><a class="jss186" href="https://github.com/onecompiler" target="_blank"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> GitHub </p></a><a class="jss186" href="https://www.linkedin.com/company/onecompiler" target="_blank"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> LinkedIn </p></a><a class="jss186" href="https://www.facebook.com/onecompiler" target="_blank"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Facebook </p></a><a class="jss186" href="https://www.instagram.com/onecompiler" target="_blank"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Instagram </p></a><a class="jss186" href="https://twitter.com/OneCompilerHQ" target="_blank"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Twitter </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-10 MuiGrid-grid-md-6"><h6 class="MuiTypography-root footerText MuiTypography-h6 MuiTypography-gutterBottom">Languages</h6><br><div class="MuiGrid-root MuiGrid-container"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/java"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Java </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/python"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Python </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/c"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> C </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/cpp"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> C++ </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/nodejs"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> NodeJS </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/javascript"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> JavaScript </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/groovy"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Groovy </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/jshell"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> JShell </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/haskell"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Haskell </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/tcl"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Tcl </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/lua"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Lua </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/ada"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Ada </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/commonlisp"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> CommonLisp </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/d"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> D </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/elixir"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Elixir </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/erlang"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Erlang </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/fsharp"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> F# </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/fortran"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Fortran </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/assembly"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Assembly </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/scala"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Scala </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/php"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> PHP </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/python2"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Python2 </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/csharp"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> C# </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/perl"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Perl </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/ruby"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Ruby </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/go"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Go </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/r"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> R </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/racket"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Racket </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/ocaml"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> OCaml </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/vb"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Visual Basic (VB.NET) </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/basic"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Basic </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/html"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> HTML </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/materialize"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Materialize </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/bootstrap"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Bootstrap </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/jquery"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> JQuery </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/foundation"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Foundation </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/bulma"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Bulma </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/uikit"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Uikit </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/semanticUI"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Semantic UI </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/skeleton"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Skeleton </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/milligram"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Milligram </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/paperCss"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> PaperCSS </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/backbonejs"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> BackboneJS </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/react"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> React (Beta) </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/angular"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Angular (Beta) </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/vue"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Vue (Beta) </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/vue3"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Vue3 (Beta) </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/bash"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Bash </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/clojure"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Clojure </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/typescript"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> TypeScript </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/cobol"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Cobol </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/kotlin"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Kotlin </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/pascal"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Pascal </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/prolog"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Prolog </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/rust"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Rust </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/swift"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Swift </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/objectivec"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Objective-C </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/octave"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Octave </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/text"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Text </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/brainfk"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> BrainFK </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/coffeescript"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> CoffeeScript </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/ejs"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> EJS </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/mysql"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> MySQL </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/oracle"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Oracle Database </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/postgresql"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> PostgreSQL </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/mongodb"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> MongoDB </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/sqlite"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> SQLite </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/redis"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Redis </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/mariadb"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> MariaDB </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/cassandra"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Cassandra </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/plsql"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Oracle PL/SQL </p></a></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-4 MuiGrid-grid-md-4 MuiGrid-grid-lg-3"><a class="jss186" href="https://onecompiler.com/sqlserver"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom"> Microsoft SQL Server </p></a></div></div></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-10 MuiGrid-grid-md-3"><h6 class="MuiTypography-root footerText MuiTypography-h6 MuiTypography-gutterBottom">More</h6><br><a class="jss186" href="https://onecompiler.com/orgs"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">Orgs</p></a><a class="jss186" href="https://onecompiler.com/apis"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">API</p></a><a class="jss186" href="https://onecompiler.com/apis/pricing"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">Pricing</p></a><br><a class="jss186" href="https://onecompiler.com/cheatsheets"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">Cheatsheets</p></a><a class="jss186" href="https://onecompiler.com/tutorials"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">Tutorials</p></a><a class="jss186" href="https://onecompiler.com/tools"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">Tools</p></a><a class="jss186" href="https://onecompiler.com/stats"><p class="MuiTypography-root footerLink MuiTypography-body2 MuiTypography-noWrap MuiTypography-gutterBottom">Stats</p></a></div></div></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-1"></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12"><br><br><p class="MuiTypography-root jss187 MuiTypography-body1 MuiTypography-noWrap MuiTypography-gutterBottom">© Copyright 2024 One Compiler Pvt. Ltd. |<a class="jss186" href="https://onecompiler.com/privacy-policy"><span class="footerLink"> Privacy Policy </span></a>|<a href="https://onecompiler.com/terms-and-conditions" class="jss186"><span class="footerLink"> Terms &amp; Conditions </span></a></p></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-1"> </div></div></div><script id="__NEXT_DATA__" type="application/json">{"props":{"pageProps":{"pathname":"/editor","query":{"language":"c","id":"42qjhnh7c"},"codeObj":{"_id":"42qjhnh7c","type":"code","created":"2024-08-29T00:43:04.321Z","updated":"2024-08-29T01:19:45.141Z","title":"42qjhnh7c","description":null,"tags":[],"visibility":"public","properties":{"language":"c","files":[{"name":"ManipulaçãoVetores.c","content":"#include \u003cstdio.h\u003e\r\n\r\nint main() {\r\n    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};\r\n    int i, temp;\r\n\r\n    for (i = 0; i \u003c 5; i++) {\r\n        temp = vetor[i];\r\n        vetor[i] = vetor[9 - i];\r\n        vetor[9 - i] = temp;\r\n    }\r\n\r\n    printf(\"Vetor invertido:\\n\");\r\n    for (i = 0; i \u003c 10; i++) {\r\n        printf(\"%d \", vetor[i]);\r\n    }\r\n\r\n    return 0;\r\n}\r\n\r\n\r\n"},{"name":"TrabalhandoMatrizes.c","content":"#include \u003cstdio.h\u003e\r\n\r\nint main() {\r\n    int matriz[3][3];\r\n    int i, j, soma = 0;\r\n\r\n    printf(\"Insira os elementos da matriz 3x3:\\n\");\r\n    for (i = 0; i \u003c 3; i++) {\r\n        for (j = 0; j \u003c 3; j++) {\r\n            scanf(\"%d\", \u0026matriz[i][j]);\r\n            if (i == j) {\r\n                soma += matriz[i][j];\r\n            }\r\n        }\r\n    }\r\n\r\n    printf(\"Soma dos elementos da diagonal principal: %d\\n\", soma);\r\n    return 0;\r\n}\r\n"}],"stdin":"\n","hash":"0caa3f4c213a9a257db9d8305eab2fe12afec41b","result":{"stdout":"Vetor invertido:\n9 8 7 6 5 4 3 2 1 0 ","stderr":null,"exception":null,"executionTime":63,"success":true,"output":"Vetor invertido:\n9 8 7 6 5 4 3 2 1 0 "}},"user":{"_id":null},"metrics":{"views":19}},"language":"c","timestamp":"1724957350960_129","doc":"# C Language online compiler\nWrite, Run \u0026 Share C Language code online using OneCompiler's C online compiler for free. It's one of the robust, feature-rich online compilers for C language, running the latest C version which is C18. Getting started with the OneCompiler's C editor is really simple and pretty fast. The editor shows sample boilerplate code when you choose language as 'C' and start coding!\n\n# Read inputs from stdin\nOneCompiler's C online editor supports stdin and users can give inputs to programs using the STDIN textbox under the I/O tab. Following is a sample C program which takes name as input and print your name with hello.\n\n```c\n#include \u003cstdio.h\u003e\nint main()\n{\n    char name[50];\n    printf(\"Enter name:\");\n    scanf(\"%s\", name);\n    printf(\"Hello %s \\n\" , name );\n    return 0;\n    \n}\n```\n\n# About C\n\nC language is one of the most popular general-purpose programming language developed by Dennis Ritchie at Bell laboratories for UNIX operating system. The initial release of C Language was in the year 1972. Most of the desktop operating systems are written in C Language. \n\n### Key features:\n\n* Structured Programming\n* Popular system programming language\n* UNIX, MySQL and Oracle are completely written in C.\n* Supports variety of platforms\n* Efficient and also handle low-level activities.\n* As fast as assembly language and hence used as system development language.\n\n# Syntax help\n\n## Loops\n\n### 1. If-Else:\n\nWhen ever you want to perform a set of operations based on a condition `if-else` is used.\n\n```c\nif(conditional-expression) {\n   // code\n} else {\n   // code\n}\n```\n\nYou can also use if-else for nested Ifs and if-else-if ladder when multiple conditions are to be performed on a single variable.\n\n### 2. Switch:\n\nSwitch is an alternative to if-else-if ladder.\n\n```c\nswitch(conditional-expression) {    \ncase value1:    \n // code    \n break;  // optional  \ncase value2:    \n // code    \n break;  // optional  \n...    \n    \ndefault:     \n // code to be executed when all the above cases are not matched;    \n} \n```\n### 3. For:\n\nFor loop is used to iterate a set of statements based on a condition.\n\n```c\nfor(Initialization; Condition; Increment/decrement){  \n  // code  \n} \n```\n### 4. While:\n\nWhile is also used to iterate a set of statements based on a condition. Usually while is preferred when number of iterations are not known in advance.\n\n```c\nwhile(condition) {  \n // code \n}  \n```\n### 5. Do-While:\nDo-while is also used to iterate a set of statements based on a condition. It is mostly used when you need to execute the statements atleast once.\n\n```c\ndo {\n  // code \n} while (condition); \n```\n\n## Arrays\n\nArray is a collection of similar data which is stored in continuous memory addresses. Array values can be fetched using index.  Index starts from 0 to size-1.\n\n### Syntax\n\n### One dimentional Array:\n\n```c\ndata-type array-name[size];\n```\n\n### Two dimensional array:\n```c\ndata-type array-name[size][size];\n```\n## Functions\n\nFunction is a sub-routine which contains set of statements. Usually functions are written when multiple calls are required to same set of statements which increases re-usuability and modularity.\n\nTwo types of functions are present in C\n\n1. Library Functions:\n\nLibrary functions are the in-built functions which are declared in header files like printf(),scanf(),puts(),gets() etc.,\n\n2. User defined functions:\n\nUser defined functions are the ones which are written by the programmer based on the requirement.\n\n## How to declare a Function\n\n```c\nreturn_type function_name(parameters);\n```\n\n## How to call a Function\n\n```c\nfunction_name (parameters)\n```\n## How to define a Function\n\n```c\nreturn_type function_name(parameters) {  \n  //code\n}\n```\n"}},"page":"/editor","query":{"language":"c","id":"42qjhnh7c"},"buildId":"9040fafddd6ba0b3863e47523278e924c78ad0f1","isFallback":false,"customServer":true,"gip":true}</script><script nomodule="" src="03-ListaLinear_arquivos/polyfills-c4deeaf48482fe0964f2.js"></script><script src="03-ListaLinear_arquivos/main-c00f56739d4bf943dd6f.js" async=""></script><script src="03-ListaLinear_arquivos/webpack-23ebb4aaf35236474dd0.js" async=""></script><script src="03-ListaLinear_arquivos/framework.f0acb69465e7e5a293e0.js" async=""></script><script src="03-ListaLinear_arquivos/9345971d10a19f172c69e3b4ac62aa051ec883cb.f50d31b9276407c94922.js" async=""></script><script src="03-ListaLinear_arquivos/bcbe55d625e57f7d085dfb5a0f33d5c328cfe320.2ba9e442da711f9b76ef.js" async=""></script><script src="03-ListaLinear_arquivos/de4f3b197ffa5201f9c779e1480ae6b8c04f373d.1c9536a4bed1971497a8.js" async=""></script><script src="03-ListaLinear_arquivos/a94d6d6a584b9be86067590b3c476d02391a7d0a.41c2afd42674e7aeb47c.js" async=""></script><script src="03-ListaLinear_arquivos/_app-0d78cddbbed2c09c49f2.js" async=""></script><script src="03-ListaLinear_arquivos/e17e7b540dcb4382df0cec45a37d1a52b10f3ced.75f54defc4cda229b4e7.js" async=""></script><script src="03-ListaLinear_arquivos/7fa69bf31fd19c4bb4674b4f7823d62d0c12e6ad.7cfd27c91c0c7dd84690.js" async=""></script><script src="03-ListaLinear_arquivos/3d2c8c0d2a3170fb24e91674988c3b2d3a5f7c90.c48cc796d33266af928f.js" async=""></script><script src="03-ListaLinear_arquivos/7b7d07bb151ce202b5cc96bf4b8b52c019b63ab0.ba478c7ff64bb70a8201.js" async=""></script><script src="03-ListaLinear_arquivos/5119778374e01b2b42f94fc5abe92aa61ec56e16.b30f37049e3fb0fe63ba.js" async=""></script><script src="03-ListaLinear_arquivos/7a735be72c94803398ad6c25dab608ef6cd4e1b6.d2104993924f9782f7b3.js" async=""></script><script src="03-ListaLinear_arquivos/48c174e367c65cf61114cf885bcd50923ff1e47b.272bc54c806848ec0972.js" async=""></script><script src="03-ListaLinear_arquivos/77081480099afbdbf3b4ed3018b8a8b9381cfcd9.7b5630cc828f4a2a5507.js" async=""></script><script src="03-ListaLinear_arquivos/d1e226fd0deed97f1ee3dd7aa41b133ec8083cfa.06daacc6301aa9560930.js" async=""></script><script src="03-ListaLinear_arquivos/4dac267b9e9696d2fb6704e6f70f25b6fabc7434.08bfaa1d39d8c83bd09c.js" async=""></script><script src="03-ListaLinear_arquivos/2635d851a80d9e3c4449a1f4600770001a17fc3b.4e5b1120366337fbfcc8.js" async=""></script><script src="03-ListaLinear_arquivos/39.4524b8306e53ef73503b.js" async=""></script><script src="03-ListaLinear_arquivos/3bf205b55510456cfdb12ab1dcb04649827d3e86.44a8d2a465d5fed34595.js" async=""></script><script src="03-ListaLinear_arquivos/editor-4465d5d4d2178ea7177b.js" async=""></script><script src="03-ListaLinear_arquivos/_buildManifest.js" async=""></script><script src="03-ListaLinear_arquivos/_ssgManifest.js" async=""></script><script src="03-ListaLinear_arquivos/0b7b90cd.c272caf49c840cd221e5.js"></script><script src="03-ListaLinear_arquivos/1693648f930a02f3b517f97baa1fe31feee368fc.a6266fdee247a62a13be.js"></script><script src="03-ListaLinear_arquivos/d1c5dcc0bb63f124aea5d611e4e9d342e12907db.af9ed81bfdfc01719f11.js"></script><script src="03-ListaLinear_arquivos/ae788f4a0010799033ed72d7dcfbbb203bca7b9c.f5580b890050785703c1.js"></script><script src="03-ListaLinear_arquivos/89947cf2a231aeeed7e0129dc3e15788d6b33cb6.05640cd3fb657be15c9d.js"></script><script src="03-ListaLinear_arquivos/39df9c46cd8753827408a59ba83f8655c8f07b16.77688f93f703dbc527fb.js"></script><script src="03-ListaLinear_arquivos/index-26ba17de142c1e3bf919.js"></script><script src="03-ListaLinear_arquivos/071290cb.67c24c16c1aca338ab59.js"></script><script src="03-ListaLinear_arquivos/fef7f6c7ef27c30afeb1a5ef6a88988632c2c574.40f6960e524b4141769e.js"></script><script src="03-ListaLinear_arquivos/1084693104f0d4fe7f798db6ebd3412983530011_CSS.b49a158ac8e0abf8.js"></script><script src="03-ListaLinear_arquivos/75e704038201bfd31d11b99e06254acc7bdccdf0.c4fdc43ac5b09208e198.js"></script><script src="03-ListaLinear_arquivos/3e9a78e86e2a647deddf9a1931fbcbfe11b06ce0.abefdc42dcffafdc25ed.js"></script><script src="03-ListaLinear_arquivos/e275a359c4101e3b6544602da6a84d4f54f8edd9.167d34757d781a50c8fb.js"></script><script src="03-ListaLinear_arquivos/challenges-e8a5d52630e55a1c59c6.js"></script><div class=" ace_editor ace_hidpi ace_autocomplete ace_dark ace-dracula" style="font-size: 14px; left: 124px; height: 40px; top: 763px; display: none;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="none" spellcheck="false" style="opacity: 0; font-size: 1px; transform: translate(-100px);"></textarea><div class="ace_gutter" aria-hidden="true" style="display: none; left: 0px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1000000px;"></div></div><div class="ace_scroller" style="line-height: 20px; left: 0px; right: 0px; bottom: 0px;"><div class="ace_content" style="cursor: default; transform: translate(0px); width: 298px; height: 80px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 564px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div style="height: 20px; top: 0px; left: 0px; right: 0px;" class="ace_active-line"></div></div><div class="ace_layer ace_text-layer" style="height: 1000000px; margin: 0px 4px; transform: translate(0px);"><div style="height: 20px; top: 0px;" class="ace_line ace_selected"><span class="ace_completion-highlight">3</span><span class="ace_">0</span><span class="ace_completion-meta">local</span></div><div style="height: 20px; top: 20px;" class="ace_line"><span class="ace_">char</span><span class="ace_completion-highlight">3</span><span class="ace_">2_t</span><span class="ace_completion-meta">keyword</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors" style="opacity: 0;"><div class="ace_cursor" style="display: block; transform: translate(4px); width: 7px; height: 20px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; bottom: 0px; display: none;"><div class="ace_scrollbar-inner" style="width: 20px; height: 40px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 0px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 298px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-size-adjust: inherit; font-kerning: inherit; font-optical-sizing: inherit; font-language-override: inherit; font-feature-settings: inherit; font-variation-settings: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></body></html>