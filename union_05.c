#include<stdio.h>
#include<string.h>
typedef union{
int i;
float f;
char c[2];
}demo;

int main(){
demo memory;

memory.i=89;
printf("first assign int:\n");
printf("union int:%d\n",memory.i);
printf("union float:%f\n",memory.f);

memory.f=97.65;
printf("second assign float:\n");
printf("union float:%.3f\n",memory.f);
printf("union int:%d\n",memory.i);

strcpy(memory.c,"RM");
printf("union int:%d\n",memory.i);
printf("union char:%s\n",memory.c);

return 0;
}
