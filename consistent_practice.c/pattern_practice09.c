#include<stdio.h>
int main(){

int i,j,k;
int row=5;

for(i=0;i<row;i++){

   for(j=0;j<2*i;j++){
      printf(" ");
   }
   for(k=0;k<2*(row-i)-1;k++){
      printf("%2d",k);
  }
printf("\n");
}

return 0;
}
