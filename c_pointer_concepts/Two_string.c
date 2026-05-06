#include<stdio.h>

int check(char *a,char*b,int n)
	{

	while(*a==*b){

         if(*a=='\0'){
		 
		 printf("both variable string matched\n");
		return 0;
	 }
a++;
b++;
	
	}
printf("variable strings not matched\n");
return 0;
	}

int main(){

	char s1[20]={"mesmerize"};
	char s2[20]={"mesmerize"};
        
	int size = sizeof(s1);
	
	check(s1,s2,size);

	return 0;
}
