#include<stdio.h>

int sumof(int a){
int d=0;
while(a!=0){
a=a/10;
d++;
}
return d;
}
int main(){

int a,digits;

printf("enter a integer:\n");
scanf("%d",&a);

digits=sumof(a);

printf("sum of digits:%d\n",digits);

return 0;

}
