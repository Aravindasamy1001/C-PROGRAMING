#include<stdio.h>
#include "fact.h"

int main(){

int a;

printf("enter a number for factorial:\n");
scanf("%d",&a);

int value= factorial(a);

printf("value of factorial=%d\n",value);

return 0;

}
