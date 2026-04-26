#include<stdio.h>
int main(){

int i,j,s;
int row=5;

for(i=0;i<row;i++){

   for(j=0;j<2*i;j++){
      printf(" ");
   }

  for(s=0;s<2*(row-i)-1;s++){
     printf("%d ",1+s);
  }

printf("\n");

}

return 0;
}
