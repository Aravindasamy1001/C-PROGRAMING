#include<stdio.h>

int main(){

for(int i=0;i<3;i++){

static int a=5;

a++;

printf("%d\n",a);

}

return 0;
}
