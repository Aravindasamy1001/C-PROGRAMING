#include<stdio.h>

typedef struct{
int i;
float f;
}stu;

int main(){

stu mem={34,72.13};

stu *point=&mem;

printf("structure member i:%d\n",point->i);
printf("structure member f:%f\n",point->f);

return 0;

}
