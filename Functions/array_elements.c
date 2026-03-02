#include<stdio.h>

void arr(int *point){

printf("enter a numbers<6:\n");
for(int i=0;i<5;i++){
scanf("%d",point+i);
}
}
int main(){

int  as[5];
arr(as);

for(int i=0;i<5;i++){
printf("%d\n",as[i]);
}
return 0;
}
