#include<stdio.h>

struct n{
int i;
struct n *a;
};

int main(){

printf("%zu\n",sizeof(struct n));

return 0;
}
