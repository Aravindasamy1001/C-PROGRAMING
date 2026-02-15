#include<stdio.h>
#include<string.h>
typedef struct {
 int age;
 float mark;
 char name[10];
}student ;

int main()
{
student s1;

s1.age=17;
s1.mark=87;
strcpy(s1.name,"aravind");

printf("student 1 age=%d\n mark=%f\n name=%s\n",s1.age,s1.mark,s1.name);

return 0;
}
