#include<stdio.h>
int main(){



int a[]={0,1,2,3,4,5,6,7};
int *p=a;


printf("array different way printf:\n");

printf("%d\n",1[a]);
printf("%d\n",2[a]);
printf("%d\n",a[3]);
printf("%d\n",a[7]);

printf("pointer point array address.\ndifferent ways\n");
printf("%d\n",*p++);
printf("%d\n",++(*p));
printf("%d\n",(*p)++);
printf("%d\n",*p);

	return 0;
}
