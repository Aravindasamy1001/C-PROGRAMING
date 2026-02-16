#include<stdio.h>

typedef struct {
char name[20];
int roll;
float mark;
}student;
int main(){
student student01={"aravind",22279,88.00};
printf("student name:%s\n",student01.name);
printf("student roll no:%d\n",student01.roll);
printf("student mark:%f\n",student01.mark);

return 0;
}
