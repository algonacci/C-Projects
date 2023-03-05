#include <stdio.h>

int relu(int x)
{
    if (x < 0)
    {
        return 0;
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
    printf("ReLU(%d): %d", x, relu(x));
    return 0;
}