#include<stdio.h>
typedef enum{
apple,
orange,
grape,
pomegranate,
}fruit;

typedef struct{
int price;
fruit type;
}seed;

const char*getfruitname(fruit f){

switch (f){
case apple:return "apple";
case orange:return "orange";
case grape:return "grape";
case pomegranate:return "pomegranate";
}
}

int main(){
seed q1={150,orange};

printf("price of fruit:%d\n",q1.price);
printf("fruit name:%s\n",getfruitname(q1.type));
return 0;
}
