#include<stdio.h>

void fun(int x){

if(x==1)

return ;

fun(x-1);
printf("%d",x);


}

int main(){

fun(5);

return 0;
}
