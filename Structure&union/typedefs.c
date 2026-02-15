#include<stdio.h>
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned char u01;
typedef unsigned long u64;

int main(){

u16 a=4;
u32 b=6;
u01 c=7;
u64 d=100;

printf("unsigned short=%lu\n",sizeof (u16));
printf("unsigned int=%lu\n",sizeof (u32));
printf("unsigned char=%lu\n",sizeof (u01)); 
printf("unsigned long=%lu\n",sizeof (u64));

return 0;
}
