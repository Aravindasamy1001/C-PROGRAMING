
#include<stdio.h>
int main(){

int as[6]={10,20,30,40,50,60};
int i,s;

for(i=0;i<6;i++){

as[i]=as[i+1];

}
as[5]=0;
printf("moved elemnets of array:\n");
for(i=0;i<6;i++){

printf("%d",as[i]);

}

return 0;
}
