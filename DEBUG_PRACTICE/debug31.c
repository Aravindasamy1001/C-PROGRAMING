#include<stdio.h>
int main(){

 void pa(int *a,int n);//prototype.

 int arr[5]={5,4,3,2,1};

 pa(arr,5);
 return 0;
}

 void pa(int *a,int n){ 
int i;
for(i=0;i<n;i++){
	 printf("%d",*(a++)+i);
 }
 }
