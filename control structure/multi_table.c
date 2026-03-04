#include<stdio.h>
int main(){

int num;
int a;

printf("enter a number:");
scanf("%d",&num);

for(a=1; a<=10; a++){

printf("%d x %d =%d\n",num,a,num*a);
}
return 0;
}
