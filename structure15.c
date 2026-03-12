#include<stdio.h>
#include<string.h>
typedef struct{
char member1[10];
char member2[10];
char member3[10];
}members;

int main(){
members mem[2];
members *point=mem;

//input
for(int i=0; i<2; i++){
printf("enter members details:%d\n",i+1);
scanf("%s",(mem+i)->member1);
scanf("%s",(mem+i)->member2);
scanf("%s",(mem+i)->member3);
}

//output
for(int i=0; i<2; i++){
printf("accessing the member:\n");
printf("member1:%s\n",(point+i)->member1);
printf("member2:%s\n",(point+i)->member2);
printf("member3:%s\n",(point+i)->member3);
}
return 0;
}
