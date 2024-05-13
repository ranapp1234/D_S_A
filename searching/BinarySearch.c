#include <stdio.h>

int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int binary_search(int arr[], int n, int element)
{
    int mei, low, high;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mei = (low + high) / 2;
        if (arr[mei] == element)
        {
            return mei;
        }
        if (arr[mei] < element)
        {
            low = mei + 1;
        }
        else
        {
            high = mei - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 55, 67};

    int n = 7;       // Size of the array
    int element = 7; // Element to be searched in the array
    printf("Given array is \n");
    printarray(arr, n);
    printf("\nbinary search...\n");
    int index = binary_search(arr, n, element);
    printf("element %d was found at index %d", element, index);
    return 0;
}