#include<stdio.h>

struct A{

int x;
int y;
};

int main(){

struct A a={20,30};

struct A *p=&a;

p->x=100;

printf("%d %d\n",a.x,p->y);

return 0;
}
