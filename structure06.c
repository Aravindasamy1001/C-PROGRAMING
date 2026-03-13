#include<stdio.h>

typedef struct{
int minute,hour;
int second;
}time;

int main()
{
time t;
int total;
printf("enter a hour,minute,second:\n");
scanf("%d %d %d",&t.hour,&t.minute,&t.second);

total=(t.hour*3600+t.minute*60+t.second); //converts Hour Minute into seconds

printf("total seconds of time:%d\n",total);

return 0;
}
