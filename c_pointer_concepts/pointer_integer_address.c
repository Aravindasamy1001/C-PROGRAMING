#include<stdio.h>
int main(){

int orange=25;
int *unit;
unit=&orange;

printf("value of orange:%d\n",orange);
printf("integer address using *:\n");
printf("integer orange address:%p\n",&orange);
printf("value at the unit:%p\n",unit);
printf("address of pointer unit:%p\n",&unit);
printf("dereferance of *unit:%d\n",*unit);

return 0;
}
