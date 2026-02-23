#include<stdio.h>

void reverse(int *a){
int rem=0;
int rev=0;
while((*a)!=0){
rem=(*a)%10;
rev=rev*10+rem;
*a=*a/10;
}
printf("Reversed numbers:%d\n",rev);
}
int main(){

int  num;

printf("enter a number:\n");
scanf("%d",&num);

reverse(&num);

return 0;

}
