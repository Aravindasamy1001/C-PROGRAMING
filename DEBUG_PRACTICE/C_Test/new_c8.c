#include<stdio.h>
#include<math.h>

int main(){

int principal,time;

float rate;
double interesta,total;

printf("enter the principal amount:\n");
scanf("%d",&principal);
printf("enter the interest rate:\n");
scanf("%f",&rate);
printf("enter time in years:\n");
scanf("%d",&time);

total=principal*((pow((1+rate/100),time)));
interesta= total-principal;

printf("total amount principal+interest=%lf\n",total);
printf("interest amount for %d years= %lf\n",time,interesta);

return 0;
}
