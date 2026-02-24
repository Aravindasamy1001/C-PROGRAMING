#include<stdio.h>
#include<string.h>

int main(){

char as[]="Aravind";

char copy[10];

strcpy(copy,as);
char *pn=copy;

printf("string copy :%s\n",pn);

return 0;
}
