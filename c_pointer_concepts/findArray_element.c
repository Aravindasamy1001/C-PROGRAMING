#include<stdio.h>

typedef struct{

int arr[10];

}arn;

int main(){

arn nu;
int i;
int min,max=0;

printf("enter ten numbers:\n");
for(i=0;i<10;i++){
scanf("%d",&nu.arr[i]);
}
max=nu.arr[0];
min=nu.arr[0];

for(i=1;i<10;i++){
if(nu.arr[i]>max){
max=nu.arr[i];
}

if(nu.arr[i]<min){
min=nu.arr[i];
}
}
printf("largest value in array :%d\n",max);
printf("least value in array :%d\n",min);

return 0;
}


