#include<stdio.h>
int main(){

int a[3][3]={
             {2,3,4},
             {5,6,7},
             {9,8,7},
            };

int (*point)[3]=a;

printf("2D matrix array:\n");
printf("{%d %d %d\n",(*point)[0],(*point)[1],(*point)[2]);

++point;

printf(" %d %d %d\n",(*point)[0],(*point)[1],(*point)[2]);

++point;

printf(" %d %d %d}\n",(*point)[0],(*point)[1],(*point)[2]);

return 0;

}
