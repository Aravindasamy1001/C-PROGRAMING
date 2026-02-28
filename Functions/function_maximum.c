#include<stdio.h>

void maxi(int a,float b){
float c=0;
if((float)a>b){
c=a;
}
else if(b>(float)a){
c=b;
}

printf("maximum value is :%.2f\n",c); 

}

int main(){

int a;
float b;


printf("enter a two numbers\n");
scanf("%d",&a);
scanf("%f",&b);

maxi(a,b);

return 0;

}
