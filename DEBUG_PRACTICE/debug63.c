#include <stdio.h>

void fun(char *s)
{
    s[0]='H';
}

int main()
{
    char str[]="hello";

    fun(str);

    printf("%s",str);

	return 0;
}
