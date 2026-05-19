#include<stdio.h>
#include<string.h>
int main(){

	char p[20];
	char *s="string";
	int leg=strlen(s);

	for(int i=0;i<leg;i++){

		p[i]=s[leg-i];
	}
		printf("%s\n",p);
	

	return 0;
}
