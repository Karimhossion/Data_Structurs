// 1. Write a program of bubble sort.
#include <stdio.h>
int main()
{
    int arrSize;
    printf("Enter Array Size : ");
    scanf("%d", &arrSize);

    int array[arrSize];

    printf("Enter the element : ");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    // Bubble sort
    for (int i = 0; i < arrSize-1; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Sorted array : ");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
    
}