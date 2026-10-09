#include<stdio.h>

int *rearry(){

static int ary[5]={1,2,3,4,5};

return ary;
}
int main(){

int *arr=rearry();

printf("array elements\n");
for(int i=0;i<5;i++){

printf("%d ",arr[i]);

}
printf("\n");
return 0;
}
