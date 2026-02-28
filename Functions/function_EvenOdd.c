#include<stdio.h>

int number(int a,int b){

b=a&1;
return b; 
}

int main(){

int a,b;

printf("enter a number\n");
scanf("%d",&a);

b=number(a,b);

if(b==1){
printf("its a odd number: 1\n");
}
else{
printf("its a even number: 0\n");
}

return 0;

}
