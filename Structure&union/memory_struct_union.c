#include<stdio.h>


typedef struct{
	int a;
	float b;
	double c;
}str;

typedef union{
	int a;
	float b;
	double c;
}uni;


int main(){

	printf("total size of structure %lu\n",sizeof(str));

        printf("total size of union %lu\n",sizeof(uni));


return 0;
}
