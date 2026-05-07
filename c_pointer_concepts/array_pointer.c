#include<stdio.h>
int main(){

	int arr[4]={2,3,4,5};
        
	char x='A';
	char *po=&x;


	printf("diffrence bitween array and pointer:\n");
	
	//array allocate memory.
	for(int i=0;i<4;i++){
	printf("%d",arr[i]);
	}
        printf("\n");

	//pointer strore address.
	printf("%c\n",*po);
        printf("%p\n",po);
	printf("%p\n",&po);

return 0;
}
