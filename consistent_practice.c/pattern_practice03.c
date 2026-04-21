#include<stdio.h>
int main(){

int R,C,s;
int line=5;//left half pyramid

for(R=1;R<=line;R++){

    for(s=0;s<line-R;s++){
      printf(" ");
  }
   for(C=0;C<R;C++){
      printf("%d",1+C);

}
printf("\n");

}

return 0;
}

