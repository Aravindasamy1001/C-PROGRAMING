#include<stdio.h>
int main(){

int x;
printf("enter the rows\n");
scanf("%d",&x);

for(int i=1;i<=x;i++){

if(i==1||i==x){

   for(int g=0;g<x;g++){
      printf("* ");
     }
}
else{
printf("*");
for(int s=0;s<(2*x-1)-2;s++){
printf(" ");
}
printf("*");
}

printf("\n");
}

return 0;
}
