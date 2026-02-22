#include<stdio.h>

int main()
{
int x=100;

int *point = NULL;//when pointer is null cant dereference

point=&x;//after pointer point x address

if(point !=NULL){
*point=590;
printf("pointer :%d\n",*point);

}

return 0;

}

