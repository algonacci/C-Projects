#include <stdio.h>

int main()
{
    int arr[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int X = 8;

    int i = 0;
    while ((arr[i] != X) && (i < 9))
    {
        i++;
    }

    if (arr[i] == X)
    {
        printf("Index bernilai X = %d", i);
    }
    else
    {
        printf("Nilai tidak ditemukan");
    }

    return 0;
}