#include <stdio.h>

double eluFunction(double x)
{
    if (x > 0)
    {
        return x;
    }
    else
    {
        return 0.01 * (exp(x) - 1);
    }
}

int main()
{
    double x;
    printf("Enter numbers: \n");
    scanf("%lf", &x);
    printf("eLU Function(%f): %f", x, eluFunction(x));
    return 0;
}