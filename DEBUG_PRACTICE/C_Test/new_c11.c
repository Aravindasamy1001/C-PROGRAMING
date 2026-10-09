#include<stdio.h>

int *get(int *x,int *y){

return (*x>*y)?x:y;
}

int main(){

int a=15,b=30;

int *getback=get(&a,&b);

printf("return value from function %d\n",*getback);

return 0;
}
