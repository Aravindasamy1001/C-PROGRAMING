#include<stdio.h>
#include<math.h>

void power(double pw,double be,double *pp){

*pp=pow(pw,be);

}

int main(){

    double x,y,z;

printf("enter a number to power\n");
scanf("%lf",&x);
printf("enter a number for base\n");
scanf("%lf",&y);

power(x,y,&z);

printf("after powered number\n");
printf("%lf\n",z);

return 0;
}
