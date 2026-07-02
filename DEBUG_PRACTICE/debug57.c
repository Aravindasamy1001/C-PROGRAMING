#include<stdio.h>

int fun(int x){

if(x==0)
   return 0;

return x+fun(x-1);

}

int main(){

printf("%d",fun(4));

return 0;
}
