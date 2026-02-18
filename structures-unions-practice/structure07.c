#include<stdio.h>

typedef struct{
unsigned int cat;
int dog;
}animal;

void pets(animal food)
{
int total=food.cat+food.dog;
printf("cats:%u\n",food.cat);
printf("dogs:%d\n",food.dog);
printf("total pets: %d",total);
}

int main()
{
animal cd={31,21};

pets(cd);

return 0;
} 
