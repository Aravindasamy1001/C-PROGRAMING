#include<stdio.h>

union data{

unsigned short mem;
char byte[2];
};

int main(){

union data rr;

rr.mem=0x2345;

printf("total value:0x%x\n",rr.mem);

printf("raw memory :");

for(int i=0; i<sizeof(rr); i++){
printf("memory by byte:0x%x\n",rr.byte[i]);
}

return 0;
}
