#include<stdio.h>

typedef struct{

int d;
float f;

}sm;

void funt(sm rs[],int n){

for(int i=0;i<n;i++){
printf("change int values:\n");
scanf("%d",&rs[i].d);
printf("change float value:\n");
scanf("%f",&rs[i].f);

}
printf("successfully changed:\n");
}
int main(){

sm re[3]={{456,33.090},{321,12.111},{78,99.999}};
int size=sizeof(re)/sizeof(re[0]);

printf("existing values:\n");
for(int i=0;i<size;i++){
printf("%d\n",re[i].d);
printf("%f\n",re[i].f);
}

funt(re,size);

printf("after change:\n");
for(int i=0;i<size;i++){
printf("%d\n",re[i].d);
printf("%.3f\n",re[i].f);
}

return 0;
}
