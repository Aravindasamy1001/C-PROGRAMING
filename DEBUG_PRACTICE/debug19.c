#include<stdio.h>

int f(int n){
	static int i=1;
	if(n>=5)
		return n;
	n=n+i;
	i++;
	return f(n);
	}



int main(){
	int n=1;
         int l=f(n);

	 printf("%d\n",l);
	 return 0;
}


