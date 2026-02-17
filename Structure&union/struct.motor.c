#include<stdio.h>
typedef enum{
cw=0,
ccw=1,
}direction;
typedef struct{
int speed;
direction m1;
}motor;

void runmotor(motor *hh,direction kk){
hh->m1=kk;
}
int main(){
motor s={100,cw};

runmotor(&s,ccw);

printf("motor speed:%d\n",s.speed);
printf("motor direction:%d\n",s.m1);

return 0;
}
