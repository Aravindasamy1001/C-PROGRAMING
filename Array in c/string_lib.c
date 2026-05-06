#include<stdio.h>
#include<string.h>

int main(){
        //string copy.
	char as[20]={"consistent"};

	char as1[20];
	strcpy(as1,as);

printf("string copy=%s\n",as);
//string length.
       int a=strlen(as);
       printf("string length= %d\n",a);

//string cpmpare.       
       char as2[20]="inconsistent";
       if(strcmp(as,as2)==0){
       printf("string compare=yes\n");
       }
       else
	       printf("string compare=not matched\n");

//string add.
       char as3[20]="Aravind";
       char as4[20]="Samy";

       strcat(as3,as4);
       printf("string join=%s\n",as3);


       return 0;
}
