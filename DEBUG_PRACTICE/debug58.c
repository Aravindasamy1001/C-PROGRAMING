#include<stdio.h>

void fun(int x){

printf("%d\n",x);

if(x>1){
fun(x/2);

printf("%d",x);
}

}

int main(){

fun(8);

return 0;
}
