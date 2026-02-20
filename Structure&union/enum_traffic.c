#include<stdio.h>

enum traffic{
red,
yellow,
green,
};
int main(){

int b;
printf("enter a situation of traffic:");
scanf("%d",&b);

if (b==red){
printf("stop\n");
}
else if (b==yellow){
printf("get ready");
}
else if (b==green){
printf("go");
}
return 0;
}
