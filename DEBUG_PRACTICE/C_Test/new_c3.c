#include<stdio.h>
#include<string.h>

typedef struct {

char nation1[10];
char fs[10];
}orgin;

typedef struct{

orgin data[3];

}flowers;

int  find(flowers flwr,char cy[]){

for(int i=0;i<3;i++){
if(strcmp(flwr.data[i].nation1,cy)==0){
printf("famous flower %s.\n",flwr.data[i].fs);
return 0;
}
printf("country not found\n");
return 0;
}
}
int main(){

flowers flwr={{{"usa", "lily"},{"georgia", "snowdrop"},{"iran", "poppy"}}};
char gh[10];
printf("type the country name.\n");
scanf(" %s",gh);

find (flwr,gh);

return 0;
}
