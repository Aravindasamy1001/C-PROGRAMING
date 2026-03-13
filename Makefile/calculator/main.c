#include<stdio.h>
#include "calc.h"

int main(){

int a,b;
char c;

printf("enter two numbers\n");
scanf("%d",&a);
scanf("%d",&b);

printf("operation of calculator:(+,-,*,/)\n");
scanf(" %c",&c);

cal(a,b,c);

return 0;
}
