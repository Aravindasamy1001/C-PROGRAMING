#include<stdio.h>

union dty{
int i;
float f;
char c;
};

int main(){

union dty dt;

printf("sizeoff union :%lu\n",sizeof (dt));

dt.i=19;
printf("after assigned value:");
printf("union int value:%d\n",dt.i);

dt.f=25.43;
printf("after second declaration float:%.2f\n",dt.f);
printf("recheck the int changed or not:%d\n",dt.i);

dt.c='A';
printf("after third declaration char:%c\n",dt.c);

}
