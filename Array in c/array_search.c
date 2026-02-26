#include<stdio.h>
int main(){
int a[10]={11,22,33,44,55,99,66,77,88,07};
int i,scr;

printf("enter a key:");
scanf("%d",&i);
for(int j=0; j<11; j++){
if(i==a[j]){
printf("%d",j);
}
}
return 0;
}

