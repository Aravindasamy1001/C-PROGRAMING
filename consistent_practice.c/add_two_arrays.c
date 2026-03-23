#include<stdio.h>
int main(){

int as1[5]={55,34,52,76,10};
int as2[5]={66,87,90,20,6};
int add=0,sum=0;
int *p=as1;
int *pp=as2;

while(p<as1+5){

add+=(*p);
p++;
}
while(pp<as2+5){
sum+=*pp;
pp++;
}
add+=sum;
printf("sum of two arrays=%d\n",add);
return 0;
}


