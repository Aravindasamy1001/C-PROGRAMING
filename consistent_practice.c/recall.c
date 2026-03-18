#include<stdio.h>

void point(int *p,double *pp){
*p=77;
*pp=89.765004;
}

int main(){

int a,b;
double c,d;

printf("enter two number(int):\n");
scanf("%d %d",&a,&b);

printf("enter two number(double)\n");
scanf("%lf %lf",&c,&d);
printf("before modify\n");
printf("a=%d,b=%d.\n",a,b);
printf("c=%lf,d=%lf.\n",c,d);

int *p=&a;
double *pp=&d;
point(p,pp);
printf("after modify\n");
printf("a=%d\n",a);
printf("d=%lf\n",d);

return 0;
}
