#include<stdio.h>

int main(){

extern int x;
extern int y;
extern int z;

printf("addtion\n");
printf("x+y+z=%d\n",x+y+z);
printf("subtraction\n");
printf("x-y=%d\n",x-y);

return 0;

}
