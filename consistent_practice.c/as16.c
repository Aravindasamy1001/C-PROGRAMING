#include<stdio.h>
int main(){

int row;
int space;
int star;

for(row=1;row<=5;row++){

    for(space=0;space<5-row;space++){
           printf(" ");
        for(star=0;star<5;star++){

            printf("*");
        }
     }
printf("\n");
}

return 0;
}
