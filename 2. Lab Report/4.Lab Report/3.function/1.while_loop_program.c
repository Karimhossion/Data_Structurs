#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arrSize;
    printf("Enter Array Size: ");
    scanf("%d", &arrSize);

    int array[arrSize];

    printf("Enter the elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &array[i]);
    }

    // Bubble Sort with while loops
    int i = 0;
    while (i < arrSize - 1) {
        int j = 0;
        while (j < arrSize - i - 1) {
            if (array[j] > array[j + 1]) {
                // Swap if the element found is greater than the next element
                swap(&array[j], &array[j + 1]);
            }
            j++;
        }
        i++;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
