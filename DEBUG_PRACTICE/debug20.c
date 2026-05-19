#include<stdio.h>
int main(){

	int as[5];
	int r,t;
	for(int i=0;i<5;i++){

		scanf("%d",&as[i]);
	}
	int n=sizeof(as)/sizeof(as[0]);

	for(int i=0;i<n/2;i++){
		int temp=as[n-1-i];
		    as[n-1-i]=as[i];
		    as[i]=temp;
	}
	for(int i=0;i<n;i++){
		printf("%d",as[i]);
	}
	printf("\n");
	return 0;
}
           
