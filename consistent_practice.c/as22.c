#include<stdio.h>
#include<string.h>

typedef struct{

char mp[10][20];

char mc[10][20];

}processor;

int main(){

char find[20];

processor pc={
{"8085","8086","intel pentium","intel i3","intel i5","intel i7","intel i9","amd ryzen 3","amd ryzen 5","amd ryzen 7",},
{"8051","8052","at89c51","atmega328","pic16f877a","arduino uno","esp32","stm32","esp8266","arduino nano"}
};

printf("enter device name:\n");
fgets(find,sizeof(find),stdin);
find[strcspn(find,"\n")]=0;
//check microprocessor.
for(int i=0;i<10;i++){

  if(strcmp(find, pc.mp[i])==0){
printf("this is microprocessor\n");

return 0;
}
}
//check microcontrollers.
for(int i=0;i<10;i++){

    if(strcmp(find, pc.mc[i])==0){

printf("this is microcontroller\n");

return 0;
}
}
printf("unknown\n");

return 0;
}
