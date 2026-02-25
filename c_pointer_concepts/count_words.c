#include<stdio.h>
#include<string.h>

typedef struct{

char words[100];

}sentence;

int main(){

int count=0;
sentence word;

printf("type your sentence:\n");
fgets(word.words,100,stdin);

char *point=word.words; 

while(*point!='\0'){
if(*point==' '){
count++;
}
point++;
}
if(*point=='\0'){
count++;
}
printf("number of words:%d",count);

return 0;
}

