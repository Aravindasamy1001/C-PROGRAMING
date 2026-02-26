#include<stdio.h>

int main(){

int as[10]={1,2,3,4,5,6,7,8,9,0};
int i=0;

while(i<10){

if(as[i]==5){

printf("index value:%d",i);
break;
}
i++;
}
return 0;
}
