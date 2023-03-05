#include <stdio.h>

double leakyReLU(int x)
{
    if (x < 0)
    {
        return 0.01 * x;
    }
    else
    {
        return x;
    }
}

int main()
{
    int x;
    printf("Enter an integer: \n");
    scanf("%d", &x);
    printf("Leaky ReLU(%d): %f", x, leakyReLU(x));
    return 0;
}