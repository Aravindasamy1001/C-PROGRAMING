#include<stdio.h>

int main(){

extern int count;

count++;

printf("%d\n",count);

return 0;
}
