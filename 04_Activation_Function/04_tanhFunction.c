#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter a number:\n");
    scanf("%lf", &x);
    printf("Tanh(%f) = %f\n", x, tanh(x));
    return 0;
}
