#include <stdio.h>
#include <math.h>

double sigmoid(double x)
{
    double z = (1 / (1 + exp(-x)));
    return z;
}

int main()
{
    double x;
    printf("Enter an integer:\n");
    scanf("%lf", &x);
    printf("Sigmoid(%f) = %f\n", x, sigmoid(x));
    return 0;
}
