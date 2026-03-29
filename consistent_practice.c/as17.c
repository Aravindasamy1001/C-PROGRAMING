#include<stdio.h>
int main(){

int row;
int space;
int star;
int limit=5;

for(row=1;row<=limit;row++){

   for(space=1;space<=limit-row;space++){
      printf(" ");
  }
      for(star=0;star<row;star++){
         printf("*");
      }
printf("\n");
}

return 0;
}
