#include<stdio.h>

void f(int *p,int *q){

	p=q;
	*p=2;
}

int main(){

	int a=1;int b=3;

	int *p=&a;
	int *q=&b;

	f(p,q);

	printf("%d ,%d\n",a,b);
}

	
