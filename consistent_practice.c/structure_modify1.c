#include<stdio.h>
#include<string.h>
typedef struct{
char name[20];
char work[25];
}de;
void fun(de de1[],int n){
printf("change the details of employees:\n");
for(int i=0;i<n;i++){
printf("enter employe name:\n");
scanf("%s",de1[i].name);
printf("\n");
printf("enter employe work:\n");
scanf("%s",de1[i].work);
printf("\n");
}

printf("modified successfully:\n");
}
int main(){

de de1[3]={{"aravind","embedded system"},{"arul","vlsi"},{"arun","mechanical"}};
int size=sizeof(de1)/sizeof(de1[0]);
int i;
printf("existing details of employees:\n");
for(i=0;i<size;i++){
printf("employe name:\n");
printf("%s",de1[i].name);
printf("\n");
printf("field of work:\n");
printf("%s",de1[i].work);
printf("\n");
}

fun(de1,size);

printf("after modified data:\n");
for(i=0;i<size;i++){
printf("employee name:\n");
printf("%s",de1[i].name);
printf("\n");
printf("employe work:\n");
printf("%s",de1[i].work);
printf("\n");
}
return 0;
}

