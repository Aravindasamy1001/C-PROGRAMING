#include<stdio.h>
#include "vowel.h"


int main(){

	char a[20];
	printf("enter a string(1-20);\n");

	scanf("%s",a);

	int d=findvow(a);

	printf("number of vowels in word:\n");
	printf("%d\n",d);

return 0;
}
