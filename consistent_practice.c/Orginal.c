#include<stdio.h>

void orginal(char *as,char *or){
*or=as[0];
while(*as!='\0'){

if(*(as+1)!=*as){
or++;
*(or)=*(as+1);
}
as++;
}
*or='\0';
}

int main(){

char as[10]={"aaabbbccc"};
char or[10];

orginal(as,or);

printf("orginal characters:%s\n",or);

return 0;
}
