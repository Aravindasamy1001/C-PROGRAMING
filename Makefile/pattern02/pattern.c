#include<stdio.h>
#include "pattern.h"

void patterns(int row,int n)
{

int space;
int star;

for(row=1;row<=5;row++){

    for(space=1;space<row;space++){

        printf(" ");
     }
    for(star=0;star<=n-row;star++){

       printf("*");
     }

printf("\n");
}
 
}

