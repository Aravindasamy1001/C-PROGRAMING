#include<stdio.h>
typedef struct{
char str1[20];
char str2[20];
}oneC;


int count(oneC *as){
char *p=as->str1;
int t=0;
while(*p!='\0'){
if(*p=='a'){
t++;
}//string one in structure.
p++;
}
p=as->str2;
while(*p!='\0'){
if(*p=='a'){
t++;
}//strint two in structure.
p++;
}
return t;
}
int main(){

oneC as;
printf("enter the string:\n");

scanf("%s",as.str1);
scanf("%s",as.str2);

int s=count(&as);
printf("%d",s);

return 0;
}
