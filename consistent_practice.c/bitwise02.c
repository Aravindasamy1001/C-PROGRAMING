#include<stdio.h>
int main(){

int a=8;
int b;
printf("enter to check set bit\n");
scanf("%d",&b);

if(a&(1<<b)){
printf("set bit 3\n");
}
else
printf("not set bit=%d\n",b);

return 0;
}
