#include<stdio.h>

struct mdy{

	unsigned int a;
	double b;
	long c;
};

void my(struct mdy *as){
    
	as->a=222;
	as->b=26.785343348;
	as->c=788015704598;
}
     

int main(){

	struct mdy mdy1;
	mdy1.a=111;
	mdy1.b=23.5643764;
	mdy1.c=1543478225;

	my(&mdy1);//pass structure address.
	
        printf("After change structure value in function by pointer:\n");
        printf("%u\n",mdy1.a);
	printf("%lf\n",mdy1.b);
	printf("%ld\n",mdy1.c);

	return 0;
}
