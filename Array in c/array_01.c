#include<stdio.h>
int main(){

	int as[10]={11,22,33,44,55,66,77,88,99,100};
        int n=sizeof(as)/sizeof(as[0]);

	for(int i=0;i<n;i++){

		printf("address %p\n = value %d\n",&as[i],as[i]);

	}

	return 0;
}
