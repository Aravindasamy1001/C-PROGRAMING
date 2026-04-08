#include<stdio.h>

int *point()
{
static int as=99;

return &as;
}

int main(){

int *p=point();

printf("%d\n",*p);

return 0;
}

