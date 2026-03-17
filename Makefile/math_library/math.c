#include<stdio.h>
#include<math.h>
#include"mathh.h"

void library(double a,int b)
{
double output;

output=sqrt(a);
printf("square root:%.2lf\n",output);

output=pow(a,b);
printf("power of:%.2lf\n",output);

}
