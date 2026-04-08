#include<stdio.h>

static int x=100;

void funs()
{
static int x=50;

printf("%d\n",x);
}
int main(){

funs();

return 0;
}
