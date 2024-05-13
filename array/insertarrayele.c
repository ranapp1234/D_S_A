// inserting element into the array


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
int insertarray(int arr[], int size, int element, int capacity, int index)
{
    // if(size>= capacity)
    // {
    //     return-1;
    // }
    for(int i= size-1; i>index; i--)
    {
        arr[i+1]=arr[i];        

    }
    {
        arr[index] =element ;   
        return 1;
    }
}

int main()
{
    int arr[100] = {1, 3, 5, 56, 4, 3, 23, 5, 4,};
    int size=9, element=45, index=4;
    dispaly(arr, size);
    insertarray(arr, size, element, 100, index);
    size+=1;                                             // increasing the memory space
    dispaly(arr, size);

    return 0;
}