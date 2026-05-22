#include<stdio.h>

int main(){

	int oldva=25,newval=-25;

	int swap(int , int);
	swap(oldva,newval);

	printf("%d %d\n",oldva,newval);
	return 0;
}

int swap(int oldva,int newval){

	int temp=oldva;
	    oldva=newval;
	    newval=temp;

	    return 0;
}
