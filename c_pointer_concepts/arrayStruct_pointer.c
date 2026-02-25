#include<stdio.h>
#include<string.h>

typedef struct{

char name1[20];
char name2[20];
int  number[20];
}names;

int main(){

names gave={"Aravind","Andrew",{12,34,76,57,899}};

names *point=&gave;

printf("array of structures accessing by pointer:\n");
printf("name one:%s\n",point->name1);
printf("second name:%s\n",point->name2);
printf("array numbers:\n");
for(int i=0;i<5;i++){
printf("array numbers :%d\n",point->number[i]);
}

return 0;
}  

