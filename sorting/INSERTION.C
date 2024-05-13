#include <stdio.h>

void insert(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
   
}
// Function to sort the array using insertion sort algorithm.
void insertionSort(int *A, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {

        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int A[] = {4, 1, 3, 9, 7};
    int n = 6;
    insert(A, n);
    insertionSort(A, n);
    insert(A, n);
}