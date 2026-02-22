#include<stdio.h>
int main(){

int *value;
char *data;
int n;
char d;

value=&n;
data=&d;

*value=786;
*data='Y';

printf("enter a integer num:\n");
scanf("%d",value);
printf("enter a single chatracter:\n");
scanf(" %c",data);

printf("modified int:%d\n",*value);
printf("modified char:%c\n",*data);

return 0;
}

