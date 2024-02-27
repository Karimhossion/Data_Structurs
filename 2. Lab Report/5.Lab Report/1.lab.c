/*WAP to sort data elements(descending order) in an array. using Bubble sort and print the array */
#include <stdio.h>
int main()
{
    int arrSize;
    printf("array Size: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("elements: ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i < arrSize - 1) {
        int j = 0;
        while (j < arrSize - i - 1) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    printf("Descending array: ");
    int k = 0;
    while (k < arrSize) {
        printf("%d ", arr[k]);
        k++;
    }
    printf("\n");
    return 0;
}