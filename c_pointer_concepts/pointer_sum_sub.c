#include<stdio.h>

void fun(int x,int y,int *sum,int *diff){
*sum=x+y;
*diff=x-y;//store variable from main
}

int main(){
int x=23;
int y=19;
int sum,diff;

fun(x,y,&sum,&diff);

printf("sum of x+y:%d\n",sum);
printf("difference of x-y:%d\n",diff);

return 0;
} 





