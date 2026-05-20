#include<stdio.h>
int main(){

	int i=2;

	char *p=(char*)&i;

	if(*p==2){
		printf("litile endian\n");
	}
	else
		printf("big end\n");

	return 0;
}
