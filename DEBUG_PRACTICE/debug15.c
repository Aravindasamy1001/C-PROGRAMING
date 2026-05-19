//pointer_function


#include<stdio.h>

//1
int *g (void){

	int x=10;

	return &x;
}
//2
int *gf (void){

	int *px;
	int *px=10;

	return &px;
}
//3 
int *gg (void){

  int *px;
 *px =(int*) malloc((sizeof(int));
  *px=10;

return px;
}i

