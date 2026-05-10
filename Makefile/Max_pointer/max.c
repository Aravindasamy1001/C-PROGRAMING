#include<stdio.h>
#include "max.h"


float max1(float *as,int n){

	float sm;
	float ma=*as;
	float ma2=*as;

	for(int i=0;i<n;i++){

		if(*(as+i)>ma){

			ma2=ma;
			ma=*(as+i);
		}
		else if(*(as+i)<ma && *(as+i)>ma2){
			ma2=*(as+i);
		}
	}
	printf("%.3f\n",ma2);

	return ma;
}
