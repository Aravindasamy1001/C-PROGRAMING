#include<stdio.h>
int main(){

int m=5;

//upper pyramid

for(int i=0;i<m;i++){

   for(int j=0;j<m-i-1;j++){
      printf(" ");
   }
   for(int s=0;s<2*i+1;s++){
     printf("*");
   }
printf("\n");
}
//lower pyramid

for(int i=0;i<m-1;i++){

   for(int j=0;j<i+1;j++){
      printf(" ");
   }
   for(int s=0;s<2*(m-i-1)-1;s++){
      printf("*");
   }
printf("\n");
}

return 0;
}
