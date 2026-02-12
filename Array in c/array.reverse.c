#include<stdio.h>
int main(){
int ar[10];
int i,n;
 printf("enter a number of element:");
 scanf("%d",&n);

printf("enter a elements:");
for(i=0; i<n; i++){
scanf("%d",&ar[i]);
}
for(i=n-1; i>=0; i--){
printf("%d ",ar[i]);
}
return 0;
}
