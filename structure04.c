#include<stdio.h>
#include<string.h>
typedef struct{
int roll;
char name[20];
float mark;
}detail;

int main(){
detail student[3];
int i,sum=0;
float avg;
for(i=0; i<3; i++){
printf("enter students detail:\n");
printf("roll:\n");
scanf("%d",&student[i].roll);
printf("name:\n");
scanf("%s",student[i].name);
printf("mark:\n");
scanf("%f",&student[i].mark);
}

for(i=0; i<3; i++){
sum+=student[i].mark;
avg=sum/3.00;
}

printf("average of students mark:\n");
printf("%f",avg);
return 0;
}
