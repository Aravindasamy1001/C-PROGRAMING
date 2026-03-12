#include<stdio.h>
#include<stdlib.h>
typedef struct{
int id;
char name[20];
}std;

int main(){
int n=3,i;;
std *stu[3];

for(i=0;i<n;i++){
stu[i]=(std*)malloc(sizeof(std));
if(stu[i]==NULL){
printf("memory not allocated");
return 1;
}
printf("enter a id\n");
scanf("%d",&stu[i]->id);
printf("enter a name\n");
scanf("%s",stu[i]->name);
}
for(i=0;i<n;i++){
printf("id:%d\n",stu[i]->id);
printf("name:%s\n",stu[i]->name);
}

return 0;

}
