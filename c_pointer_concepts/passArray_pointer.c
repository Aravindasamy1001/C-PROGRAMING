#include<stdio.h>
#include<string.h>

void fun(char*car1,char*car2)
{
strcpy(car1,"ferrari");
strcpy(car2,"aston martin");
}

int main(){

char car1[10];
char car2[20];

fun(car1,car2);

printf("name of car1:%s\n",car1);
printf("name of car2:%s\n",car2);

return 0;

}
