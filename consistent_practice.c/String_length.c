#include<stdio.h>
#include<string.h>
int main(){

char name[3][20];

printf("enter a name:\n");
for(int i=0;i<3;i++){
scanf("%s",name[i]);
}
int length=0;
for(int i=0;i<3;i++){
if(strlen(name[i])>length){
length=i;
}
}

printf("long name:%s",name[length]);

return 0;
}
