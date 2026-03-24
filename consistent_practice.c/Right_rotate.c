#include<stdio.h>

void rightrotate(int *as,int s,int h){
int left=s;
int right=h;
while(left<right){
int temp=*(as+left);
   *(as+left)=*(as+right);
   *(as+right)=temp;

left++;
right--;
}
}

int main(){

int as[5]={1,2,3,4,5};
int size=sizeof(as)/sizeof(as[0]);
int k=2;

rightrotate(as,0,size-1);
rightrotate(as,0,k-1);
rightrotate(as,k,size-1);

for(int i=0;i<size;i++){
printf("%d",as[i]);
}
printf("\n");

return 0;
}
