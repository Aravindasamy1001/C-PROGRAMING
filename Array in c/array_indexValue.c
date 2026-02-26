#include<stdio.h>
int main(){

int as[12]={34,56,77,90,2435,11,43,26,27,28,82,12};

int i,j;

printf("enter a index(0-11:\n");
scanf("%d",&j);

for(i=0;i<12;i++){
if(i=j){
printf("entered index value:%d",as[i]);
break;
}
}
return 0;
}
