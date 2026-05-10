#include<stdio.h>
#include "max.h"


int main(){

	float mx[10]={23.4235,65.68,87.90,43.21,101.454,65.096,88.52,36.77,71.30,98.99};

	float mz=0;
        int n=sizeof(mx)/sizeof(mx[0]);

	printf("second max value in float array:\n");

	mz=max1(mx,n);

	printf("max value of float array:\n");
        printf("%.3f\n",mz);
        
	return 0;
}
