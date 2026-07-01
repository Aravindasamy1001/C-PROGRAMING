#include <stdio.h>

int fun(int x)
{
    return x++;
}

int main()
{
    int a = 5;
    printf("%d %d", fun(a), a);
}
