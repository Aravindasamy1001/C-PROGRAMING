#include<stdio.h>

void implement(int *a,int limit)
{
for(int i=0;i<limit;i++){

(*a)++;//increament call by reference

printf("increment:%d\n",*a);
 }
}

int main(){
int limit;
int vi=3;
printf("enter a limit:\n");
scanf("%d",&limit);

implement(&vi,limit);
printf("after call by reference:%d\n",vi);

return 0; 

}
