#include <stdio.h>

int arr[] = {34, 56, 23, 12, 78, 91, 8, 45, 62, 73, 81, 9, 11, 50, 63, 2, 97, 18, 71, 42, 13, 77, 28, 3, 19, 72, 58, 66, 1, 29, 95, 48};
int length = 32;

int linearSearch(int search)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int resultIndex = linearSearch(202);
    if (resultIndex == -1)
        printf("Tidak ketemu");
    else
        printf("Index = %d ", resultIndex);

    return 0;
}
