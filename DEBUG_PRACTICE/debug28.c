#include<stdio.h>

int newval(int);

int main(){

	int ia[]={12,24,45,0};
	int i;
	int sum=0;
       for(i=0;ia[i];i++)
	{
		sum+=newval(ia[i]);
	}
       printf("%d\n",sum);
return 0;
}

int newval(int x){

	static int div=0;
	return (x/div++);
}
