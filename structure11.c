#include<stdio.h>

struct dob{
int day,month,year;
};

struct person{
char name[10];
struct dob dd;
};

int main(){
int age=0;
struct person detail={"cristiano",05,02,1985};

printf("name:%s\n",detail.name);
printf("DOB:%d/%d/%d\n",detail.dd.day,detail.dd.month,detail.dd.year);

age=2026-detail.dd.year;
if(detail.dd.month<detail.dd.month){
age--;
}
else if (detail.dd.month==detail.dd.month && 17<detail.dd.day)
{
age--;
}

printf("\nage:%d",age);
return 0;
}
