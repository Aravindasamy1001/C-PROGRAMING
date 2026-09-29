#include<stdio.h>

void change(int ar[],int in){

for(int i=0;i<10;i++){

if(i==in | i>=in && i<9){

   ar[i]=ar[i+1];
   }
else if (i==9)
   ar[i]=0;

  }

}

int main(){

int ar[10]={0,1,2,3,4,5,6,7,8,9};
int r;

printf("0-9 enter a index to remove from array.\n");
scanf("%d",&r);

change(ar,r);
for(int i=0;i<10;i++){

printf("%d ",ar[i]);

}
printf("\n");
return 0;
}
