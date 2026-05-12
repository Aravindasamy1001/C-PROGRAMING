#include<stdio.h>

void fabo(int f)
{
	int a=0;
        int b=1;
	int c=0;
	for(int i=0; i<f; i++){
		printf("%d ",a);

		c=a+b;
		a=b;
		b=c;
		
	}
	printf("\n");
	
}



int main(){

	int a;

	printf("enter the fabonacci series limit:\n");
	scanf("%d",&a);
        
	printf("fabonacci series:\n");
	fabo(a);

return 0;
}
