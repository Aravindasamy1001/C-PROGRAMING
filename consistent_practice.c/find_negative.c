#include<stdio.h>
int main(){

int as1[6]={-12,34,56,-6,90,-91};

int a,b;
printf("nagative numbers in array:\n");

for(a=0;a<6;a++){

if(as1[a]<0){

printf("%d",as1[a]);

}

}
printf("\n");

return 0;
}
