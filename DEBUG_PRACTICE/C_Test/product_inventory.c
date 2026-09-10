#include<stdio.h>

typedef struct{

char name[20];
float price;
int qty;
}product;

int findmostexpensive(product ar[],int n){
int i;
for(i=0;n<=n;i++){

if(ar[1].price>ar[2].price){
printf("most expensive product\n");
printf(" %s\n %f\n %d\n",ar[0].name,ar[0].price,ar[0].qty);
}
else{
printf("most expensive product\n");
printf(" %s\n %f\n %d\n",ar[1].name,ar[1].price,ar[1].qty);
}
}
return i;
}
int main(){


product ar[2]={{"bike",15000.60,10},{"car",300000.534,7}};
int n=2;

int k=findmostexpensive(ar[],n);
printf("%d\n",k);

return 0;
}

