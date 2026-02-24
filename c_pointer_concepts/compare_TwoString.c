#include<stdio.h>
int main(){

char a1[]="basketball";
char a2[]="basketball";
char *p1=a1;
char *p2=a2;

while(*p1==*p2){
if (*p1=='\0'){
printf("strings are equal");

return 0;
}
p1++;
p2++;
}
printf("strings are not equal");

return 0;
}
