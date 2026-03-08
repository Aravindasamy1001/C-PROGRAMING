#include<stdio.h>

int main(){

int row,col;

for(row=1;row<=5;row++){

for(col=0;col<6-row;col++){

printf("*");

}
printf("\n");

}

return 0;
}

