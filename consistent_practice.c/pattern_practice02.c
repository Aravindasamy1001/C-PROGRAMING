#include<stdio.h>

int main(){

int R,C;
int line=7;

for(R=0;R<line;R++){

   for(C=0;C<=R;C++){

     printf("%c",'A'+C);
   }

    printf("\n");
}

return 0;
}

