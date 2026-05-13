#include<stdio.h>
int main(){

	int as[10]={1,2,3,5,6};

	for(int i=7;i>=3;i--){
                if(as[i]==as[4]){
			as[i+1]=as[i];
		}
		if(as[i]==as[3]){
			as[i+1]=as[i];
			as[3]=4;
		}
	}
	

	for(int i=0;i<10;i++){
		printf("%d ",as[i]);
	}
	printf("\n");
	return 0;
}


