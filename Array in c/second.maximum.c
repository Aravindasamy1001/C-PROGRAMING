#include<stdio.h>
int main(){
int a[5]={44,15,66,23,26};
int large=a[0],i;
int second=a[0];

for(i=0; i<5; i++){
  if(a[i]>large){
 second=large;
 large=a[i];
}
else if (a[i]>second && a[i]!=large){
second=a[i];
}
}
printf("second max:%d",second);
return 0;
}
