#include<stdio.h>
#include "check.h"

int checkbits(int a,int b)
{

if(a&(1<<b))
{
return 1;
}
else
return 2;

}
