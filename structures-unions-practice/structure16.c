#include<stdio.h>
#include<stdlib.h>
typedef struct{
char *citys;
}city;

int main(){


int n,i;

printf("enter a element:");
scanf("%d",&n);

//memory allowcate
city *area=(city*)malloc (n*sizeof(city));

if(area==NULL){
printf("memory not allowcated");
return 88;
}
for(i=0;i<n;i++){
area[i].citys=malloc(50*sizeof(char));
printf("name of the city%d\n",i+1);
scanf("%s",area[i].citys);
}
for(i=0;i<n;i++){
area[i].citys=malloc (50*sizeof(char));
printf("%s",area[i].citys);
}
free(area);
return 0;
}
