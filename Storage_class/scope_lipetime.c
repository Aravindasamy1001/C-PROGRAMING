#include<stdio.h>

void fun(){

static int d=10;//storage class static, scope is entire program

d++;

printf("%d\n",d);

}

int main(){

fun();
fun();
fun();

return 0;
}
