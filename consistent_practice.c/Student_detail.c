#include<stdio.h>

typedef struct{
char name[20];
int age;
float mark;
}detail;

detail fun(detail d[],int n){
detail topper=d[0];

for(int i=1;i<n;i++){
if(d[i].mark>topper.mark){
topper=d[i];
}
}
return topper;
}
int main(){

detail d[3]={"alice",20,88.5,"bob",19,95.0,"carol",21,76.0};
int size=sizeof(d)/sizeof(d[0]);

detail t=fun(d,size);

printf("topper details:\n");
printf("name:%s\n",t.name);
printf("age:%d\n",t.age);
printf("mark:%.1f\n",t.mark);

return 0;

}
