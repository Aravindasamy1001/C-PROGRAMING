#include<stdio.h>

struct a{

char c;
int i;
};

struct b{

char j;
struct a k;
};
int main(){

struct b n;

printf("%zu\n",sizeof(struct b));

return 0;
}
