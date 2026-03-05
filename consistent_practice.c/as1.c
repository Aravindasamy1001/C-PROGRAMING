#include<stdio.h>

int fun(int as[],int n){
int max=as[0];
for(int i=0;i<n;i++){
if(as[i]>max){
max=as[i];
}
}
return max;
}

int main(){

int as[4]={78,200,554,22};
int m;
int size=sizeof(as)/sizeof(as[0]);
m=fun(as,size);

printf("max=%d",m);
return 0;
}
