#include<stdio.h>

struct a{char i; int k;};

union mix{

struct a aa;
long n;
};

int main(){

printf("%zu\n",sizeof(union mix));

return 0;
}
