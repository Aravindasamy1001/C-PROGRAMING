#include<stdio.h>

int table(int n)
{
printf("multiplication table:\n");

for(int i=1;i<11;i++)
{
int c=n*i;

printf("%d x %d=%d\n",i,n,c);
}
}

int main(){

int n;
printf("enter a number \n");
scanf("%d",&n);

table(n);

return 0;
}
