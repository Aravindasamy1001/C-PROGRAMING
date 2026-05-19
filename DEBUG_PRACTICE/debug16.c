#include<stdio.h>

int inr(int i){

     static int count=0;
     count = count+i;
     i++;
     return count;

}


int main(){

	int i,k;
	for(i=0;i<5;i++){
		k=inr(i);
	}
	printf("%d\n",k);
	return 0;
}
