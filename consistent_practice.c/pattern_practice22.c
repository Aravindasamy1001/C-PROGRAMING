#include<stdio.h>
int main(){

int x=5;

for(int i=1;i<=x;i++){
	//top of the diamond.
	for(int j=1;j<=x-i;j++){
		printf(" ");
	}
	for(int k=1;k<=2*i-1;k++){
		printf("A");
	}
printf("\n");
}
for(int i=x-1;i>=1;i--){
	//bottom of the diamond.
	for(int j=1;j<=x-i;j++){
	       printf(" ");
	}
        for(int k=1;k<=2*i-1;k++){
	       printf("S");
	}
printf("\n");
}

return 0;
}

