#include<stdio.h>

void swap(int a,int b){

int temp=a;
a=b;
b=temp;

printf("inside function\n");
printf("a=%d,b=%d\n",a,b);
}
int main(){

int a=75;
int b=43;

printf("before swaped value:a=%d,b=%d\n",a,b);

swap(a,b);
printf("inside main()\n");
printf("after swaped value:a=%d,b=%d\n",a,b);

return 0;
}
