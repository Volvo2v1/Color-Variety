# Color Variety - Color library for C programming language

Make your console applications pretty with variety of colors!


**Compatible with:**
* [x] Any Bash shell   //(PS1)


## Building:
**Building:** `gcc -o clr_vrt.o -c clr_vrt.c`

**Linking:**  `gcc example.c clr_vrt.o`

**Include:**  `#include "clr_vrt.h"`


## Sample usage:
```
#include "clr_vrt.h"
#include <stdio.h>

void main() {
    //Print one line of red text:
    printf_red("Red Text\n");

    //Init color (Colorize multiple lines):
    clr_red();
    printf("First red line\n");
    printf("Second red line\n);
    
    //Remove color output (reset color):
    resetcolor();

    printf("This text is not red\n");
}

```
# Screenshots

## Basic Colors
![Basic Colors](https://raw.githubusercontent.com/Volvo2v1/Color-Variety/master/screenshots/Screenshot_4533.png)

## Bold Colors
![Bold Colors](https://raw.githubusercontent.com/Volvo2v1/Color-Variety/master/screenshots/Screenshot_4534.png)

## Special Colors
![Special Colors](https://raw.githubusercontent.com/Volvo2v1/Color-Variety/master/screenshots/Screenshot_4535.png)






### Support meeeeeh ;_;
>[YouTube](https://youtube.com/Volvo2v1)

>[Donate <3](https://paypal.me/2v1)
