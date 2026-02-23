#include<stdio.h>
int main(){

float *ff;//pointer variable
float fd;

ff=&fd;//variable address to pointer
fd=44.153;

float **fff=&ff;//pointer address to double ** pointer

printf("values:\n");
printf("ff variable:%f\n",fd);
printf("*ff pointer:%f\n",*ff);
printf("**fff pointer:%f\n",**fff);

printf("address:\n");
printf("address of *ff:%p\n",&ff);
printf("address of *fff:%p\n",&fff);

return 0;

}
