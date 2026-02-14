
#include<stdio.h>
int main()
{

int i;
int a=56;
int add=0;
for(i=1; i<=a/2;i++){
 if (a%i==0){
    add=add+i;
    } 
   }
if(a==add)
{
printf("its a perfect number\n");
}
else
{
printf("its not a perfect number\n ");
}
return 0;
}


