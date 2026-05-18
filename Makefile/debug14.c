#include<stdio.h>

void sw(int *a,int *b){

	int temp=*a;
  	    *a=*b;
	    *b=temp;
}

int main(){

	int a=10,b=20;

	sw(&a,&b);

	printf("%d,%d.\n",a,b);

	return 0;
}
