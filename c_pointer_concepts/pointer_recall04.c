#include<stdio.h>


int main(){

float a=0;
float b=0;

float *p1=&a;
float *p2=&b;

*p1=25.25;
*p2=50.50;

printf("assign value by pointer\n");
printf("%f\n",a);
printf("%f\n",b);

return 0;
}
