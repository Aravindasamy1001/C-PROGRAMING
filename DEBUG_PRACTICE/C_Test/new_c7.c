#include<stdio.h>

int main(){

int array[10]={24,56,321,987,90,64,33,400};
int i,max1,max2=array[0];
max1=array[0];

for(i=0;i<10;i++){

if(array[i]>max2 && array[i]<max1){
max2= array[i];
}
if(array[i] > max1){
max2=max1;
max1=array[i];

}
}

printf("max1= %d\nmax2= %d\n",max1,max2);

return 0;
}

