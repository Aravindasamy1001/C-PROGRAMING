#include<stdio.h>

struct mixed{

unsigned i:3;
int k;
unsigned l:5;
};

union uni{

float p;
unsigned int d;
};

struct arrver{char name[10]; int j;};
struct ptrver{char *name; int j;};

int main(){

struct ptrver ptr;
struct mixed m;

union uni nn;
nn.p=1.0;

printf("%zu\n",sizeof(m));
printf("%zu\n",sizeof(struct arrver));
printf("%zu\n",sizeof(ptr)); 
printf("%x\n",nn.d);

return 0;
}
//here alignment is concider char 1, int 4. based on that pading will add.
