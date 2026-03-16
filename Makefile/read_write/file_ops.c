#include<stdio.h>
#include"file_ops.h"

void read(){

printf("inside file:\n");
printf("'don't wait for \nervrything to be perfect \nbefore you decide to enjoy your life'\n");

}

void write(char fw[]){
getchar();
printf("share your thoughts here:\n");
fgets(fw,100,stdin);

}
