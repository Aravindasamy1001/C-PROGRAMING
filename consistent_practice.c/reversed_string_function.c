#include<stdio.h>
#include<string.h>
void fun(char *p,int n){
int left=0;
int right=n-1;
while(left<right){
int temp=*(p+left);
   *(p+left)=*(p+right);
  *(p+right)=temp;
left++;
right--;
}
}
int main(){

char name[20];
printf("enter your string(0-19):\n");
scanf("%s",name);

int size=strlen(name);

fun(name,size);

printf("reversed string:%s\n",name);

return 0;

}
