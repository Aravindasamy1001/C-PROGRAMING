#include<stdio.h>
#include<string.h>

int fun(char word[],int n){
int left=0;
int right=n-1;
while(left<right){
if(word[left]!=word[right]){
printf("its not a palindrome");
return 0;
}
left++;
right--;
}
printf("its a palindrome");
return 0;

}


int main(){

char word[10];
printf("enter a word:\n");
scanf("%s",word);
int size=strlen(word);

fun(word,size);

return 0;

}
