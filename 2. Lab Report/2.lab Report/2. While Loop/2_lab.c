//2 :  WAP for find the index of a specific element in an array.
#include <stdio.h>
int main()
{
    int arrSize;
    printf("Enter array size : ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    printf("Enter the number : ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    int index;
    printf("Enter the find elements : ");
    scanf("%d", &index);
    int j = 0;
    while (j < arrSize)
    {
        if (arr[j] == index)
        {
            printf("Index element : %d", j);
            return 0;
        }
        j++;
    }
    printf("element invalid");
    return 0;
}
