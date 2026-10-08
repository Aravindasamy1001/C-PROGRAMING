#include<stdio.h>

void change(int ar[],int in,int vl){

int i;
for(i=0;i<10;i++){

if(i==in)
ar[i]=vl;
}
}
int main(){

int ar[10]={1,2,3,4,0,6,0,0,0,10};
int i,a,b;
for(i=0;i<10;i++){
printf("%d ",ar[i]);
}

printf("\nenter a index to add or change\n");
scanf("%d",&a);
printf("enter a value to add or change in array\n");
scanf("%d",&b);

change(ar,a,b);

for(i=0;i<10;i++){
printf("%d ",ar[i]);
}
printf("\n");

return 0;
}
