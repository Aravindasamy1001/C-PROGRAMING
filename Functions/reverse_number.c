#include<stdio.h>

int rev(int a){
int r=0,rem=0;
while(a!=0){
 rem=a%10;
 r=r*10+rem;
a=a/10;
}
return r;
} 

int main(){

int a,b;

printf("enter a number:\n");
scanf("%d",&a);

b=rev(a);

printf("reversed number:%d\n",b);

return 0;
}
