#include<stdio.h>
int main(){


	int as[6]={10,20,30,40,50,60};
        int pos=4;

	for(int i=pos;i<5;i++){

			as[i]=as[i+1];
			as[i+1]=0;
		}
	
         


		for(int i=0;i<6;i++){
			printf("%d ",as[i]);
					}
printf("\n");
return 0;
}
