#include<stdio.h>
#include "one.h"

int main()
{

int a;
int once;

printf("enter a number to count:\n");
scanf("%d",&a);

once=ones(a);

printf("number of ones in num=%d\n",once);

return 0;
}
