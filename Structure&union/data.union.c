#include<stdio.h>

union data1{

unsigned short all;
char bit[2];
};

int main(){

union data1 b;

b.all=0x6712;

printf("byte 1:0x%X\n",b.bit[0]);
printf("byte 2:0x%Xd\n",b.bit[1]);

return 0;
}
