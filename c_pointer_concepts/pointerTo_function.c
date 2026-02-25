#include<stdio.h>

typedef struct{

int unit;
double price;
char type;
}sru;

void access(sru  *point)
{
point->unit=451;
point->price=72653641.12310;//updated values
(*point).type='B';

printf("updated type:%c\n",point->type);
printf("updated unit:%d\n",(*point).unit);
printf("updated price:%lf\n",(*point).price);
}


int main(){

sru assign={367,6785432.332,'D'};

sru *point=&assign;

access(&assign);//when we give (assign) it copy in fun so orginal value remains

return 0;
}
