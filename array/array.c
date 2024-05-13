#include <stdlib.h>
#include<stdio.h>
void dispaly(int arr[], int n)
{
    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100] = {1, 3, 5, 56, 4, 3, 23, 5, 4,};
    dispaly(arr, 6);
    return 0;
}
