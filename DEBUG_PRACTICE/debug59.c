#include<stdio.h>

int fun(int n){

if(n==0)
return 26;

fun(n-1);

}


int main(){

printf("%d",fun(8));

return 0;
}
