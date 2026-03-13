#include<stdio.h>
typedef struct{
int id;
char name[20];
int mark;
}detail;

int main(){
int i,sdd;
detail de[3]={{222,"aravind",100},{333,"bbb",33},{444,"vvv",78}};
detail *pr=de;
printf("enter student id:\n");
scanf("%d",&sdd);

for(i=0;i<3; i++){

if((pr+i)->id==sdd){

printf("student id matched:\n");
printf("id=%d\n",(pr+i)->id);
printf("name=%s\n",(pr+i)->name);
printf("mark=%d\n",(pr+i)->mark);
break ;
}
if(sdd==0){
printf("id is not matched");
}
}
return 0;
}
