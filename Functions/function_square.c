#include<stdio.h>

int square(int a){

return a*a; 
}

int main(){

int a,s;

printf("enter a number\n");
scanf("%d",&a);

s=square(a);

printf("square value of given number:%d\n",s);

return 0;

}
