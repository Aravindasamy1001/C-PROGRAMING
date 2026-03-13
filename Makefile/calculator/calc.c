#include<stdio.h>
#include "calc.h"

void cal(int a,int b,char c)
{
if(c=='+'){
printf("sum of a+b=%d\n",a+b);
}
else if(c=='-'){
printf("sub of a-b=%d\n",a-c);
}
else if(c=='*'){
printf("multiple of a*c=%d\n",a*b);
}
else if(c=='/'){
printf("divition of a/b=%d\n",a/b);
}
}



