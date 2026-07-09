#include<stdio.h>

struct fam{

int count;
int data[];
};

struct df{

float f;
double d;
float ff;

};

int main(){
struct fam fam1;
struct df df1;

printf("%zu\n",sizeof(fam1));
printf("%zu\n",sizeof(df1));


return 0;
}
