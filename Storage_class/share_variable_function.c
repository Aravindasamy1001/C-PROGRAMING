#include<stdio.h>

void fun1();
void fun2();

int main(){

fun1();
fun2();

return 0;
}

static int as=17;

void fun1()
{

printf("%d\n",as);
}
void fun2(){

printf("%d\n",as);
}

