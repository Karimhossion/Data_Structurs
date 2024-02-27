//linear search use in function
#include <stdio.h>

int linear_search(int A[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }
    return -1; // If the element is not found, return -1
}

int main()
{
    int arrSize;
    printf("Array size: ");
    scanf("%d", &arrSize);

    int array[arrSize];

    printf("Enter the elements:");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &array[i]);
    }

    int element;
    printf("Enter the element to search: ");
    scanf("%d", &element);

    int result = linear_search(array, arrSize, element);

    if (result != -1)
    {
        printf("Element %d found at index %d.\n", element, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", element);
    }
    return 0;
}
