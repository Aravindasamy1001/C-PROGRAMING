#include<stdio.h>

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;

}

int main(){

int product=6;
int price=100;
int *point=&product;
printf("before swap\n");
printf("product=%d\nprice=%d\n",product,price);

swap(&product,&price);
printf("after swap\n");
printf("product:%d\nprice:%d\n",product,price);

return 0;
}
