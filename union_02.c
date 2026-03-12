#include<stdio.h>

typedef struct{
int num;
double d;
}stu;
typedef union{
float uf;
char uc;
}uni;

int main(){

stu stu1={98711,745454.7445};
uni uni1;
uni1.uf=43.222;

printf("sizes for structure:\n");
printf("struct int size:%zu\n",sizeof(stu1.num));
printf("struct double size:%zu\n",sizeof(stu1.d));
printf("structure size:%zu\n",sizeof(stu));

printf("sizes for union:\n");
printf("union float size:%zu\n",sizeof(uni1.uf));
printf("union char size:%zu\n",sizeof(uni1.uc));
printf("union size:%zu\n",sizeof(uni));

return 0;
}

