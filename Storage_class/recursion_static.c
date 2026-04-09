#include<stdio.h>

void recur()
{
static int a=6;
a++;
printf("%d\n",a);

if(a<10){
recur();
}

}

int main(){

recur();

return 0;
}
