#include<stdio.h>


void pri(int c){

	if(c==2 || c==0){
	printf("prime number.\n");
         }
	while(c!=0&&c!=2){

	c=c&1;
	if(c>>0!=0){
		printf("prime number:\n");
                break;
	}
	else{
		printf("not prime number:\n");
		break;
	}
	}
}





int main(){

	int p;
	printf("enter a number:\n");
	scanf("%d",&p);

	pri(p);

return 0;
}
