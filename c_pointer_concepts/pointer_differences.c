#include<stdio.h>
int main(){

int *phone;
int *computer;

int device1;
int device2;

phone=&device1;

*phone=11;

printf("pointer differences:\n");
printf("pointer variable address:%p\n",&phone);
printf("dereference pointer:%d\n",*phone);
printf("variable value:%d\n",device1);
printf("variable address:%p\n",&device1);

return 0;
}
