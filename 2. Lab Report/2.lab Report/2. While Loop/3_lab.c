//3. WAP to find the maximum element in an array.
#include <stdio.h>
int main()
{
    int arrSize;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    printf("Enter the element : ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    int max = arr[0];
    int j = 0;
    while (j < arrSize)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
        j++;
    }
    printf("Maximum number : %d", max);
    return 0;
}
