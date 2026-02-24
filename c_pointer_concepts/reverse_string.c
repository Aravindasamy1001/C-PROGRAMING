#include<stdio.h>
#include<string.h>

int main(){

char as[10];

printf("enter a word (0-9):");
scanf("%s",as);

char *before=as;
char *after=as+strlen(as)-1;

while(before<after){
 char temp=*before;
      *before=*after;
      *after=temp;
before++;
after--;
}
printf("Reversed word:%s",as);

return 0;
}
