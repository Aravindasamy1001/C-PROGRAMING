#include<stdio.h>
#include "check.h"

int main(){

int a=20;
int b=2;
int check;

check=checkbits(a,b);

printf("check weather bit is 1 or 0\n");
printf("A=20 numbers b=2 position bit is =%d\n",check);

return 0;
}
