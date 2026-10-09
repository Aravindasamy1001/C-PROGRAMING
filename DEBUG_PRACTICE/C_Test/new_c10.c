#include<stdio.h>

void nego(float *price){
float n1=60000000,n2=55000000,n3=50000000,n4=45000000;
float cus,c2,c3,c4;
printf("aston martin db12 model price starts at 6 crore\n");
scanf("%f",&cus);
int i=1;
while(i==1){
if(cus== *price){
printf("car sold\n");
break;
}
else{
printf("no i cant give you for this price\n");
scanf("%f",&c2);
}
if(c2>=n2){
printf("done.car sold\n");
break;
}
else{
printf("no i cant give you for this price\n");
scanf("%f",&c3);
}
if(c3>=n3){
printf("done.car sold\n");
break;
}
else
printf("no i cant give you for this price\n");
i++;
}
}

int main(){

char car[15]="aston martin";
float price=60000000;

float *ne=&price;

nego(ne);

return 0;
}
