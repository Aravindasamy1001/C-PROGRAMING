#include<stdio.h>
typedef union{

int pressure;
float temperature;
}sensor;

int main(){
sensor uni;

uni.pressure=45;
printf("pressure:%d\n",uni.pressure);

uni.temperature=35.29;
printf("temperature:%.3f\n",uni.temperature);

printf("raw memory of union:\n");
printf("union int:0x%x\n",uni.pressure);
printf("union float:0x%x\n",*(unsigned int*)&uni.temperature);

return 0;
}
