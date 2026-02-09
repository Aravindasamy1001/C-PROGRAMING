#include<stdio.h>
int main(){

int a,b,c;

printf("enter a number");
scanf("%d %d %d",&a,&b,&c);
if (a>=b&&a>=c)
printf("the largest number a:");
{ if (b>=a&&b>=c)
 printf("the largest number b:");

else
    printf("the largest number c:");
}
return 0;
}
