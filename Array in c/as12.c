#include<stdio.h>
int main(){

int as[6]={2,4,8,8,9,4};
int n=sizeof(as)/sizeof(as[0]);
int i,j;

printf("duplicate values in array:\n");

for(i=0;i<n-1;i++){

    for(j=i+1;j<n;j++){

        if(as[i]==as[j]){

           printf("%d ",as[i]);
         }
     }
}
printf("\n");

return 0;
}
