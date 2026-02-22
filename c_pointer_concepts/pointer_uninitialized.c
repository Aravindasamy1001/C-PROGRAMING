#include<stdio.h>
int main(){

int *point;
int jk=76;

*point=44;

printf("uninitialized pointer:%d",*point);
//undeifined behavior pointer stores random address

return 0;
}
