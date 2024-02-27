#include <stdio.h>

int main() {
    float array[10];
    printf("Enter 10 floating point values: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &array[i]);
    }

    float newValue;
    int position;

    printf("Enter the value to insert: ");
    scanf("%f", &newValue);
    printf("Enter the position to insert (1-10): ");
    scanf("%d", &position);

    if (!(position >= 1 && position <=10))
    {
        printf("Invalid position\n");
        return 1;
    }

    for (int i = 10-1; i >= position-1; i--) {
        array[i + 1]=array[i];
    }

    array[position-1] = newValue;

    printf("Array after insertion: ");
    for (int i = 0; i <= 10; i++)
    {
        printf("%.2f ", array[i]);
    }
    return 0;
}























/*#include <stdio.h>

int main() {
    float array[10];
    printf("Enter 10 floating-point values: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &array[i]);
    }

    float newValue;
    int position;

    printf("Enter the value to insert: ");
    scanf("%f", &newValue);
    printf("Enter the position to insert (1-10): ");
    scanf("%d", &position);

    if (!(position >= 1 || position <=10)) 
    {
        printf("Invalid position\n");
        return 1;
    }

    for (int i = 10-1; i > position; i--) { 
        array[i]= array[i - 1];
    }

    array[position] = newValue;

    printf("Array after insertion: ");
    for (int i = 0; i <= 10; i++) 
    {
        printf("%.2f ", array[i]);
    }
    return 0;
}
*/