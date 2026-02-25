#include<stdio.h>
int main(){
int a[4]={10,70,50,22};
int i,j,temp;

for(i=0; i<3; i++){
  for(j=0; j<3; j++){
     if(a[j]>a[j-1]){

       temp=a[j];
       a[j]=a[j-1];
       a[j-1]=temp;
     }
    }
   }
printf("sort array:");
for(i=0; i<4; i++){
printf(":%d",a[i]);
}
return 0;
}
