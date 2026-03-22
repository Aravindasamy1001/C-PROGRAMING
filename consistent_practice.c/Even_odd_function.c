#include<stdio.h>

void check(int as[],int n,int *a,int *b){
for(int i=0;i<n;i++){
if(as[i]&1){
(*a)++;
}
else{
(*b)++;
}
}
}
int main(){

int as[5]={20,11,5,6,90};
int a=0,b=0;
int size=sizeof(as)/sizeof(as[0]);

check(as,size,&a,&b);


printf("even numbers:%d\n",b);
printf("odd numbers:%d\n",a);

return 0;
}
