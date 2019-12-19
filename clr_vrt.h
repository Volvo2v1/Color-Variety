/* 
MIT License

Copyright (c) 2019 Volvo2v1

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

int printf_c(const char *_str, const char *_clr, ...);

#define _CLR_RED                "\033[0;31m"
#define _CLR_LIGHT_RED          "\033[38;5;203m"
#define _CLR_DARK_RED           "\033[38;5;1m"

#define _CLR_GREEN              "\033[0;32m"
#define _CLR_LIGHT_GREEN        "\033[38;5;10m"
#define _CLR_DARK_GREEN         "\033[38;5;34m"
#define _CLR_LIME               "\033[38;5;118m"

#define _CLR_YELLOW             "\033[38;5;226m"
#define _CLR_LIGHT_YELLOW       "\033[38;5;227m"
#define _CLR_DARK_YELLOW        "\033[38;5;220m"

#define _CLR_ORANGE             "\033[38;5;208m"
#define _CLR_LIGHT_ORANGE       "\033[38;5;214m"
#define _CLR_DARK_ORANGE        "\033[38;5;202m"

#define _CLR_BLUE               "\033[0;34m"
#define _CLR_LIGHT_BLUE         "\033[38;5;33m"
#define _CLR_NAVY               "\033[38;5;21m "
#define _CLR_DARK_BLUE          "\033[38;5;19m"
#define _CLR_CYAN               "\033[38;5;14m"
#define _CLR_NEON_CYAN          "\033[38;5;51m"

#define _CLR_PURPLE             "\033[0;35m"
#define _CLR_LIGHT_PURPLE       "\033[38;5;93m"
#define _CLR_DARK_PURPLE        "\033[38;5;91m"

#define _CLR_PINK               "\033[38;5;205m"
#define _CLR_LIGHT_PINK         "\033[38;5;218m"
#define _CLR_NEON_PINK          "\033[38;5;198m"
#define _CLR_DARK_PINK          "\033[38;5;197m"
#define _CLR_FUCHSIA            "\033[38;5;164m"
#define _CLR_MAGENTA            "\033[38;5;200m"

#define _CLR_GREY               "\033[38;5;7m"
#define _CLR_WHITE              "\033[0;97m"
#define _CLR_BLACK              "\033[0;37m"

/* bold */

#define _BOLD_CLR_RED            "\033[1;38;5;203m"
#define _BOLD_CLR_LIGHT_RED      "\033[1;38;5;1m"
#define _BOLD_CLR_DARK_RED       "\033[1;32m"

#define _BOLD_CLR_GREEN          "\033[1;38;5;10m"
#define _BOLD_CLR_LIGHT_GREEN    "\033[1;38;5;34m"
#define _BOLD_CLR_DARK_GREEN     "\033[1;38;5;118m"
#define _BOLD_CLR_LIME           "\033[1;38;5;226m"

#define _BOLD_CLR_YELLOW         "\033[1;38;5;227m"
#define _BOLD_CLR_LIGHT_YELLOW   "\033[1;38;5;220m"
#define _BOLD_CLR_DARK_YELLOW    "\033[1;38;5;208m"

#define _BOLD_CLR_ORANGE         "\033[1;38;5;214m"
#define _BOLD_CLR_LIGHT_ORANGE   "\033[1;38;5;202m"
#define _BOLD_CLR_DARK_ORANGE    "\033[1;34m"

#define _BOLD_CLR_BLUE           "\033[1;38;5;33m"
#define _BOLD_CLR_LIGHT_BLUE     "\033[1;38;5;21m "
#define _BOLD_CLR_NAVY           "\033[1;38;5;19m"
#define _BOLD_CLR_DARK_BLUE      "\033[1;38;5;14m"
#define _BOLD_CLR_CYAN           "\033[1;38;5;51m"
#define _BOLD_CLR_NEON_CYAN      "\033[1;35m"

#define _BOLD_CLR_PURPLE         "\033[1;38;5;93m"
#define _BOLD_CLR_LIGHT_PURPLE   "\033[1;38;5;91m"
#define _BOLD_CLR_DARK_PURPLE    "\033[1;38;5;205m"

#define _BOLD_CLR_PINK           "\033[1;38;5;218m"
#define _BOLD_CLR_LIGHT_PINK     "\033[1;38;5;198m"
#define _BOLD_CLR_NEON_PINK      "\033[1;38;5;197m"
#define _BOLD_CLR_DARK_PINK      "\033[1;38;5;164m"
#define _BOLD_CLR_FUCHSIA        "\033[1;38;5;200m"
#define _BOLD_CLR_MAGENTA        "\033[1;38;5;0m"

#define _BOLD_CLR_GREY           "\033[1;38;5;7m"
#define _BOLD_CLR_WHITE          "\033[1;97m"
#define _BOLD_CLR_BLACK          "\033[1;30m"

/* special */

#define _SPEC_CLR_SYRUP          "\033[38;5;52m"
#define _SPEC_CLR_AMARANTH       "\033[38;5;211m"
#define _SPEC_CLR_OLIVE          "\033[38;5;58m"
#define _SPEC_CLR_CANDYAPPLE     "\033[38;5;9m"
#define _SPEC_CLR_EMERALD        "\033[38;5;121m"
#define _SPEC_CLR_FORESTGREEN    "\033[38;5;2m"     
#define _SPEC_CLR_CARAMEL        "\033[38;5;166m" 

/* special bold */

#define _SPEC_BOLD_CLR_SYRUP          "\033[1;38;5;52m"
#define _SPEC_BOLD_CLR_AMARANTH       "\033[1;38;5;211m"
#define _SPEC_BOLD_CLR_OLIVE          "\033[1;38;5;58m"
#define _SPEC_BOLD_CLR_CANDYAPPLE     "\033[1;38;5;9m"
#define _SPEC_BOLD_CLR_EMERALD        "\033[1;38;5;121m"
#define _SPEC_BOLD_CLR_FORESTGREEN    "\033[1;38;5;2m"     
#define _SPEC_BOLD_CLR_CARAMEL        "\033[1;38;5;166m" 


/* printf_clr */

#define printf_red(_str, ...)           { printf_c(_str, _CLR_RED           , ##__VA_ARGS__); }
#define printf_lightred(_str, ...)      { printf_c(_str, _CLR_LIGHT_RED     , ##__VA_ARGS__); }
#define printf_darkred(_str, ...)       { printf_c(_str, _CLR_DARK_RED      , ##__VA_ARGS__); }
#define printf_green(_str, ...)         { printf_c(_str, _CLR_GREEN         , ##__VA_ARGS__); }
#define printf_lightgreen(_str, ...)    { printf_c(_str, _CLR_LIGHT_GREEN   , ##__VA_ARGS__); }
#define printf_darkgreen(_str, ...)     { printf_c(_str, _CLR_DARK_GREEN    , ##__VA_ARGS__); }
#define printf_lime(_str, ...)          { printf_c(_str, _CLR_LIME          , ##__VA_ARGS__); }
#define printf_yellow(_str, ...)        { printf_c(_str, _CLR_YELLOW        , ##__VA_ARGS__); }
#define printf_lightyellow(_str, ...)   { printf_c(_str, _CLR_LIGHT_YELLOW  , ##__VA_ARGS__); }
#define printf_darkyellow(_str, ...)    { printf_c(_str, _CLR_DARK_YELLOW   , ##__VA_ARGS__); }
#define printf_orange(_str, ...)        { printf_c(_str, _CLR_ORANGE        , ##__VA_ARGS__); }
#define printf_lightorange(_str, ...)   { printf_c(_str, _CLR_LIGHT_ORANGE  , ##__VA_ARGS__); }
#define printf_darkorange(_str, ...)    { printf_c(_str, _CLR_DARK_ORANGE   , ##__VA_ARGS__); }
#define printf_blue(_str, ...)          { printf_c(_str, _CLR_BLUE          , ##__VA_ARGS__); }
#define printf_lightblue(_str, ...)     { printf_c(_str, _CLR_LIGHT_BLUE    , ##__VA_ARGS__); }
#define printf_navy(_str, ...)          { printf_c(_str, _CLR_NAVY          , ##__VA_ARGS__); }
#define printf_darkblue(_str, ...)      { printf_c(_str, _CLR_DARK_BLUE     , ##__VA_ARGS__); }
#define printf_cyan(_str, ...)          { printf_c(_str, _CLR_CYAN          , ##__VA_ARGS__); }
#define printf_neoncyan(_str, ...)      { printf_c(_str, _CLR_NEON_CYAN     , ##__VA_ARGS__); }
#define printf_purple(_str, ...)        { printf_c(_str, _CLR_PURPLE        , ##__VA_ARGS__); }
#define printf_lightpurple(_str, ...)   { printf_c(_str, _CLR_LIGHT_PURPLE  , ##__VA_ARGS__); }
#define printf_darkpurple(_str, ...)    { printf_c(_str, _CLR_DARK_PURPLE   , ##__VA_ARGS__); }
#define printf_pink(_str, ...)          { printf_c(_str, _CLR_PINK          , ##__VA_ARGS__); }
#define printf_lightpink(_str, ...)     { printf_c(_str, _CLR_LIGHT_PINK    , ##__VA_ARGS__); }
#define printf_neonpink(_str, ...)      { printf_c(_str, _CLR_NEON_PINK     , ##__VA_ARGS__); }
#define printf_darkpink(_str, ...)      { printf_c(_str, _CLR_DARK_PINK     , ##__VA_ARGS__); }
#define printf_fuchsia(_str, ...)       { printf_c(_str, _CLR_FUCHSIA       , ##__VA_ARGS__); }
#define printf_magenta(_str, ...)       { printf_c(_str, _CLR_MAGENTA       , ##__VA_ARGS__); }
#define printf_grey(_str, ...)          { printf_c(_str, _CLR_GREY          , ##__VA_ARGS__); }
#define printf_white(_str, ...)         { printf_c(_str, _CLR_WHITE         , ##__VA_ARGS__); }
#define printf_black(_str, ...)         { printf_c(_str, _CLR_BLACK         , ##__VA_ARGS__); }

/* printf_bold_clr */

#define printf_bold_red(_str, ...)         { printf_c(_str, _BOLD_CLR_RED           , ##__VA_ARGS__); }
#define printf_bold_lightred(_str, ...)    { printf_c(_str, _BOLD_CLR_LIGHT_RED     , ##__VA_ARGS__); }
#define printf_bold_darkred(_str, ...)     { printf_c(_str, _BOLD_CLR_DARK_RED      , ##__VA_ARGS__); }
#define printf_bold_green(_str, ...)       { printf_c(_str, _BOLD_CLR_GREEN         , ##__VA_ARGS__); }
#define printf_bold_lightgreen(_str, ...)  { printf_c(_str, _BOLD_CLR_LIGHT_GREEN   , ##__VA_ARGS__); }
#define printf_bold_darkgreen(_str, ...)   { printf_c(_str, _BOLD_CLR_DARK_GREEN    , ##__VA_ARGS__); }
#define printf_bold_lime(_str, ...)        { printf_c(_str, _BOLD_CLR_LIME          , ##__VA_ARGS__); }
#define printf_bold_yellow(_str, ...)      { printf_c(_str, _BOLD_CLR_YELLOW        , ##__VA_ARGS__); }
#define printf_bold_lightyellow(_str, ...) { printf_c(_str, _BOLD_CLR_LIGHT_YELLOW  , ##__VA_ARGS__); }
#define printf_bold_darkyellow(_str, ...)  { printf_c(_str, _BOLD_CLR_DARK_YELLOW   , ##__VA_ARGS__); }
#define printf_bold_orange(_str, ...)      { printf_c(_str, _BOLD_CLR_ORANGE        , ##__VA_ARGS__); }
#define printf_bold_lightorange(_str, ...) { printf_c(_str, _BOLD_CLR_LIGHT_ORANGE  , ##__VA_ARGS__); }
#define printf_bold_darkorange(_str, ...)  { printf_c(_str, _BOLD_CLR_DARK_ORANGE   , ##__VA_ARGS__); }
#define printf_bold_blue(_str, ...)        { printf_c(_str, _BOLD_CLR_BLUE          , ##__VA_ARGS__); }
#define printf_bold_lightblue(_str, ...)   { printf_c(_str, _BOLD_CLR_LIGHT_BLUE    , ##__VA_ARGS__); }
#define printf_bold_navy(_str, ...)        { printf_c(_str, _BOLD_CLR_NAVY          , ##__VA_ARGS__); }
#define printf_bold_darkblue(_str, ...)    { printf_c(_str, _BOLD_CLR_DARK_BLUE     , ##__VA_ARGS__); }
#define printf_bold_cyan(_str, ...)        { printf_c(_str, _BOLD_CLR_CYAN          , ##__VA_ARGS__); }
#define printf_bold_neoncyan(_str, ...)    { printf_c(_str, _BOLD_CLR_NEON_CYAN     , ##__VA_ARGS__); }
#define printf_bold_purple(_str, ...)      { printf_c(_str, _BOLD_CLR_PURPLE        , ##__VA_ARGS__); }
#define printf_bold_lightpurple(_str, ...) { printf_c(_str, _BOLD_CLR_LIGHT_PURPLE  , ##__VA_ARGS__); }
#define printf_bold_darkpurple(_str, ...)  { printf_c(_str, _BOLD_CLR_DARK_PURPLE   , ##__VA_ARGS__); }
#define printf_bold_pink(_str, ...)        { printf_c(_str, _BOLD_CLR_PINK          , ##__VA_ARGS__); }
#define printf_bold_lightpink(_str, ...)   { printf_c(_str, _BOLD_CLR_LIGHT_PINK    , ##__VA_ARGS__); }
#define printf_bold_neonpink(_str, ...)    { printf_c(_str, _BOLD_CLR_NEON_PINK     , ##__VA_ARGS__); }
#define printf_bold_darkpink(_str, ...)    { printf_c(_str, _BOLD_CLR_DARK_PINK     , ##__VA_ARGS__); }
#define printf_bold_fuchsia(_str, ...)     { printf_c(_str, _BOLD_CLR_FUCHSIA       , ##__VA_ARGS__); }
#define printf_bold_magenta(_str, ...)     { printf_c(_str, _BOLD_CLR_MAGENTA       , ##__VA_ARGS__); }
#define printf_bold_grey(_str, ...)        { printf_c(_str, _BOLD_CLR_GREY          , ##__VA_ARGS__); }
#define printf_bold_white(_str, ...)       { printf_c(_str, _BOLD_CLR_WHITE         , ##__VA_ARGS__); }
#define printf_bold_black(_str, ...)       { printf_c(_str, _BOLD_CLR_BLACK         , ##__VA_ARGS__); }

/* SPECIAL PRINTF */

#define printf_syrup(_str, ...)             { printf_c(_str, __SPEC_CLR_SYRUP         , ##__VA_ARGS__); }
#define printf_amaranth(_str, ...)          { printf_c(_str, __SPEC_CLR_AMARANTH      , ##__VA_ARGS__); }
#define printf_olive(_str, ...)             { printf_c(_str, __SPEC_CLR_OLIVE         , ##__VA_ARGS__); }
#define printf_candyapple(_str, ...)        { printf_c(_str, __SPEC_CLR_CANDYAPPLE    , ##__VA_ARGS__); }
#define printf_emerald(_str, ...)           { printf_c(_str, __SPEC_CLR_EMERALD       , ##__VA_ARGS__); }
#define printf_forestgreen(_str, ...)       { printf_c(_str, __SPEC_CLR_FORESTGREEN   , ##__VA_ARGS__); }
#define printf_caramel(_str, ...)           { printf_c(_str, __SPEC_CLR_CARAMEL       , ##__VA_ARGS__); }

/* BOLD SPECIAL PRINTF */

#define printf_bold_syrup(_str, ...)        { printf_c(_str, __SPEC_BOLD_CLR_SYRUP         , ##__VA_ARGS__); }
#define printf_bold_amaranth(_str, ...)     { printf_c(_str, __SPEC_BOLD_CLR_AMARANTH      , ##__VA_ARGS__); }
#define printf_bold_olive(_str, ...)        { printf_c(_str, __SPEC_BOLD_CLR_OLIVE         , ##__VA_ARGS__); }
#define printf_bold_candyapple(_str, ...)   { printf_c(_str, __SPEC_BOLD_CLR_CANDYAPPLE    , ##__VA_ARGS__); }
#define printf_bold_emerald(_str, ...)      { printf_c(_str, __SPEC_BOLD_CLR_EMERALD       , ##__VA_ARGS__); }
#define printf_bold_forestgreen(_str, ...)  { printf_c(_str, __SPEC_BOLD_CLR_FORESTGREEN   , ##__VA_ARGS__); }
#define printf_bold_caramel(_str, ...)      { printf_c(_str, __SPEC_BOLD_CLR_CARAMEL       , ##__VA_ARGS__); }

/* reset */

void resetcolor();

/* GLOBAL */

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


/* GLOBAL BOLD */

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

void bold_clr_black(); // \033[1;30m
void bold_clr_grey();  // \033[1;38;5;7m
void bold_clr_white(); // \033[1;97m


/* SPECIAL */

void clr_syrup();            // \033[38;5;52m
void clr_amaranth();        // \033[38;5;211m
void clr_olive();          // \033[38;5;58m
void clr_candyapple();    // \033[38;5;9m
void clr_emerald();      // \033[38;5;121m
void clr_forestgreen(); // \033[38;5;2m
void clr_caramel();    // \033[38;5;166m

/* BOLD SPECIAL */

void clr_syrup();            // \033[1;38;5;52m
void clr_amaranth();        // \033[1;38;5;211m
void clr_olive();          // \033[1;38;5;58m
void clr_candyapple();    // \033[1;38;5;9m
void clr_emerald();      // \033[1;38;5;121m
void clr_forestgreen(); // \033[1;38;5;2m
void clr_caramel();    // \033[1;38;5;166m


#endif
