#include<stdio.h>
int main(){

	int x=99;
	int *pon=&x;

printf("address stored in pointer %p\n",pon);
printf("pointer derefrencing %d\n",*pon);
printf("pointer address %p\n",&pon);


return 0;
}
