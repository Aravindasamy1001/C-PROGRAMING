#include<stdio.h>
int main(){

int x=5;

for(int i=0;i<x;i++){

   for(int s=1;s<x-i;s++){
      printf(" ");
      }

   for(int v=0;v<x;v++){
      printf("*");
      }

printf("\n");

}

return 0;
}
