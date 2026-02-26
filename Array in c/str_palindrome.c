#include<stdio.h>
#include<string.h>
int main(){
int i,length,flag=0;
char str[6]="madam";

for(i=0;i<6/2; i++){
   if(str[i] !=str[ 5-i-1]){
     flag=1;
    break;
    }
  
}
if (flag==0)
  printf("its a palindrome");
else
 printf("its not a palindrome");

return 0;
}
