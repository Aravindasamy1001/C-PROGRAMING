#include<stdio.h>

typedef union{
int i;
float f;
char c;
}un;

int main(){

un data;

data.i=99;
printf("integer value in union:%d\n",data.i);

data.f=99.999;
printf("float value in union:%.4f\n",data.f);

data.c='A';
printf("char value in union:%c\n",data.c);

return 0;
}
