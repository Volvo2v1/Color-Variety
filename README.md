# Color Variety - Color library for C programming language

Make your console applications pretty with variety of colors!


**Compatible with:**
* [x] Any shell with PS1 support //(PS1)


## Building:

### Local:

**Building:** `make`

**Linking:**  `gcc example.c clr.o`

**Include:**  `#include "color.h"`

### System-wide:

**Installing:** `make install`

**Linking:**    `gcc example.c -lcolor`

**Include:**    `#include <ykb39/color.h>`

**Uninstall:**  `make uninstall`


## Sample usage:
```
// Local
#include "color.h"

// System-wide
#include <ykb39/color.h>

#include <stdio.h>

void main() {
    /* Print one line of red text: */
    printf_red("Red Text\n");

    /* Print one line of formatted text */
    int x = 3;
    printf_red("int x = %d\n", x);

    /* Init color (Colorize multiple lines): */
    clr_red();
    printf("First red line\n");
    printf("Second red line\n);
    
    /* Remove color output (reset color): */
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
