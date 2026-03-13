#include<stdio.h>

typedef struct{
int num;

union{
int big;
float small;
};
}su;

int main(){
su detail;

detail.num=1;
detail.big=5643;
printf("first %d\n",detail.num);
printf("union int:%d\n",detail.big);

detail.num=2;
detail.small=69.87;
printf("second %d\n",detail.num);
printf("union float:%.3f\n",detail.small);

return 0;
}

