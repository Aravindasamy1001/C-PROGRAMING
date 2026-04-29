#include<stdio.h>
int main(){

int x=5;

for(int i=1;i<=x;i++){

   for(int s=0;s<x-i;s++){
      printf(" ");
    }
   for(int v=0;v<i;v++){
      printf("*");
    }

printf("\n");
}

return 0;
}
