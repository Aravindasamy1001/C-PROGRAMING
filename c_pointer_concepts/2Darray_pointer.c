#include<stdio.h>
int main(){

int as[3][3]={{2,4,6},{1,3,5},{9,8,7}};
int *p=&as[0][0];


printf("2D array  access by pointer:%d\n",*(*(as+2)+2));
printf("2D access:%d\n",*(*(as+1)+2));


return 0;
}
