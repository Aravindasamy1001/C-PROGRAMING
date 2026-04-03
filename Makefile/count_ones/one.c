#include<stdio.h>
#include "one.h"

int ones(int a)
{
int once=0;

while(a!=0)
{

if(a&1){

once++;

}

a=a>>1;
}

return once;
}
