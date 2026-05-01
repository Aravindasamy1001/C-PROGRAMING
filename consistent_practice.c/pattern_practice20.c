#include<stdio.h>
int main(){

int n=4;

for(int i=1;i<=n;i++){

//top.of diamond

for(int j=1;j<=n-i;j++){

    printf(" ");
}
printf("*");
//inside sapce

  if(i>1){
    for(int y=1;y<=2*i-3;y++){
        printf(" ");
    }
     printf("*");

    }
printf("\n");
}
//bottem of diamond

for(int i = n - 1; i >= 1; i--) {

        // left spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        printf("*");

 if(i > 1) {
    for(int j = 1;j <= 2*i - 3;j++) {
      printf(" ");
      }
      printf("*");
      }

     printf("\n");
}

 return 0;
}
