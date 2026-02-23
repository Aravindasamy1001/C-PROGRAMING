#include<stdio.h>
int main(){

int as[11]={1,12,34,56,61,234,564,901,423,63,10};
int *point=&as[0];
int i;

printf("enter a number to arithmetic in pointer 0 TO 10:\n");
scanf("%d",&i);

if(i<10&&i>=0){
printf("pointer arithmetic:%d\n",*(point+i));
}
else{
printf("invalid index");
}
return 0;
}
