#include<stdio.h>
int main(){

int as[7];
int i,a=0;

printf("enter a numbers\n");
for(i=0;i<7;i++){

scanf("%d",&as[i]);

}
printf("negative number in array:\n");

for(i=0;i<7;i++){

if(as[i]<0){

printf("%d",as[i]);

}
}
printf("\n");

return 0;
}
