#include<stdio.h>

union u2{

short s;
char c[2];

};

int main(){

union u2 arr[4];

printf("%zu\n",sizeof(arr));

return 0;
}
