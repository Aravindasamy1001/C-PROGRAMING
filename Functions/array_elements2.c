#include<stdio.h>

void ay(int *point){
printf("array elements in function:\n");
for(int i=0;i<5;i++){

printf("%d\n",*(point+i));

}
}

int main(){

int as[5];

printf("enter a numbers:\n");
for(int i=0;i<5;i++){
scanf("%d",&as[i]);
}

ay(as);

return 0;
}
