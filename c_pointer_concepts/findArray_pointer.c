#include<stdio.h>

typedef struct{

int ar[10];
}num;

int main(){

num as;
int *p=as.ar;
int i,a;
printf("enter ten numbers:\n");
for(i=0;i<10;i++){
scanf("%d",p);
p++;
}
p=as.ar;
int small=*p;
int big=*p;
for(i=0;i<10;i++){
if(*p<small){
small=*p;
}
if(*p>big){
big=*p;
}
p++;
}
printf("smallest value:%d\n",small);
printf("largest value:%d\n",big);

return 0;
}
