#include<stdio.h>
int main(){

int R,C,S;
int line=5;//left half pyramid for alphabets

for(R=1;R<=line;R++){

   for(S=0;S<line-R;S++){
      printf(" ");
   }
   for(C=0;C<R;C++){
      printf("%c",'A'+C);
   }

printf("\n");
}

return 0;
}
