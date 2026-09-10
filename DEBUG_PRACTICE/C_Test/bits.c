#include<stdio.h>

int main(){

int a=4;

int chk=(a>>3)&1;//check bit.

printf("%d\n",chk);

int b=12;

int set=1<<0 | b;

printf("%d\n",set);

return 0;
}
