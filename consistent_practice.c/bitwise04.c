#include<stdio.h>
int main(){

int a;
int b=0;
printf("enter a number:\n");
scanf("%d",&a);

a=(a|(1<<1));


printf("%d\n",a);

return 0;
}
