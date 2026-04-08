#include<stdio.h>

void fun(){

register int b=10;

register int c=16;

printf("before swap\n");
printf("b=%d c=%d\n",b,c);
int swap=b;
    b=c;
    c=swap;

printf("after swap\n");
printf("b=%d c=%d\n",b,c);
}

int main(){

fun();
printf("using register storage class for better performance not guarantee beause modern cpu optimize  variable storage\n");
  
return 0;
}
