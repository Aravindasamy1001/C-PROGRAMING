#include<stdio.h>
int main(){

int as[6]={2,4,5,2,4,5};
int a,i;
int n=sizeof(as)/sizeof(as[0]);

printf("array without duplicate\n");

for(i=0;i<n;i++){
int found=0;

for(a=0;a<i;a++){

    if(as[i]==as[a]){
        found=1;
      }
     }
if(found==0){
printf("%d",as[i]);
}
}
printf("\n");

return 0;
}

