#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap if the element found is greater than the next element
                swap(&array[j], &array[j + 1]);
            }
        }
    }
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

    // Bubble Sort
    bubbleSort(array, arrSize);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
