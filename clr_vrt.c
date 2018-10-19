/* 
MIT License

Copyright (c) 2018 Volvo2v1

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.



Contact: 
volvo2v1@gmail.com

SM:
https://youtube.com/Volvo2v1

Support:
https://paypal.me/2v1

*/

#include "clr_vrt.h"
#include <stdio.h>

//COLOR_CODES
void resetcolor()
{
    printf("\033[0m");
}

//PRINTF

void printf_red(char *__std_out) {
    printf("\033[0;31m%s",__std_out);
    resetcolor();
}            // \033[0;31m
void printf_lightred(char *__std_out) {
    printf("\033[38;5;203m%s",__std_out);
    resetcolor();
}      // \033[38;5;203m
void printf_darkred(char *__std_out) {
    printf("\033[38;5;1m%s",__std_out);
    resetcolor();
}       // \033[38;5;1m

void printf_green(char *__std_out) {
    printf("\033[0;32m%s",__std_out);
    resetcolor();
}         // \033[0;32m
void printf_lightgreen(char *__std_out) {
    printf("\033[38;5;10m%s",__std_out);
    resetcolor();
}    // \033[38;5;10m
void printf_darkgreen(char *__std_out) {
    printf("\033[38;5;34m%s",__std_out);
    resetcolor();
}     // \033[38;5;34m
void printf_lime(char *__std_out) {
    printf("\033[38;5;118m%s",__std_out);
    resetcolor();
}          // \033[38;5;118m

void printf_yellow(char *__std_out) {
    printf("\033[38;5;226m%s",__std_out);
    resetcolor();
}        // \033[38;5;226m
void printf_lightyellow(char *__std_out) {
    printf("\033[38;5;227m%s",__std_out);
    resetcolor();
}   // \033[38;5;227m
void printf_darkyellow(char *__std_out) {
    printf("\033[38;5;220m%s",__std_out);
    resetcolor();
}    // \033[38;5;220m

void printf_orange(char *__std_out) {
    printf("\033[38;5;208m%s",__std_out);
    resetcolor();
}        // \033[38;5;208m
void printf_lightorange(char *__std_out) {
    printf("\033[38;5;214m%s",__std_out);
    resetcolor();
}   // \033[38;5;214m
void printf_darkorange(char *__std_out) {
    printf("\033[38;5;202m%s",__std_out);
    resetcolor();
}    // \033[38;5;202m

void printf_blue(char *__std_out) {
    printf("\033[0;34m%s",__std_out);
    resetcolor();
}          // \033[0;34m
void printf_lightblue(char *__std_out) {
    printf("\033[38;5;33m%s",__std_out);
    resetcolor();
}     // \033[38;5;33m
void printf_navy(char *__std_out) {
    printf("\033[38;5;21m%s",__std_out);
    resetcolor();
}          // \033[38;5;21m 
void printf_darkblue(char *__std_out) {
    printf("\033[38;5;19m%s",__std_out);
    resetcolor();
}      // \033[38;5;19m
void printf_cyan(char *__std_out) {
    printf("\033[38;5;14m%s",__std_out);
    resetcolor();
}          // \033[38;5;14m
void printf_neoncyan(char *__std_out) {
    printf("\033[38;5;51m%s",__std_out);
    resetcolor();
}      // \033[38;5;51m

void printf_purple(char *__std_out) {
    printf("\033[0;35m%s",__std_out);
    resetcolor();
}        // \033[0;35m
void printf_lightpurple(char *__std_out) {
    printf("\033[38;5;93m%s",__std_out);
    resetcolor();
}   // \033[38;5;93m
void printf_darkpurple(char *__std_out) {
    printf("\033[38;5;91m%s",__std_out);
    resetcolor();
}    // \033[38;5;91m

void printf_pink(char *__std_out) {
    printf("\033[38;5;205m%s",__std_out);
    resetcolor();
}          // \033[38;5;205m
void printf_lightpink(char *__std_out) {
    printf("\033[38;5;218m%s",__std_out);
    resetcolor();
}     // \033[38;5;218m
void printf_neonpink(char *__std_out) {
    printf("\033[38;5;198m%s",__std_out);
    resetcolor();
}      // \033[38;5;198m
void printf_darkpink(char *__std_out) {
    printf("\033[38;5;197m%s",__std_out);
    resetcolor();
}      // \033[38;5;197m
void printf_fuchsia(char *__std_out) {
    printf("\033[38;5;164m%s",__std_out);
    resetcolor();
}       // \033[38;5;164m
void printf_magenta(char *__std_out) {
    printf("\033[38;5;200m%s",__std_out);
    resetcolor();
}       // \033[38;5;200m

void printf_black(char *__std_out) {
    printf("\033[38;5;0m%s",__std_out);
    resetcolor();
} // \033[38;5;0m
void printf_grey(char *__std_out) {
    printf("\033[38;5;7m%s",__std_out);
    resetcolor();
}  // \033[38;5;7m
void printf_white(char *__std_out) {
    printf("\033[0;37m%s",__std_out);
    resetcolor();
} // \033[0;37m


// PRINTF BOLD

void printf_bold_red(char *__std_out) {
    printf("\033[1;31m%s",__std_out);
    resetcolor();
}           // \033[1;31m
void printf_bold_lightred(char *__std_out) {
    printf("\033[1;38;5;203m%s",__std_out);
    resetcolor();
}      // \033[1;38;5;203m
void printf_bold_darkred(char *__std_out) {
    printf("\033[1;38;5;1m%s",__std_out);
    resetcolor();
}       // \033[1;38;5;1m

void printf_bold_green(char *__std_out) {
    printf("\033[1;32m%s",__std_out);
    resetcolor();
}         // \033[1;32m
void printf_bold_lightgreen(char *__std_out) {
    printf("\033[1;38;5;10m%s",__std_out);
    resetcolor();
}    // \033[1;38;5;10m
void printf_bold_darkgreen(char *__std_out) {
    printf("\033[1;38;5;34m%s",__std_out);
    resetcolor();
}     // \033[1;38;5;34m
void printf_bold_lime(char *__std_out) {
    printf("\033[1;38;5;118m%s",__std_out);
    resetcolor();
}          // \033[1;38;5;118m

void printf_bold_yellow(char *__std_out) {
    printf("\033[1;38;5;226m%s",__std_out);
    resetcolor();
}        // \033[1;38;5;226m
void printf_bold_lightyellow(char *__std_out) {
    printf("\033[1;38;5;227m%s",__std_out);
    resetcolor();
}   // \033[1;38;5;227m
void printf_bold_darkyellow(char *__std_out) {
    printf("\033[1;38;5;220m%s",__std_out);
    resetcolor();
}    // \033[1;38;5;220m

void printf_bold_orange(char *__std_out) {
    printf("\033[1;38;5;208m%s",__std_out);
    resetcolor();
}        // \033[1;38;5;208m
void printf_bold_lightorange(char *__std_out) {
    printf("\033[1;38;5;214m%s",__std_out);
    resetcolor();
}   // \033[1;38;5;214m
void printf_bold_darkorange(char *__std_out) {
    printf("\033[1;38;5;202m%s",__std_out);
    resetcolor();
}    // \033[1;38;5;202m

void printf_bold_blue(char *__std_out) {
    printf("\033[1;34m%s",__std_out);
    resetcolor();
}         // \033[1;34m
void printf_bold_lightblue(char *__std_out) {
    printf("\033[1;38;5;33m%s",__std_out);
    resetcolor();
}    // \033[1;38;5;33m
void printf_bold_navy(char *__std_out) {
    printf("\033[1;38;5;21m%s",__std_out);
    resetcolor();
}         // \033[1;38;5;21m 
void printf_bold_darkblue(char *__std_out) {
    printf("\033[1;38;5;19m%s",__std_out);
    resetcolor();
}     // \033[1;38;5;19m
void printf_bold_cyan(char *__std_out) {
    printf("\033[1;38;5;14m%s",__std_out);
    resetcolor();
}         // \033[1;38;5;14m
void printf_bold_neoncyan(char *__std_out) {
    printf("\033[1;38;5;51m%s",__std_out);
    resetcolor();
}     // \033[1;38;5;51m

void printf_bold_purple(char *__std_out) {
    printf("\033[1;35m%s",__std_out);
    resetcolor();
}        // \033[1;35m
void printf_bold_lightpurple(char *__std_out) {
    printf("\033[1;38;5;93m%s",__std_out);
    resetcolor();
}   // \033[1;38;5;93m
void printf_bold_darkpurple(char *__std_out) {
    printf("\033[1;38;5;91m%s",__std_out);
    resetcolor();
}    // \033[1;38;5;91m

void printf_bold_pink(char *__std_out) {
    printf("\033[1;38;5;205m%s",__std_out);
    resetcolor();
}         // \033[1;38;5;205m
void printf_bold_lightpink(char *__std_out) {
    printf("\033[1;38;5;218m%s",__std_out);
    resetcolor();
}    // \033[1;38;5;218m
void printf_bold_neonpink(char *__std_out) {
    printf("\033[1;38;5;198m%s",__std_out);
    resetcolor();
}     // \033[1;38;5;198m
void printf_bold_darkpink(char *__std_out) {
    printf("\033[1;38;5;197m%s",__std_out);
    resetcolor();
}     // \033[1;38;5;197m
void printf_bold_fuchsia(char *__std_out) {
    printf("\033[1;38;5;164m%s",__std_out);
    resetcolor();
}      // \033[1;38;5;164m
void printf_bold_magenta(char *__std_out) {
    printf("\033[1;38;5;200m%s",__std_out);
    resetcolor();
}      // \033[1;38;5;200m

void printf_bold_black(char *__std_out) {
    printf("\033[1;38;5;0m%s",__std_out);
    resetcolor();
} // \033[1;38;5;0m
void printf_bold_grey(char *__std_out) {
    printf("\033[1;38;5;7m%s",__std_out);
    resetcolor();
}  // \033[1;38;5;7m
void printf_bold_white(char *__std_out) {
    printf("\033[1;37m%s",__std_out);
    resetcolor();
} // \033[1;37m


// GLOBAL

void clr_red() {
    printf("\033[0;31m");
}            // \033[0;31m
void clr_lightred() {
    printf("\033[38;5;203m");
}      // \033[38;5;203m
void clr_darkred() {
    printf("\033[38;5;1m");
}       // \033[38;5;1m

void clr_green() {
    printf("\033[0;32m");
}         // \033[0;32m
void clr_lightgreen() {
    printf("\033[38;5;10m");
}    // \033[38;5;10m
void clr_darkgreen() {
    printf("\033[38;5;34m");
}     // \033[38;5;34m
void clr_lime() {
    printf("\033[38;5;118m");
}          // \033[38;5;118m

void clr_yellow() {
    printf("\033[38;5;226m");
}        // \033[38;5;226m
void clr_lightyellow() {
    printf("\033[38;5;227m");
}   // \033[38;5;227m
void clr_darkyellow() {
    printf("\033[38;5;220m");
}    // \033[38;5;220m

void clr_orange() {
    printf("\033[38;5;208m");
}        // \033[38;5;208m
void clr_lightorange() {
    printf("\033[38;5;214m");
}   // \033[38;5;214m
void clr_darkorange() {
    printf("\033[38;5;202m");
}    // \033[38;5;202m

void clr_blue() {
    printf("\033[0;34m");
}          // \033[0;34m
void clr_lightblue() {
    printf("\033[38;5;33m");
}     // \033[38;5;33m
void clr_navy() {
    printf("\033[38;5;21m");
}          // \033[38;5;21m 
void clr_darkblue() {
    printf("\033[38;5;19m");
}      // \033[38;5;19m
void clr_cyan() {
    printf("\033[38;5;14m");
}          // \033[38;5;14m
void clr_neoncyan() {
    printf("\033[38;5;51m");
}      // \033[38;5;51m

void clr_purple() {
    printf("\033[0;35m");
}        // \033[0;35m
void clr_lightpurple() {
    printf("\033[38;5;93m");
}   // \033[38;5;93m
void clr_darkpurple() {
    printf("\033[38;5;91m");
}    // \033[38;5;91m

void clr_pink() {
    printf("\033[38;5;205m");
}          // \033[38;5;205m
void clr_lightpink() {
    printf("\033[38;5;218m");
}     // \033[38;5;218m
void clr_neonpink() {
    printf("\033[38;5;198m");
}      // \033[38;5;198m
void clr_darkpink() {
    printf("\033[38;5;197m");
}      // \033[38;5;197m
void clr_fuchsia() {
    printf("\033[38;5;164m");
}       // \033[38;5;164m
void clr_magenta() {
    printf("\033[38;5;200m");
}       // \033[38;5;200m

void clr_black() {
    printf("\033[38;5;0m");
} // \033[38;5;0m
void clr_grey() {
    printf("\033[38;5;7m");
}  // \033[38;5;7m
void clr_white() {
    printf("\033[0;37m");
} // \033[0;37m


// GLOBAL BOLD

void bold_clr_red() {
    printf("\033[1;31m");
}           // \033[1;31m
void bold_clr_lightred() {
    printf("\033[1;38;5;203m");
}      // \033[1;38;5;203m
void bold_clr_darkred() {
    printf("\033[1;38;5;1m");
}       // \033[1;38;5;1m

void bold_clr_green() {
    printf("\033[1;32m");
}         // \033[1;32m
void bold_clr_lightgreen() {
    printf("\033[1;38;5;10m");
}    // \033[1;38;5;10m
void bold_clr_darkgreen() {
    printf("\033[1;38;5;34m");
}     // \033[1;38;5;34m
void bold_clr_lime() {
    printf("\033[1;38;5;118m");
}          // \033[1;38;5;118m

void bold_clr_yellow() {
    printf("\033[1;38;5;226m");
}        // \033[1;38;5;226m
void bold_clr_lightyellow() {
    printf("\033[1;38;5;227m");
}   // \033[1;38;5;227m
void bold_clr_darkyellow() {
    printf("\033[1;38;5;220m");
}    // \033[1;38;5;220m

void bold_clr_orange() {
    printf("\033[1;38;5;208m");
}        // \033[1;38;5;208m
void bold_clr_lightorange() {
    printf("\033[1;38;5;214m");
}   // \033[1;38;5;214m
void bold_clr_darkorange() {
    printf("\033[1;38;5;202m");
}    // \033[1;38;5;202m

void bold_clr_blue() {
    printf("\033[1;34m");
}         // \033[1;34m
void bold_clr_lightblue() {
    printf("\033[1;38;5;33m");
}    // \033[1;38;5;33m
void bold_clr_navy() {
    printf("\033[1;38;5;21m");
}         // \033[1;38;5;21m 
void bold_clr_darkblue() {
    printf("\033[1;38;5;19m");
}     // \033[1;38;5;19m
void bold_clr_cyan() {
    printf("\033[1;38;5;14m");
}         // \033[1;38;5;14m
void bold_clr_neoncyan() {
    printf("\033[1;38;5;51m");
}     // \033[1;38;5;51m

void bold_clr_purple() {
    printf("\033[1;35m");
}        // \033[1;35m
void bold_clr_lightpurple() {
    printf("\033[1;38;5;93m");
}   // \033[1;38;5;93m
void bold_clr_darkpurple() {
    printf("\033[1;38;5;91m");
}    // \033[1;38;5;91m

void bold_clr_pink() {
    printf("\033[1;38;5;205m");
}         // \033[1;38;5;205m
void bold_clr_lightpink() {
    printf("\033[1;38;5;218m");
}    // \033[1;38;5;218m
void bold_clr_neonpink() {
    printf("\033[1;38;5;198m");
}     // \033[1;38;5;198m
void bold_clr_darkpink() {
    printf("\033[1;38;5;197m");
}     // \033[1;38;5;197m
void bold_clr_fuchsia() {
    printf("\033[1;38;5;164m");
}      // \033[1;38;5;164m
void bold_clr_magenta() {
    printf("\033[1;38;5;200m");
}      // \033[1;38;5;200m

void bold_clr_black() {
    printf("\033[1;38;5;0m");
} // \033[1;38;5;0m
void bold_clr_grey() {
    printf("\033[1;38;5;7m");
}  // \033[1;38;5;7m
void bold_clr_white() {
    printf("\033[1;37m");
} // \033[1;37m


//SPECIAL

// PRINTF

void printf_syrup(char *__std_out) {
    printf("\033[38;5;52m%s", __std_out);
    resetcolor();
}            // \033[38;5;52m
void printf_amaranth(char *__std_out) {
    printf("\033[38;5;211m%s", __std_out);
}        // \033[38;5;211m
void printf_olive(char *__std_out) {
    printf("\033[38;5;58m%s", __std_out);
    resetcolor();
}          // \033[38;5;58m
void printf_candyapple(char *__std_out) {
    printf("\033[38;5;9m%s", __std_out);
    resetcolor();
}    // \033[38;5;9m
void printf_emerald(char *__std_out) {
    printf("\033[38;5;121m%s", __std_out);
    resetcolor();
}      // \033[38;5;121m
void printf_forestgreen(char *__std_out) {
    printf("\033[38;5;2m%s", __std_out);
    resetcolor();
} // \033[38;5;2m
void printf_caramel(char *__std_out) {
    printf("\033[38;5;166m%s", __std_out);
    resetcolor();
}    // \033[38;5;166m

// PRINTF BOLD SPECIAL

void printf_bold_syrup(char *__std_out) {
    printf("\033[1;38;5;52m%s", __std_out);
    resetcolor();
}            // \033[1;38;5;52m
void printf_bold_amaranth(char *__std_out) {
    printf("\033[1;38;5;211m%s", __std_out);
    resetcolor();
}        // \033[1;38;5;211m
void printf_bold_olive(char *__std_out) {
    printf("\033[1;38;5;58m%s", __std_out);
    resetcolor();
}          // \033[1;38;5;58m
void printf_bold_candyapple(char *__std_out) {
    printf("\033[1;38;5;9m%s", __std_out);
    resetcolor();
}    // \033[1;38;5;9m
void printf_bold_emerald(char *__std_out) {
    printf("\033[1;38;5;121m%s", __std_out);
    resetcolor();
}      // \033[1;38;5;121m
void printf_bold_forestgreen(char *__std_out) {
    printf("\033[1;38;5;2m%s", __std_out);
    resetcolor();
} // \033[1;38;5;2m
void printf_bold_caramel(char *__std_out) {
    printf("\033[1;38;5;166m%s", __std_out);
    resetcolor();
}    // \033[1;38;5;166m

//SPCL


void clr_syrup() {
    printf("\033[38;5;52m");
}            // \033[38;5;52m
void clr_amaranth() {
    printf("\033[38;5;211m");
}        // \033[38;5;211m
void clr_olive() {
    printf("\033[38;5;58m");
}          // \033[38;5;58m
void clr_candyapple() {
    printf("\033[38;5;9m");
}    // \033[38;5;9m
void clr_emerald() {
    printf("\033[38;5;121m");
}      // \033[38;5;121m
void clr_forestgreen() {
    printf("\033[38;5;2m");
} // \033[38;5;2m
void clr_caramel() {
    printf("\033[38;5;166m");
}    // \033[38;5;166m

// BOLD SPECIAL

void bold_clr_syrup() {
    printf("\033[1;38;5;52m");
}            // \033[1;38;5;52m
void bold_clr_amaranth() {
    printf("\033[1;38;5;211m");
}        // \033[1;38;5;211m
void bold_clr_olive() {
    printf("\033[1;38;5;58m");
}          // \033[1;38;5;58m
void bold_clr_candyapple() {
    printf("\033[1;38;5;9m");
}    // \033[1;38;5;9m
void bold_clr_emerald() {
    printf("\033[1;38;5;121m");
}      // \033[1;38;5;121m
void bold_clr_forestgreen() {
    printf("\033[1;38;5;2m");
} // \033[1;38;5;2m
void bold_clr_caramel() {
    printf("\033[1;38;5;166m");
}    // \033[1;38;5;166m

// </COLOR_CODES>
