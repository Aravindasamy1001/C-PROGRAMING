#include<stdio.h>
#include<string.h>
#include"file_ops.h"

int main(){

char sy[100];
int a;
printf("select the file (1.read or 2.write):\n");
scanf("%d",&a);

if(a==1){

read();
printf("stored text\n");
}

if(a==2){
getchar(); //clears the leftover newline
write(sy);
printf("stored text:%s\n",sy);
}

return 0;

}

