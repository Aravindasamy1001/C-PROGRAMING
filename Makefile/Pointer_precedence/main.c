#include<stdio.h>
#include "precedence.h"

int main(){

	int ar[]={1,2,3,4,5,6,7,8};

	int *pp=ar;
        
	int s=sizeof(ar)/sizeof(ar[0]);

	pre(ar,s);
        
	printf("pointer precedence and associativity.\n");

return 0;
}
