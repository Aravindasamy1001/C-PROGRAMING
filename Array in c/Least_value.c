#include<stdio.h>
int main(){

int i;

int as[6];
printf("enter a arrays:\n");
for(i=0;i<6;i++){

scanf("%d",&as[i]);

}
int small1=as[0];
int small2=as[0];

for(i=0;i<6;i++){

if(as[i]<small1){

small1=as[i];

}
}
for(i=0;i<6;i++){

if(as[i]>small1 && as[i]<small2){

small2=as[i];
}
}
printf("smallest in array:%d\n",small1);
printf("second samllest in array:%d\n",small2);

return 0;
}
