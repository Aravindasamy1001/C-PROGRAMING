#include<stdio.h>

void ch(int arr[]){
int a=6;
for(int i=0;i<5;i++){

arr[i]=a++;
}
}

int main(){

int arr[5]={1,2,3,4,5};

ch(arr);

printf("modified array of elements\n");
for(int i=0;i<5;i++){

printf(" %d",arr[i]);

}

printf("\n");
return 0;
}

