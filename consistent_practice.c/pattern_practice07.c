#include<stdio.h>
int main(){

int row,i,j;
int py=5;

for(row=0;row < py;row++){

  for(i=0;i<2*row;i++){
     printf(" ");
  }

 for(j=0;j<2*(py-row)-1;j++){
    printf("%c",'A'+j);
 }

printf("\n");
}

return 0;
}
