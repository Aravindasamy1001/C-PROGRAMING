#include<stdio.h>
#include<string.h>
typedef enum{
temp=0,
pressure=1,
humidity=2,
}unit;

typedef struct{
char name[20];
float value;
unit unit;
}sensor;

int main(){

sensor s1={"ms8607",25.32,2};

printf("sensor name:%s\n",s1.name);
printf("sensor value:%.3f\n",s1.value);
printf("unit:%d\n",s1.unit);

return 0;
}
