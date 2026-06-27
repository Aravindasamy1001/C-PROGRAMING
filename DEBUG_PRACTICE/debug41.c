#include <stdio.h>
#define sqr(x) x*x
int main() {
int i=4;
i=65/sqr(i);
printf("%d",i);

    return 0;
}

//in macros x*x  -> 64/4*4 = 16*4=64.
