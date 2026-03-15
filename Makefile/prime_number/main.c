#include<stdio.h>
#include "prime.h"

int main(){

int a;
printf("enter a nuber\n");
scanf("%d",&a);

int b=pri(a);

if(b==1){

printf("its a  prime number\n");
}
else{
printf("its not a prime number\n");
}

return 0;
}
