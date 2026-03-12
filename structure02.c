#include<stdio.h>
typedef struct{
int id;
char name[25];
float mark;
}detail;

int main(){
detail person;
detail student[5];
for(int i=0; i<5; i++)
{
printf("student id:\n");
scanf("%d",&student[i].id);
printf("student name:\n");
scanf("%s",student[i].name);
printf("student mark:\n");
scanf("%f",&student[i].mark);
}
//input details of students
for(int i=0; i<5; i++){
printf("student details:\n");
printf("id:%d\n",student[i].id);
printf("name:%s\n",student[i].name);
printf("mark:%.2f\n",student[i].mark);
 }//output of details
return 0;
}
