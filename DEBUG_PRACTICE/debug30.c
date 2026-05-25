#include<stdio.h>

int main(){

	int var1,var2,var3,minmax;

	var1=6;
	var2=5;
	var3=4;

	minmax=(var1>var2)?(var1>var3)?var1 : var3:(var2>var3)? var2:var3;

	printf("ternary:%d\n",minmax);
	return 0;
}

