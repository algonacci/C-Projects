#include <stdio.h>

double stepFunction(double x)
{
    if (x >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double x;
    printf("Enter a number: \n");
    scanf("%lf", &x);
    printf("Step Function(%f) = %f\n", x, stepFunction(x));
    return 0;
}
