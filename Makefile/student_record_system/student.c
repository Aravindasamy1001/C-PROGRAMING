#include<stdio.h>
#include<string.h>
#include "student.h"
ss st[3];
int count;
void add(){
for(int i=0;i<3;i++){
printf("enter a roll number:\n");
scanf("%d",&st[i].roll);
printf("enter student name:\n");
scanf("%s",st[i].name);
printf("enter student mark:\n");
scanf("%d",&st[i].marks);
}
}
void search(int f){

for(int i=0;i<3;i++){
if(st[i].roll==f){
printf("roll number:%d\n",st[i].roll);
printf("student name:%s:\n",st[i].name);
printf("student mark:%d:\n",st[i].marks);
}
}
}
void display(int d){
for(int i=1;i<=d;i++){
printf("roll number:%d\n",st[i].roll);
printf("student name:%s\n",st[i].name);
printf("student mark:%d\n",st[i].marks);
}
}


