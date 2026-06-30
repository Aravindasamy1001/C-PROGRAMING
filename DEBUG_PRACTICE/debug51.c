#include <stdio.h>
int main(){
int a[3]={1,2,3};
a[1]=a[0]+a[2];
printf("%d",a[1]);
}
