#include<stdio.h>
int main(){

int *num;
int *num2;
int before;
int after;

num=&before;
num2=&after;

printf("enter two numbers:\n");
scanf("%d %d",&before,&after);



int temp=*num;
    *num=*num2;
    *num2=temp;

printf("after swap numbers:%d %d\n",*num,*num2);

return 0;
}
