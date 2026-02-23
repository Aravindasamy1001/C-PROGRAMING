#include<stdio.h>
int main(){

int as[4]={65,29,51,17};
int *p=&as[0];
int i;

printf("address stored in pointer then move address=p++:%p\n",p++);
printf("valude of array index then ++=(*p)++:%d\n",(*p)++);

return 0;

}
