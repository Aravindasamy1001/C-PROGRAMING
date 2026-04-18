#include<stdio.h>


static inline int add(int a,int b)
{

return a+b;

}


int main(){

int c=add(4,5);

printf("addtion inline function:%d\n",c);

return 0;
} 
