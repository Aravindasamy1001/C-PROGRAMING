#include<stdio.h>

void trackme(int b)
{

printf("i have been called %d times\n",b);

}

int main(){

int a,b;
printf("how many times want to track\n");

scanf("%d",&a);

for(b=1;b<=a;b++){

trackme(b);

}

return 0;
}
