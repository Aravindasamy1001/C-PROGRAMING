#include<stdio.h>


void  oe(int e)
{
	if(e %2==0){
		printf("it's a even number.\n");
	}
	else{
		printf("it's a odd number.\n");
	}
}




int main(){

	int a,d;

	printf("enter a number:\n");
	scanf("%d",&a);


	oe(a);

return 0;
}
