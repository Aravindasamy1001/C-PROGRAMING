#include<stdio.h>
enum menu{
add,
sub,
mul,
div,
};
int main(){
int choice;
int a,b;
printf("enter your choice(0,1,2,3):");
scanf("%d",&choice);

switch (choice){
case add:
printf("enter two number:");
scanf("%d %d",&a,&b);
printf("%d\n",a+b);
break ;
case sub:
printf("enter two number:");
scanf("%d %d",&a,&b);
printf("%d\n",a-b);
break ;
case mul:
printf("enter two number:");
scanf("%d %d",&a,&b);
printf("%d\n",a*b);
break ;
case div:
printf("enter two number:");
scanf("%d %d",&a,&b);
printf("%d\n",a/b);
break ;
defalut:
printf("invalid choice");
}
return 0;
}
