#include<stdio.h>
int main(){
int b=8;
int a=15;
printf("xor use cases(initialy a=15:\n");
a=a^a;
printf("xor anything xor itself 0:%d\n",a);
a=15;
a=a^b^b;
printf("xor is reversible:%d\n",a);
a=15;
a=a^0;
printf("anything xor 0 is same:%d\n",a);


return 0;
}
