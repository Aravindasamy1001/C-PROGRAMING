#include<stdio.h>
#include"string_utils.h"

int main(){

char word[25];
char words[25];

printf("enter a strings to find strlen,strcpy:\n");
scanf("%s",word);

int total=str(word);
printf("string length:%d\n",total);

str2(word,words);
printf("string copy:%s\n",words);

return 0;

}
