#include<stdio.h>
int main(){

int x=5;


for(int i=0;i<x;i++){

   for(int s=0;s<2*i;s++){
      printf(" ");
     }

  for(int v=0;v<2*(x-i)-1;v++){
     printf("* ");
    }

printf("\n");
}

return 0;

}
