#include<stdio.h>


void pass(int *sa,int d){
	for(int i=0;i<d;i++){
		sa[i]*=3;
	}
}


int main(){

	int as[]={5,7,9,11};
        int size=sizeof(as)/sizeof(as[0]);

	pass(as,size);

	for(int i=0;i<size;i++){

	}
for(int i=0;i<size;i++){
printf("%d\n",as[i]);
}
printf("after change\n");

	return 0;
}
