#include<stdio.h>
#include<string.h>

int main(){

char str[10];

printf("enter a name:\n");
scanf("%s",str);

int a=strlen(str)-1;
int flag=1;
for(int i=0;i<a/2;i++){

if(str[i]!=str[a]){
flog = 0;
break;
}
--a;
}


if(flag==1)
printf("yes\n");
else
printf("no\n");

return 0;

}

