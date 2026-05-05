#include<stdio.h>


void rev(char *pv,int s){
   char temp;
   int i;
  for(i=0;i<s/2;i++){
	 temp=*(pv+i);
	 *(pv+i)=*(pv+s-i-1);
	*(pv+s-i-1)=temp;
  }
}  

int main(){

	char st[]="AravindsamY";
	char *po=st;
        int size=sizeof (st)/sizeof (st[0])-1;
	rev(st,size);

	printf("after reversed string\n");
while(*po!='\0'){
	printf("%c",*po);
	po++;
}
printf("\n");

return 0;
}
