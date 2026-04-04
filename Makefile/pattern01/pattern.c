#include<stdio.h>
#include "pattern.h"

void patterns(int row,int space,int n)
{
int star;
for(row=1;row<=n;row++){
   for(space=0;space<n-row;space++){

     printf(" ");
     }
    for(star=0;star<row;star++){

    printf("*");
   }
   printf("\n");
}

}
