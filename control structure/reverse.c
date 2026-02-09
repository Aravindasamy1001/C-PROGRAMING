#include<stdio.h>
int main(){

int a;
int rev=0;
int rem=0;
 printf("enter a numbers:");
scanf("%d",&a);

while(a!=0){
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
printf("reverse number:%d",rev);
return 0;
}
