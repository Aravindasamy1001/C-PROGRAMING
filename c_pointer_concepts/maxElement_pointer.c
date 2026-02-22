#include<stdio.h>

int fun(int *a,int size){
int i,max=*a;
for(i=1;i<size;i++){
if(*(a+i)>max){
max=*(a+i);

}
}
return max;

}
int main(){

int a[]={23,32,78,45};
int size=sizeof(a)/sizeof(a[0]);

int max=fun(a,size);

printf("maximum element:%d\n",max);

return 0;
}



