#include<stdio.h>

void fibo(int a){
int b=0,c=1,d;
for(int i=0;i<a;i++){
printf("%d,",b);
d=b+c;
b=c;
c=d;
}
}

int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

printf("fibonacci series:\n");

fibo(n);

return 0;

}
