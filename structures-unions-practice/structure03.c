#include<stdio.h>
#include<string.h>
typedef struct{
int id;
float salary;
char department[20];
}detail;

int main()
{
detail emp[3];
int  high=0;

for(int i=0; i<3; i++){
printf("enter emloyee details:\n");//input of employees
printf("id:\n");
scanf("%d",&emp[i].id);
printf("salary:\n");
scanf("%f",&emp[i].salary);
printf("department:\n");
scanf("%s",emp[i].department);
}

for(int i=0; i<3; i++){//check who's the high salary
if(emp[i].salary>emp[high].salary){
high=i;
}
}

printf("highest salary employee:\n");//output of high salary employee
printf("ID:%d\n",emp[high].id);
printf("salary:%.2f\n",emp[high].salary);
printf("department:%s\n",emp[high].department);

return 0;
}
