#include<stdio.h>
int main(){

int a=10,b=9;
int const*p=&a;
p=&b;

printf("%d\n",*p);
printf("%d\n",(10>>1));
return 0;
}
