#include<stdio.h>
int main(){

int x=5;

for(int i=0;i<x;i++){

   for(int c=0;c<x-i;c++){
      printf(" ");
     }
   for(int d=0;d<x;d++){
      printf("%c",'A'+d);
     }

printf("\n");
}

return 0;
}
