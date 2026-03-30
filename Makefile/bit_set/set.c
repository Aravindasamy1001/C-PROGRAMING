#include<stdio.h>
#include "set.h"

void set1(int a,int b)
{

//set bit in integer.

a=a|(1<<b);

printf("set bit in a=%d\n",a);

}
