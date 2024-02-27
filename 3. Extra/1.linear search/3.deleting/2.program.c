//Algorithm

/*Algorithm 4.3:: 
    (Deleting from a Linear Array) DELETE(LA,N,ITEM)
    Here LA is a linear array with N elements and K is positive interger such that K<=N.This algorithm deletes the Kth element from LA.
    1.  Set ITEM:=LA[K].
    2.  Repeat for J=K to N-1:
            [Move J+1st element upward.] Set LA[J]:= LA[J=1].
        [End of loop.]
    3.  [Reset the number N of elements in LA.] Set N:=N-1;
    4.  Exit.*/

#include <stdio.h>

int main() {
    int N;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int LA[N];

    // Input array elements
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    int k; // Position to remove
    printf("Enter the position to remove (k): ");
    scanf("%d", &k);

    if (k < 0 || k >= N) {
        printf("Invalid position. Exiting program.\n");
        return 1; // Exit with an error code
    }

    int ITEM = LA[k];

    int J = k;
    while (J < N - 1) {
        LA[J] = LA[J + 1];
        J = J + 1;
    }

    // Reset the number N of elements in LA
    N = N - 1;

    printf("Array after removal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }

    return 0;
}
