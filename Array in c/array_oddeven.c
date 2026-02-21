#include<stdio.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int n,even=0,odd=0;
for(n=0; n<10; n++){
 if(a[n]%2==0){
    even++;
}
else{
  odd++;
}
}
printf("even:%d\n",even);
printf("odd:%d\n",odd);
return 0;
}

