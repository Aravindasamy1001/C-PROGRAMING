#include<stdio.h>
int main(){

int x=5;

for(int i=0;i<x;i++){

   for(int j=0;j<x-i;j++){
      printf(" ");
      }

   for(int u=1;u<=x;u++){
      printf("%d",u);
      }

printf("\n");
}

return 0;
}
