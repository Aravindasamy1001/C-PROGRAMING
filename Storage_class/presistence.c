#include<stdio.h>

void funs(){

static int x=1;

x++;

printf("%d\n",x);
}

int main(){

funs();
funs();
funs();

return 0;
}
