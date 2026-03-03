#include<stdio.h>

void sort(int *as,int n){
int i,j;
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(as[j]>as[j+1]){
int temp=as[j];
as[j]=as[j+1];
as[j+1]=temp;
}
}
}
printf("ascending sort array:\n");
for(i=0;i<n;i++){
printf("%d\n",as[i]);
}
}

int main(){

int as[6]={30,10,55,47,99,8};
int size=sizeof(as)/sizeof(as[0]);

sort(as,size);

return 0;
}

