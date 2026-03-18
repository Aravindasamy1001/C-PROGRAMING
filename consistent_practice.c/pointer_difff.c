#include<stdio.h>
int main(){

int as[5]={11,22,33,44,55};

int *pp=as;

printf("first:%d\n",*pp);
++*pp;

printf("after:%d\n",*pp);
*pp++;
printf("next:%d\n",*pp);
*++pp;
printf("next:%d\n",*pp);

return 0;
}
