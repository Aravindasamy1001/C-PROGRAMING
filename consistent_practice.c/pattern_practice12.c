#include<stdio.h>
int main(){

int x=5;

//inverted right half pyramid

for(int i=1;i<=x;i++){

   for(int s=0;s<i;s++){
      printf(" ");
     }
   for(int v=0;v<=x-i;v++){
      printf("*");
     }

printf("\n");
}

return 0;
}
