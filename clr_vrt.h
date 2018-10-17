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

#ifndef _CLR_VRT_H_
#define _CLR_VRT_H_

//PRINTF

void resetcolor();

void printf_red(char *__std_out);
void printf_lightred(char *__std_out);
void printf_darkred(char *__std_out);

void printf_green(char *__std_out);
void printf_lightgreen(char *__std_out);
void printf_darkgreen(char *__std_out);
void printf_lime(char *__std_out);

void printf_yellow(char *__std_out);
void printf_lightyellow(char *__std_out);
void printf_darkyellow(char *__std_out);

void printf_orange(char *__std_out);
void printf_lightorange(char *__std_out);
void printf_darkorange(char *__std_out);

void printf_blue(char *__std_out);
void printf_lightblue(char *__std_out);
void printf_navy(char *__std_out);
void printf_darkblue(char *__std_out);
void printf_cyan(char *__std_out);
void printf_neoncyan(char *__std_out);

void printf_purple(char *__std_out);
void printf_lightpurple(char *__std_out);
void printf_darkpurple(char *__std_out);

void printf_pink(char *__std_out);
void printf_lightpink(char *__std_out);
void printf_neonpink(char *__std_out);
void printf_darkpink(char *__std_out);
void printf_fuchsia(char *__std_out);
void printf_magenta(char *__std_out);

void printf_black(char *__std_out);
void printf_grey(char *__std_out);
void printf_white(char *__std_out);

//PRINTF BOLD

void printf_bold_red(char *__std_out);
void printf_bold_lightred(char *__std_out);
void printf_bold_darkred(char *__std_out);
void printf_bold_green(char *__std_out);
void printf_bold_lightgreen(char *__std_out);
void printf_bold_darkgreen(char *__std_out);
void printf_bold_lime(char *__std_out);
void printf_bold_yellow(char *__std_out);
void printf_bold_lightyellow(char *__std_out);
void printf_bold_darkyellow(char *__std_out);
void printf_bold_orange(char *__std_out);
void printf_bold_lightorange(char *__std_out);
void printf_bold_darkorange(char *__std_out);
void printf_bold_blue(char *__std_out);
void printf_bold_lightblue(char *__std_out);
void printf_bold_navy(char *__std_out);
void printf_bold_darkblue(char *__std_out);
void printf_bold_cyan(char *__std_out);
void printf_bold_neoncyan(char *__std_out);
void printf_bold_purple(char *__std_out);
void printf_bold_lightpurple(char *__std_out);
void printf_bold_darkpurple(char *__std_out);
void printf_bold_pink(char *__std_out);
void printf_bold_lightpink(char *__std_out);
void printf_bold_neonpink(char *__std_out);
void printf_bold_darkpink(char *__std_out);
void printf_bold_fuchsia(char *__std_out);
void printf_bold_magenta(char *__std_out);
void printf_bold_black(char *__std_out);
void printf_bold_grey(char *__std_out);
void printf_bold_white(char *__std_out);

// GLOBAL

void clr_red();           // \033[0;31m
void clr_lightred();      // \033[38;5;203m
void clr_darkred();       // \033[38;5;1m

void clr_green();         // \033[0;32m
void clr_lightgreen();    // \033[38;5;10m
void clr_darkgreen();     // \033[38;5;34m
void clr_lime();          // \033[38;5;118m

void clr_yellow();        // \033[38;5;226m
void clr_lightyellow();   // \033[38;5;227m
void clr_darkyellow();    // \033[38;5;220m

void clr_orange();        // \033[38;5;208m
void clr_lightorange();   // \033[38;5;214m
void clr_darkorange();    // \033[38;5;202m

void clr_blue();      	  // \033[0;34m
void clr_lightblue(); 	  // \033[38;5;33m
void clr_navy();      	  // \033[38;5;21m 
void clr_darkblue();  	  // \033[38;5;19m
void clr_cyan();      	  // \033[38;5;51m
void clr_neoncyan();  	  // \033[38;5;14m

void clr_purple();        // \033[0;35m
void clr_lightpurple();   // \033[38;5;93m
void clr_darkpurple();    // \033[38;5;91m

void clr_pink();      	  // \033[38;5;205m
void clr_lightpink(); 	  // \033[38;5;218m
void clr_neonpink();  	  // \033[38;5;198m
void clr_darkpink();  	  // \033[38;5;197m
void clr_fuchsia();   	  // \033[38;5;164m
void clr_magenta();   	  // \033[38;5;200m

void clr_black(); // \033[38;5;0m
void clr_grey();  // \033[38;5;7m
void clr_white(); // \033[0;37m


// GLOBAL BOLD

void bold_clr_red();           // \033[1;31m
void bold_clr_lightred();      // \033[1;38;5;203m
void bold_clr_darkred();       // \033[1;38;5;1m

void bold_clr_green();         // \033[1;32m
void bold_clr_lightgreen();    // \033[1;38;5;10m
void bold_clr_darkgreen();     // \033[1;38;5;34m
void bold_clr_lime();          // \033[1;38;5;118m

void bold_clr_yellow();        // \033[1;38;5;226m
void bold_clr_lightyellow();   // \033[1;38;5;227m
void bold_clr_darkyellow();    // \033[1;38;5;220m

void bold_clr_orange();        // \033[1;38;5;208m
void bold_clr_lightorange();   // \033[1;38;5;214m
void bold_clr_darkorange();    // \033[1;38;5;202m

void bold_clr_blue();      	  // \033[1;34m
void bold_clr_lightblue(); 	  // \033[1;38;5;33m
void bold_clr_navy();      	  // \033[1;38;5;21m 
void bold_clr_darkblue();  	  // \033[1;38;5;19m
void bold_clr_cyan();      	  // \033[1;38;5;51m
void bold_clr_neoncyan();  	  // \033[1;38;5;14m

void bold_clr_purple();        // \033[1;35m
void bold_clr_lightpurple();   // \033[1;38;5;93m
void bold_clr_darkpurple();    // \033[1;38;5;91m

void bold_clr_pink();      	  // \033[1;38;5;205m
void bold_clr_lightpink(); 	  // \033[1;38;5;218m
void bold_clr_neonpink();  	  // \033[1;38;5;198m
void bold_clr_darkpink();  	  // \033[1;38;5;197m
void bold_clr_fuchsia();   	  // \033[1;38;5;164m
void bold_clr_magenta();   	  // \033[1;38;5;200m

void bold_clr_black(); // \033[1;38;5;0m
void bold_clr_grey();  // \033[1;38;5;7m
void bold_clr_white(); // \033[1;37m


//SPECIAL PRINTF

void printf_syrup(char *__std_out);                           // \033[38;5;52m
void printf_amaranth(char *__std_out);                       // \033[38;5;211m
void printf_olive(char *__std_out);                         // \033[38;5;58m
void printf_candyapple(char *__std_out);                   // \033[38;5;9m
void printf_emerald(char *__std_out);                     // \033[38;5;121m
void printf_forestgreen(char *__std_out);                // \033[38;5;2m
void printf_caramel(char *__std_out);                   // \033[38;5;166m

// PRINTF BOLD SPECIAL

void printf_bold_syrup(char *__std_out);             // \033[1;38;5;52m
void printf_bold_amaranth(char *__std_out);         // \033[1;38;5;211m
void printf_bold_olive(char *__std_out);           // \033[1;38;5;58m
void printf_bold_candyapple(char *__std_out);     // \033[1;38;5;9m
void printf_bold_emerald(char *__std_out);       // \033[1;38;5;121m
void printf_bold_forestgreen(char *__std_out);  // \033[1;38;5;2m
void printf_bold_caramel(char *__std_out);     // \033[1;38;5;166m


//SPECIAL

void clr_syrup();            // \033[38;5;52m
void clr_amaranth();        // \033[38;5;211m
void clr_olive();          // \033[38;5;58m
void clr_candyapple();    // \033[38;5;9m
void clr_emerald();      // \033[38;5;121m
void clr_forestgreen(); // \033[38;5;2m
void clr_caramel();    // \033[38;5;166m

// BOLD SPECIAL

void clr_syrup();            // \033[1;38;5;52m
void clr_amaranth();        // \033[1;38;5;211m
void clr_olive();          // \033[1;38;5;58m
void clr_candyapple();    // \033[1;38;5;9m
void clr_emerald();      // \033[1;38;5;121m
void clr_forestgreen(); // \033[1;38;5;2m
void clr_caramel();    // \033[1;38;5;166m

#endif