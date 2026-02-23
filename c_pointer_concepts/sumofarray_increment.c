#include<stdio.h>
int main(){

int as[5];
int i;
printf("enter five numbers:\n");
for(i=0;i<5;i++){
scanf("%d",&as[i]);
}
int *point=&as[0];
int sum=0;
for(i=0;i<5;i++){
sum+=*point;
point++;
}
printf("sum of array:%d\n",sum);
return 0;
}
