#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void softmaxFunction(double x[], int n, double logits[])
{
    int i;
    double sum = 0.0;
    double z[n];

    for (i = 0; i < n; i++)
    {
        z[i] = exp(x[i]);
        sum += z[i];
    }

    for (i = 0; i < n; i++)
    {
        logits[i] = z[i] / sum;
    }
}

int main()
{
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    double x[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter input %d: ", i + 1);
        scanf("%lf", &x[i]);
    }

    double logits[n];

    softmaxFunction(x, n, logits);

    // Print the inputs and logits
    printf("\nInputs: ");
    for (i = 0; i < n; i++)
    {
        printf("%f ", x[i]);
    }

    printf("\nLogits: ");
    for (i = 0; i < n; i++)
    {
        printf("%f ", logits[i]);
    }
    printf("\n");

    return 0;
}