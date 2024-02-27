//function use 
#include<stdio.h>

void insert_sort(int A[], int n) {
    int i, j, item;
    for (i = 1; i < n; i++) {
        item = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > item) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int k;  // Position to insert ITEM
    printf("Enter the position to insert (k): ");
    scanf("%d", &k);

    int ITEM;  // Item to insert
    printf("Enter the item to insert: ");
    scanf("%d", &ITEM);

    // Insert the item at the specified position
    for (int i = n; i > k; i--) {
        A[i] = A[i - 1];
    }
    A[k] = ITEM;

    // Sort the array
    insert_sort(A, n + 1);

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
