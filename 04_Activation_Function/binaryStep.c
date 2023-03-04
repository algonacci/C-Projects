#include <stdio.h>

int binaryStep(x)
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
    int num;
    printf("Masukkan angka\n");
    scanf("%d", &num);
    printf("Hasil binary step: %d", binaryStep(num));
    return 0;
}