#include<stdio.h>
#include "fibo.h"

void nacci(int first,int second,int a){

if(a==0){

return ;
}

printf(" %d",first);

nacci(second,first+second,a-1);

}
