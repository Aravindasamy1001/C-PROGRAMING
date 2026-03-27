#include<stdio.h>
int main(){

int a,v;
printf("enter a number to setbit a=\n");
scanf("%d",&a);
printf("which position to set v=\n");
scanf("%d",&v);

a=1<<v | a;

printf("after setbits a=%d\n",a);

return 0;
}

