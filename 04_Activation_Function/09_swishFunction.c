#include <stdio.h>

double swishFunction(int x)
{
    return x / (1 - exp(-x));
}

int main()
{
    int x;
    printf("Enter an integer: \n");
    scanf("%d", &x);
    printf("Swish Function(%d): %f", x, swishFunction(x));
    return 0;
}