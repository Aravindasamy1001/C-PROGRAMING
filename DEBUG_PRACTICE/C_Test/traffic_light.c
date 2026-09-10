#include<stdio.h>

typedef enum{

red,
green,
yellow
}signal;

typedef struct{

signal color;
int duration;
}light;

int main(){

signal getnextsignal(signal l1,signal l2 ){
switch(l1){
case red: return green;

case green: return yellow;

case yellow: return red;
}
}
light l1;

l1.color=red;
l1.duration=30;

int i=getnextsignal(l1.color,l1.duration);

if(i==0){
printf("next signal RED\n");
}
else if(i==1){
printf("next signal GREEN\n");
}
else if(i==2){
printf("next signal YELLOW\n");
}

printf("%d\n",i);

return 0;
}

