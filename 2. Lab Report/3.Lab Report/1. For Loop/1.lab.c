// WAP to Reverse an array.
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
    
    printf("Reverse : ");
    for (int i = arrSize-1; i>=0; i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}