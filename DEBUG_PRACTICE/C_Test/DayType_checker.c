#include<stdio.h>

typedef enum{

sunday=0,
monday=1,
tuesday=2,
wednesday=3,
thursday=4,
friday=5,
saturday=6
}days;
void daytypecheck(days d){

if(d ==sunday || d ==saturday){

printf("WEEKEND\n");
}
else
printf("WEEKDAY\n");

}
int main(){
int d=0;

printf("which day to check\n");
printf("enter days as number 0 to 6:\n");
scanf("%d",&d);

daytypecheck(d);
return 0;
}
