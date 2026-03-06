#include<stdio.h>

void sen(char *p,int *to){
int inword=0;

while(*p!='\0'){
if((*p !=' ')&&(*p !='\n')){
inword=1;
}
else if(inword==1){
(*to)++;
inword=0;
}
p++;
}

}

int main(){

char sentence[100];

printf("start writeing:\n");
fgets(sentence,100,stdin);

int words=0;
sen(sentence,&words);

printf("total words of your sentence:%d\n",words);

return 0;
}
