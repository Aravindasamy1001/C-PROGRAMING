#include<stdio.h>

struct in{double d;char a;};

struct out{char x;struct in n;};

int main(){

printf("%zu %zu\n",sizeof(struct out),_Alignof(struct out));

return 0;
}
