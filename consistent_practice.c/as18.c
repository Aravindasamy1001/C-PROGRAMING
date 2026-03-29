#include<stdio.h>
int main(){

int row;
int space;
int star;
int n=5;

for(row=1;row<=n;row++){

   for(space=0;space<n-row;space++){

       printf(" ");
   }
   for(star=0;star<2*row-1;star++){

      printf("*");
   }
printf("\n");
}

return 0;

}
