#include<stdio.h>

typedef struct{
double  deposit,withdraw,balance;
}bank;

int main(){
bank account;
double current;
double neww;
account.balance=105906.32;

printf("for the deposit:\n");
scanf("%lf",&account.deposit);
printf("for the withdraw:\n");
scanf("%lf",&account.withdraw);

neww=account.balance+account.deposit;
current=neww-account.withdraw;
printf("current balance:%lf",current);

return 0;
}
