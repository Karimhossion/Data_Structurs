//4. WAP to print all the even elements from an array.
#include <stdio.h>
int main()
{
    int arrSize;
    printf("Enter array size: ");
    scanf("%d", &arrSize);

    int arr[arrSize];
    printf("Enter the number: ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("Even element: ");
    int j = 0;
    while (j < arrSize)
    {
        if (arr[j] % 2 == 0)
        {
            printf("%d ", arr[j]);
        }
        j++;
    }
    return 0;
}
