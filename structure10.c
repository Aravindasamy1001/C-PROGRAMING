
#include<stdio.h>

struct vehicle{
char car[10];
};

struct engine{
struct vehicle car1;
char type [10];
int cylinders;
float hp;
float torque;
int topspeed;
};

int main(){
//datatype struct variable main fun variable
struct engine v={{"ferrari"},"twinturbo",8,660.00,3000.00,330};

printf("car specifications:\n");
printf("brand:%s\n",v.car1.car);// main fun variable,nest struct variable struct variable
printf("engine type:%s\n",v.type);
printf("cylinders count:%d\n",v.cylinders);
printf("horsepower:%.2f\n",v.hp);
printf("torque:%.2f\n",v.torque);
printf("car topspeed:%d\n",v.topspeed);

return 0;
}
