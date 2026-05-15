#include<stdio.h>


void fun(int x);


int main(void){

	int a=10;
	fun(5);
	fun(6);
	return 0;
}

void fun(int x){

	int a=x*x;
        printf("%d\n",a);
	a++;
}
