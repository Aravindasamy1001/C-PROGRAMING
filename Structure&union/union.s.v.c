#include<stdio.h>

struct data1{

union data2{
int i;
float f;
char c;
}u;
};
int main(){

struct data1 kh;

kh.u.i=11;
printf("structure inside union int :%d\n",kh.u.i);
kh.u.f=22.22;
printf("structure inside union float:%.2f\n",kh.u.f);

return 0;
}
