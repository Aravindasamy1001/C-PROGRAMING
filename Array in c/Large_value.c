#include<stdio.h>
int main(){

int i;
int as[7];
int big1=0,big2=0;
printf("enter a values of array\n");
for(i=0;i<7;i++){

scanf("%d",&as[i]);

}

for(i=0;i<7;i++){

if(as[i]>big1){
big1=as[i];
}
}
for(i=0;i<7;i++){
if((as[i]<big1) && (as[i]>big2)){

big2=as[i];
}
}
printf("largest in array:%d\n",big1);
printf("second largest in array:%d\n",big2);

return 0;
}
