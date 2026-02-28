#include<stdio.h>
int mystrlen(char str[])
{
int count=0;
while(str[count] != '\0'){
count++;
}
return count;
}
int main(){
char str[]="aravindasamy";
int length=mystrlen(str);

printf("%d",mystrlen(str));
return 0;
}
