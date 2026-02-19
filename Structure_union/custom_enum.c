#include<stdio.h>
enum custom{
start=10,
stop=20,
pause=30,
};
int main(){
int value;
printf("enter a any one(10,20,30)");
scanf("%d",&value);

switch (value){
case start:
printf("custom:start\n");
break ;
case stop:
printf("custom:stop\n");
break ;
case pause:
printf("custom:pause\n");
break ;
defalut:
printf("invalued command\n");
}
return 0;
} 
