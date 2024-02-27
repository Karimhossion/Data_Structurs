//WAP to Delete/Remove a record with given position an array.

#include <stdio.h>
int main()
{
    int arrSize;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    printf("Enter the numbers: ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("Delete position: ");
    int dele;
    scanf("%d", &dele);
    i = dele - 1;
    while (i < arrSize - 1)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    printf("Delete number: ");
    i = 0;
    while (i < arrSize - 1)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}

