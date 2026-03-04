#include<stdio.h>
#include<string.h>

int length(char member[][10],int n){
int len=0;
for(int i=0;i<n;i++){
if(strlen(member[i])>len){
len=strlen(member[i]);
}
}
return len;
}

int main(){

char member[3][10]={"aravind","cristiano","sergio"};
int size=sizeof(member)/sizeof(member[0]);
int len;


len=length(member,size);

printf("length of char array:%d\n",len);

return 0;
}
