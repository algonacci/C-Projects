#include <stdio.h>
#include <math.h>

double tanhFunction(double x)
{
    double z = (2 / (1 + exp(-2 * x))) - 1;
    return z;
}

int main()
{
    double x = 2.0;
    double result = tanhFunction(x);
    printf("Tanh(%f) = %f\n", x, result);
    return 0;
}