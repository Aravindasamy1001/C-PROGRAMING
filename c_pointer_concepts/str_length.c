#include<stdio.h>
int main(){

char as[]="aravind";
char *p=as;
int total=0;

while(*p!='\0'){
total++;
p++;
}

printf("string length:%d\n",total);

return 0;
}

