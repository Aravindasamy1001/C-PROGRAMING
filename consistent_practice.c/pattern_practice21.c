#include<stdio.h>
int main(){

int x=6;

//top of the diamod

for(int i=1;i<=x;i++){

   for(int j=1;j<=x-i;j++){
      printf(" ");
    }
   printf("a");

   if(i>1){

    for(int j=1;j<=2*i-3;j++){
    printf(" ");
    }
   printf("A");
}

printf("\n");

}
for(int i = x - 1; i >= 1; i--) {

        // left spaces
        for(int j = 1; j <= x - i; j++) {
            printf(" ");
        }

        printf("s");

        if(i > 1) {
            for(int j = 1; j <= 2*i - 3; j++) {
                printf(" ");
            }
            printf("S");
        }

        printf("\n");
    }

    return 0;
}
