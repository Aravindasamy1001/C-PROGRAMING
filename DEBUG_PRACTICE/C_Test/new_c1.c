#include<stdio.h>

int perfect(int per){
int no=0;
for(int i=1;i<=per/2;i++){

if(per%i==0){

no+=i;

}
}
return no;
}

int main(){

int a,b;

printf("enter a number to check is perfect\n");
scanf("%d",&a);

b=perfect(a);

if(b==a){

printf("given number is perfect number.\n");
}
else{
printf("given number is not perfect number.\n");
}
return 0;
}
