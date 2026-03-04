#include<stdio.h>

int sa(int *a,int n,int *avg){
int sum;
for(int i=0;i<n;i++){
sum+=*(a+i);
}
*avg=sum/n;

return sum;

}

int main(){
int avg;
int as[5]={23,26,27,28,21};
int size=sizeof(as)/sizeof (as[0]);

int a=sa(as,size,&avg);


printf("sum of array:%d\n",a);
printf("average of array:%d\n",avg);

return 0;

}
