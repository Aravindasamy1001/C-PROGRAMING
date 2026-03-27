#include<stdio.h>
int main(){

int a,v;
printf("enter a number for toggle:\n");
scanf("%d",&a);
printf("enter a position to toggle:\n");
scanf("%d",&v);

a=a^(1<<v);

printf("after toggle :%d\n",a);

return 0;
}
