#include<stdio.h>

int main(){

int *apple;
int fruit;

int *orange;
int fruit2;

apple=&fruit;
orange=&fruit2;

*apple=21;
*orange=15;

printf("apple value:%d\n",*apple);
printf("orange value:%d\n",*orange);

return 0;
}
