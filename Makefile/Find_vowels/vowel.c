#include<stdio.h>
#include<ctype.h>
#include "vowel.h"

int findvow(char *as)
{
	int d=0;
        
	while(*as != '\0')
	{
		char ay = tolower(*as);

		if(ay=='a'| ay=='e' | ay=='i' | ay=='o' | ay=='u'){

			d++;
		}
                as++;
	}

return d;
}
