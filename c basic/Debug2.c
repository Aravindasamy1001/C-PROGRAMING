#include <stdio.h>
#include <stdlib.h>
#pragma pack(2)
struct PackedStructure
{
    char a;
    int b;
    short c;
};

int main()
{
    printf("size of struct %d\n", sizeof(struct PackedStructure));
    return 0;
}
Use code with caution.
