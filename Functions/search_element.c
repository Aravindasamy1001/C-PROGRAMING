#include<stdio.h>

void search(int as[],int n,int in){

for(int i=0;i<n;i++)
{
if(in==i){
printf("element value in array:%d\n",as[in]);
}
}
}
int main(){

int as[6]={36,86,12,66,98,17};
int size=sizeof(as)/sizeof(as[0]);
int index;
printf("search inside the array(0-5):\n");
scanf("%d",&index);

search(as,size,index);

return 0;
}
