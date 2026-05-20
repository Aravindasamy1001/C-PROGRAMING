#include<stdio.h>
int main(){

	char s[10]="hello";

	s[5]='p';

	char *str="world";

	//str[2]='g'; segmantaion fault.

	printf("%s\n",s);
	printf("%s\n",str);

	return 0;
}
