#include<stdio.h>


void fun(char *p,char*pp){

while(*p!='\0'){
*pp=*p;
p++;
pp++;
}
*pp='\0';
}

int main(){

char name[10]={"aravind"};
char name2[10];

fun(name,name2);

printf("string copy without index:%s\n",name2);

return 0;
}
