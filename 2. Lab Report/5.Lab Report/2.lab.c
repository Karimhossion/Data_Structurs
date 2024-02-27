#include <stdio.h>
int main()
{
    int arrSize;
    printf("array size : ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("array elements : ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i < arrSize - 1)
    {
        int j = 0;
        while (j < arrSize - i - 1)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    printf("Descending Order : ");
    int k = 0;
    while (k < arrSize)
    {
        printf("%d ", arr[k]);
        k++;
    }
    printf("\n");
    int elm;
    printf("Find element : ");
    scanf("%d", &elm);
    int beg = 0, end = arrSize - 1, mid;
    int itm = 0;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == elm)
        {
            arr[mid] = -1;
            itm = 1;
            break;
        }
        else if (arr[mid] < elm)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (itm)
    {
        printf("element index: %d\n", mid);
        k = 0;
        while (k < arrSize)
        {
            printf("%d ", arr[k]);
            k++;
        }
    }
    else
    {
        printf("Item is not found");
    }
    return 0;
}
