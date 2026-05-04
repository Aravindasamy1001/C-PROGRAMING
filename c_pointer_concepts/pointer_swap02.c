#include<stdio.h>


void ay(int *a,int *b){

*a=*a+*b;
*b=*a-*b;
*a=*a-*b;

}


int main(){

	int k=100;
	int l=99;

ay(&k,&l);

printf("change values by pointer\n");
printf("%d\n",k);
printf("%d\n",l);

return 0;
}
