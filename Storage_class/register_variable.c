#include<stdio.h>

void reg(){

register int R=12;

//we can not printf("%d",&R); and int *P=&R;

printf("%d\n",R);

}


int main(){

printf("we can not use address of varible in register storage class\n");

reg();

return 0;

}
