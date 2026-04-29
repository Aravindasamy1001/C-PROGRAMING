#include<stdio.h>
int main(){

int x=5;

for(int i=0;i<x;i++){

   for(int s=1;s<2*(x-i)-1;s++){
       printf(" ");
   }

   for(int v=0;v<=2*i;v++){
      printf("* ");
   }

printf("\n");

}

return 0;
}
