#include<stdio.h>
int main(){

int as1[6]={23,44,88,41,83,9};
int add=0;
int sum=0;

for(int i=0;i<6;i++){

if((as1[i]%2)!=0){

add+=as1[i];

}
if(i%2!=0){

sum+=as1[i];

}
}
printf("add of odd numbers in array:%d\n",add);
printf("add of odd index in array:%d\n",sum);

return 0;
}
