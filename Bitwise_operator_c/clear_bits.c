#include<stdio.h>
int main(){

int a,v;
printf("enter a number to clear\n");
scanf("%d",&a);
printf("enter a position:\n");
scanf("%d",&v);

a=a & ~(1<<v);

printf("after cleared bit =%d\n",a);

return 0;
}
