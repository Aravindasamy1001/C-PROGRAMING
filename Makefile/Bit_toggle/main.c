#include<stdio.h>
#include "toggle.h"

int main(){

int a;
int b;
int c;

printf("enter a number to toggle:\n");
scanf("%d",&a);
printf("which position\n");
scanf("%d",&b);

c=reverse(a,b);

printf("after toggle the number:\n");
printf("%d\n",c);

return 0;

}
