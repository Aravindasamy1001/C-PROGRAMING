#include<stdio.h>
int main(){

int row;
int space;
int star;
int n=5;

for(row=1;row<=n;row++){

   for(space=1;space<=row-1;space++){
      printf(" ");
   }
   for(star=1;star<=2*(n-row)+1;star++){
   printf("*");
   }

printf("\n");
}

return 0;
}
