#include<stdio.h>

int pal(int a){
int given=a;
int b,rem=0,rev=0;
while(a!=0){
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
if(given==rev){
b=1;
}
else{
b=0;
}
return b;
}
int main(){

int a,b;

printf("enter a number:\n");
scanf("%d",&a);

b=pal(a);

if(b==1)
printf("given number is palindrome\n");
else
printf("given number is not palindrome\n");
return 0;
}
