#include<stdio.h>

union data1{
int i;
float f;
char c;
};

struct data2{
long q;
int e;
float r;
char t;
};
int main(){

union data1 zz;
struct data2 zzz;

zz.i=99;
printf("sizeof of the union:%lu\n",sizeof(zz));
printf("sizeof of the structure:%lu\n",sizeof(zzz));

printf("address of struct\n");
printf("&zzz.e=%p\n",&zzz.e);
printf("&zzz.q=%p\n",&zzz.q);
printf("&zz.i=%p\n",&zz.i);
printf("&zz.c=%p\n",&zz.c);

return 0;
}
