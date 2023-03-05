#include <stdio.h>

int linearFunction(int x)
{
    return 2 * x;
}

int main()
{
    int x;
    printf("Enter an integer:\n");
    scanf("%d", &x);
    printf("Linear Function (%d) = %d\n", x, linearFunction(x));
    return 0;
}