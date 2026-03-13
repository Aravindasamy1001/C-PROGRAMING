#include<stdio.h>
#include<string.h>

typedef struct{
char name[20];
int  mark;
}student;

int main(){
int i,j;

student std[3]={{"aravind",80},{"arun",56},{"anand",43}};
student *p[3];
for(i=0;i<3; i++){
p[i]=&std[i];
}
for(i=0;i<3-1; i++){
   for(j=0; j<3-1-i; j++){

    if(p[j]->mark<p[j+1]->mark){
      student *temp=p[j];
          p[j]=p[j+1];
          p[j+1]=temp;
     }
    }
   }
printf("marks after sort:\n");
for(i=0;i<3;i++){
printf("name:%s\n mark:%d\n",p[i]->name,p[i]->mark);
}
return 0;
}
