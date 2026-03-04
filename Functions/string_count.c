#include<stdio.h>
#include<string.h>
#include<ctype.h>

void check(char *name,int n,int *vowels,int*consonats,int*space,int*digits){


for(int i=0;i<n;i++){

int nm=tolower(name[i]);

if(nm=='a'||nm=='e'||nm=='i'||nm=='o'||nm=='u'){
(*vowels)++;
}
else if(nm >='a'&&nm<='z'){
(*consonats)++;
}
else if(nm==' '){
(*space)++;
}
else if(nm >='0'&&nm<='9'){
(*digits)++;
}
}
}
int main(){

char name[15]={"Aravind samy26"};
int n=strlen(name);
int vowels=0;
int consonants=0;
int space=0;
int digits=0;

check(name,n,&vowels,&consonants,&space,&digits);

printf("volwes:%d\n",vowels);
printf("consonates:%d\n",consonants);
printf("space:%d\n",space);
printf("digits:%d\n",digits);

return 0;
}
