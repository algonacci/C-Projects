#include <stdio.h>

int arr[] = {34, 56, 23, 12, 78, 91, 8, 45, 62, 73, 81, 9, 11, 50, 63, 2, 97, 18, 71, 42, 13, 77, 28, 3, 19, 72, 58, 66, 1, 29, 95, 48};
int length = 32;

void selectionSort()
{
    for (int i = 0; i < length; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int target)
{
    int low = 0;
    int high = length - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int main()
{
    // Sort the array using selection sort
    selectionSort();

    // Print the sorted array to verify
    printf("Sorted array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform binary search for target = 56
    int target = 56;
    int index = binarySearch(target);
    if (index == -1)
    {
        printf("%d not found in array.\n", target);
    }
    else
    {
        printf("%d found at index %d in array.\n", target, index);
    }

    return 0;
}
