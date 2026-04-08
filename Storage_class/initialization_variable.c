#include<stdio.h>

int main(){

static int a=36;

//static int a=b is wrong 

static int b=45+17;

//in static  we cant initialise variable to variable

printf("%d\n",a);
printf("%d\n",b);

return 0;
}
