#include <stdio.h>

int binaryStep(int x)
{
    if (x < 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x;
    printf("Enter an integer:\n");
    scanf("%d", &x);
    printf("The result of binary step: %d", binaryStep(x));
    return 0;
}