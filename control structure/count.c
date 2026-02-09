#include<stdio.h>
int main(){

int a;
int count=0;
printf("enter a numbers:");
scanf("%d",&a);

while(a!=0){
a=a/10;
count++;
}
printf("sum of digits:%d",count);
return 0;
}
