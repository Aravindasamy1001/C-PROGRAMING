#include<stdio.h>
int main(){

int a=8;
int b=3;

printf("before swap variables\n");
printf("a=%d b=%d\n",a,b);

b=a+b;
a=b-a;
b=b-a;

printf("after swaped variables\n");
printf("a=%d b=%d\n",a,b);

return 0;
}
