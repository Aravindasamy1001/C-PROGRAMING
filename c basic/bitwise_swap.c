#include<stdio.h>
int main(){

int a=8;
int b=10;

a=a^b;
b=a^b;
a=a^b;

printf("after swap:\na=%d\nb=%d",a,b);

return 0;

}
