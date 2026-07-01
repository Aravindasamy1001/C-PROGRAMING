#include <stdio.h>

int fun()
{
    static int x = 5;
    return x++;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d", fun());
}
