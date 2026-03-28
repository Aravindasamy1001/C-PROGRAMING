#include<stdio.h>

void leftrotate(int *as,int s,int h){
int start=s;
int end=h;
while(start<end){
int temp=*(as+start);
   *(as+start)=*(as+end);
   *(as+end)=temp;

start++;
end--;
}
}

int main(){

int as[5]={1,2,3,4,5};
int size=sizeof(as)/sizeof(as[0]);
int k=2;

leftrotate(as,0,size-1);
leftrotate(as,k,0);
leftrotate(as,k+1,size-1);

for(int i=0;i<size;i++){
printf("%d",as[i]);
}

printf("\n");

return 0;
}
