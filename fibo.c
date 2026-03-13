#include<stdio.h>
#include "fibo.h"

void nacci(int a){
int first=0;
int second=1;
int ans;
int i=0;
printf("fibonacci series:\n");
printf("%d %d",first,second);

for(i=2;i<a;i++){

ans=first+second;

printf(" %d",ans);

    first=second;
    second=ans;

}
printf("\n");

}
