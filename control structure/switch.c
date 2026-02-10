#include<stdio.h>
int main(){
char op;
int a,b;
printf("enter a operator +,-,*,/:");
scanf("%c",&op);

printf("enter two numbers:");
scanf("%d %d",&a,&b);

switch(op) {
  case '+':
    printf("result=%d",a+b);
   break;
 case '-':
   printf("result=%d",a-b);
  break;
 case '*':
   printf("result=%d",a*b);
  break;
 case '/':
   printf("result=%d",a/b);
  break;
}
return 0;
}
