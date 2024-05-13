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
int deletearray(int arr[], int size, int index)
{
    // if(size>= capacity)
    // {
    //     return-1;
    // }
    for(int i= index; i<size-1; i++)
    {
        arr[i]=arr[i+1];        

    }
    
}

int main()
{
    int arr[100] = {1, 3, 5, 56, 4, 3, 23, 5, 4,};
    int size=9,  index=2;
    dispaly(arr, size);
    deletearray(arr, size, index);
    size-=1;                                             // decreasing the memory space
    dispaly(arr, size);

    return 0;
}