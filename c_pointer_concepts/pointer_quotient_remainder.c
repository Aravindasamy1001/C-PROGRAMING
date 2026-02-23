#include<stdio.h>

void fun(int x,int y,float *quotient,float *remainder)
{
*quotient=(float)x/y;
*remainder=x%y;
}

int main(){

int x=64,y=27;

float quotient,remainder;

fun(x,y,&quotient,&remainder);

printf("quotient of x/y:%.3f\n",quotient);
printf("remainder of x y:%.3f\n",remainder);

return 0;

}
