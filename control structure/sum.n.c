#include<stdio.h>
int main(){

int m,g;
int sum=0;

printf("enter a number");
scanf("%d",&m);

for(g=1;g<=m; g++){
  sum=sum+g;
}
printf("sum=%d",sum);
return 0;
}
