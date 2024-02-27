#include <stdio.h>
int main() {
    int arrSize;
    printf("Enter Array Size : ");
    scanf("%d", &arrSize);

    int array[arrSize];
    printf("Enter elemenent : ");
    int i = 0;
    while (i < arrSize)
    {
        scanf("%d", &array[i]);
        i++;
    }
    printf("Reverse : ");
    int j = arrSize - 1;
    while (j >= 0) {
        printf("%d ", array[j]);
        j--;
    }
    return 0;
}
