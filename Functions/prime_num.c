#include<stdio.h>

int prime(int n){
int k,g;
if(n<=1){
printf("not a prime number");
return 1;
}
for(int i=2;i<n;i++){
if(n%i==0){
g=1;
break;
}
}
return g;
}

int main()
{
int g,h;
printf("enter a number\n");
scanf("%d",&h);

g=prime(h);

if(g==1){
printf("its not prime number");
}
else{
printf("its a prime number");
}
return 0;
}
