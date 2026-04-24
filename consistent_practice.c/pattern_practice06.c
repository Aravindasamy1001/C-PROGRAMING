#include<stdio.h>
int main(){

int out,in,sp;
int line = 5;

for(out=0;out<line;out++){

    for(sp=0;sp<=2*(line-out)-1;sp++){
       printf(" ");
    }
    for(in=0;in<2*out+1;in++){
      printf("%d ",in+1);
    }

printf("\n");
}

return 0;
}
