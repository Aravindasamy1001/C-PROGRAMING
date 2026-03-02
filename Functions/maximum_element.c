#include<stdio.h>

int  maxi(int *point){
int max=0;
for(int i=0; i<5; i++){
if(*(point+i)>max){
max=*(point+i);
}
}
return max;
}

int main(){

int as[5]={32,43,15,62,80};
int max;
max=maxi(as);

printf("maximum element in array:%d\n",max);

return 0;

}
