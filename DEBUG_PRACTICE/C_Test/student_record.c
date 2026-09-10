#include<stdio.h>

typedef struct{

char name[20];
int roll;
int mark;
}student;

void printresult(){
student s1;

printf("enter student details\n");
printf("enter student name\n");
scanf("%s",s1.name);

printf("enter student roll number\n");
scanf("%d",&s1.roll);

printf("enter student mark\n");
scanf("%d",&s1.mark);

if(s1.mark >= 40){

printf("STUDENT RESULT = PASS.\n");
printf("name %s\n",s1.name);
printf("roll number %d\n",s1.roll);
printf("mark %d\n",s1.mark);
}
else{
printf("STUDENT RESULT = FAIL.\n");
printf("name %s\n",s1.name);
printf("roll number %d\n",s1.roll);
printf("mark %d\n",s1.mark);
}
}
int main(){

printresult();

return 0;
}
