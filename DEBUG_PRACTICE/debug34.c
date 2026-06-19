#include <stdio.h>
#include<string.h>

int main() {
char a[6]="abc";
char *b="aaa";  //The string literal "aaa" is stored somewhere in memory:
                //And b stores the address of the first character:

printf("%d  %d\n",sizeof(a),sizeof(b));
printf("%d  %d",strlen(a),strlen(b));

    return 0;
}
