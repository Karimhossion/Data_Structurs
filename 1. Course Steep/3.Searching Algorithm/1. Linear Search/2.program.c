#include <stdio.h>
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
    int num;
    printf("Enter the element : ");
    scanf("%d",&num);
    
    int i;
    for ( i = 1; i < arrSize; i++)
    {
        if (array[i] == num)
        {
            printf("Element index: %d.\n", i);
            break;
        }
    }

    if (i == arrSize)
    {
        printf("Element is not found\n");
    }
    return 0;
}
