#include<stdio.h>
int main(){
char r[]="aravind samy 26";
int i,vowels=0;
int consonants=0;
int spaces=0;
int digits=0;

while(r[i]!='\0'){
char ch=r[i];

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
vowels++;
}
else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
consonants++;
}
else if (ch ==' '){
spaces++;
}
else if (ch>='0'&&ch<='9'){
digits++;
}
i++;
}
printf("vowels=%d\n",vowels);
printf("consonants=%d\n",consonants);
printf("spaces=%d\n",spaces);
printf("digits=%d\n",digits);

return 0;

} 
