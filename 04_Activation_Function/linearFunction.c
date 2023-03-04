#include <stdio.h>

int linearFunction(int x)
{
    return (2 * x);
}

int main()
{
    int x = 10;
    int result = linearFunction(x);
    printf("Linear Function (%f) = %f\n", x, result);
    return 0;
}