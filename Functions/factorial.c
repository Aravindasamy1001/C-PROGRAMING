#include<stdio.h>

int factorial(int b)
{
int f=1;
for(int i=1;i<=b;i++){
f=f*i;
}
return f;
}
int main(){

int a,f;

printf("enter a number\n");
scanf("%d",&a);

f=factorial(a);

printf("factorial of given number:%d\n",f);

return 0;

}
