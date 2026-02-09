#include<stdio.h>
int main(){
int num,tem,rem=0,rev=0;

printf("enter a numbers");
scanf("%d",&num);
tem=num;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if (tem==rev){
printf("its a palindrome");
}
else {
printf("its not a palindrome");
}
return 0;
}
