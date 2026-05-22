
#include<stdio.h>

static int i=4;

int main(){

	float sum=-1;
	do
	{
		sum+=(0/i*(1.0));
	}	
	while(0<i--);
	
	printf("%.1f\n",sum);
	
return -1;
}

