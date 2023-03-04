#include <stdio.h>

int main()
{
    int i, j, temp;
    int arr[10] = {1, 50, 6, 200, 3, 100, 30, 9, 99, 100};
    int n = 10;
    float median;
    int max;
    int min;
    int sum;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float mean = (float)sum / n;

    max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Sort the array using bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calculate the median
    if (n % 2 == 0)
    {
        median = (float)(arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    }
    else
    {
        median = (float)arr[n / 2];
    }

    printf("The max value is %d\n", max);
    printf("The min value is %d\n", min);
    printf("The median is %.2f\n", median);
    printf("The mean is %.2f\n", mean);

    return 0;
}