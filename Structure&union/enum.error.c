#include<stdio.h>
enum errortype{
success=0,
error_timeout=1,
error_overflow=2,
error_invalidinput=3,
};
int main(){
int error;
printf("enter a code (0,1,2,3)");
scanf("%d",&error);

switch (error){
case 0:
printf("successfully runs");
break;
case 1:
printf("error:timeout!");
break;
case 2:
printf("error:overflow!");
break;
case 3:
printf("error:invalid input!");
break;
defalut:
printf("error:undefined error");
}
return 0;
}
