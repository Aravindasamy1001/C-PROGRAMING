#include<stdio.h>
int main(){

int a[10],i,max;
max=0;
printf("enter ten numbers=\n");
for(i=0; i<10; i++){
scanf("%d",&a[i]);
}
for(i=0; i<10; i++){
 a[i]>max;
max=a[i];
}
printf("maximum number is=%d",max);
return 0;
}
