#include<stdio.h>
#include<string.h>
typedef struct{

char sf[25];
int dd;
}ff;

void fun(ff aa[]){

strcpy(aa[0].sf,"cristiano");
strcpy(aa[1].sf,"GOAT");

}
int main(){

ff as[2];

int ass;

printf("enter a string:\n");
scanf("%s",as[0].sf);
printf("enter a string:\n");
scanf("%s",as[1].sf);

printf("%s",as[0].sf);
printf("\n");
printf("%s",as[1].sf);
printf("\n");

fun(as);

printf("%s",as[0].sf);
printf(" %s",as[1].sf);
printf("\n");

return 0;

}
