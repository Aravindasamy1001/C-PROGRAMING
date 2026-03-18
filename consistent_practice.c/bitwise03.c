#include<stdio.h>
int main(){

int a;
int rev=0;
printf("for bitwise reverse:\n");
scanf("%d",&a);

for(int i=0;i<8;i++){

rev=(rev<<1)|(a&1);

a>>=1;

}
printf("through the bitwise:%d\n",rev);

return 0;
}
