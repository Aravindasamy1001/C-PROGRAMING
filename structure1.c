#include<stdio.h>
#include<stdio.h>

struct student{
int id;
char name[20];
float mark;
};
int main(){

struct student ss;

printf("enter a student id:\n");
scanf("%d",&ss.id);
printf("enter a student name:\n");
scanf("%s",ss.name);
printf("enter the student mark:\n");
scanf("%f",&ss.mark);

printf("strudent_id:%d\n",ss.id);
printf("student_name:%s\n",ss.name);
printf("student_mark:%.2f\n",ss.mark);

return 0;
}
