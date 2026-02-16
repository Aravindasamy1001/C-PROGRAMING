#include<stdio.h>

typedef struct{
char name[20];
int roll;
float mark;
}student;

int main()
{
student s1[5];
int i;
int topper=0;

//input details
for(i=0; i<5; i++){

printf("enter a details of students:%d\n",i+1);
printf("enter a student name:\n");
scanf("%s",s1[i].name);

printf("enter a roll number:\n");
scanf("%d",&s1[i].roll);

printf("enter student marks:\n");
scanf("%f",&s1[i].mark);
}

//find topper
for(i=0; i<=5; i++){
if(s1[i].mark>s1[topper].mark){
topper=i;
}
}
//print output
printf("topper details\n");
printf("name:%s\n",s1[topper].name);
printf("roll no:%d\n",s1[topper].roll);
printf("mark:%f\n",s1[topper].mark);

return 0;
}
