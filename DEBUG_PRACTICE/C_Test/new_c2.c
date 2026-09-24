#include<stdio.h>

typedef struct{

char name[20];
int speed;
float rpm;
float fuel;

}vehicle; 

int main(){
int i=0;
vehicle cars[5];
int n;
printf("enter a cars count\n");
scanf("%d",&n);

printf("enter a vehicles name,speed,rpm,fuel one by one\n");
for(i=0;i<n;i++){
scanf("%s",cars[i].name);
scanf("%d",&cars[i].speed);
scanf("%f",&cars[i].rpm);
scanf("%f",&cars[i].fuel);
printf("\n");
}
int max=0;
for(i=0;i<n;i++){
if(cars[i].speed>cars[max].speed){
max=i;
}
}
printf("top speed car.\n");
printf("%s.\n",cars[max].name);
printf("%dkm.\n",cars[max].speed);
printf("%frpm.\n",cars[max].rpm);
printf("%fl.\n",cars[max].fuel);

return 0;
}
