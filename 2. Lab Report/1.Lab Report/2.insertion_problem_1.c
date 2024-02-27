//WAP to take an array of 10 integers value and insert a new value on that array.
#include <stdio.h>

int main() {
    // Declare an array of 10 integers
    int array[10];
    int size = 10;

    // Input 10 integer values
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the new value to be inserted
    int newValue;
    printf("Enter the new value to be inserted: ");
    scanf("%d", &newValue);

    // Insert the new value at the end of the array
    array[size] = newValue;
    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
