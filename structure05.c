#include<stdio.h>

typedef struct{
int day;
int month;
int year;
}date;

int main(){
date d={29,12,1999};

if(d.month<1||d.month>12){
printf("invalid month");
return 0;
}
else if(d.day<1||d.day>31){
printf("invalid day");
return 0;
}
else{
printf("vaild date");
}
printf("date(day/month/year):%d/%d/%d",d.day,d.month,d.year);

return 0;
}
