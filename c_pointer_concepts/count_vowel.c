#include<stdio.h>
#include<ctype.h>

int main(){

char as[20];
int total=0;
printf("enter a string(0-19):\n");
scanf("%s",as);

char *p=as;

while(*p!='\0'){

char ch=tolower(*p);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
total++;
}
p++;
}

printf("number of vowels:%d\n",total);

return 0;
}
