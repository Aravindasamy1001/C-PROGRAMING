#include"pointer.h"

int countchar(char *as){
int a=0;
	while(*as!='\0'){
		
		if(*as=='e'){
		a++;
		}
	as++;
	}

return a;
}
