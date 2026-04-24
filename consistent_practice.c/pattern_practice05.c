#include<stdio.h>
int main(){

int r,c,s;
int line=5;

for(r=0;r<5;r++){

   for(s=0;s<2*(line-r)-1;s++){

     printf(" ");
   }
   for(c=0;c<2*r+1;c++){

    printf("%c",'A'+c);
}
printf("\n");
}

return 0;
}
