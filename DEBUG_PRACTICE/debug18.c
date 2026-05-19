#include<stdio.h>

void sw(int a,int b){

	int tem=a;
	    a=b;
	    b=tem;
}

int main(){
	int a=10,b=20;

	sw(a,b);

	printf("call by value here orginal valude does not chnage by function\n");

	return 0;
}
