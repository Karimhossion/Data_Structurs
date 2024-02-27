//Inserting into a Linear Array) INSERT(LA, N, K, ITEM)
    //Here LA is a linear array with N elements and K is a positive integer such that K<=N.This  algorithm inserts an element ITEM into the K th position in  LA. 
/*(Inseri=ting into a linear Arra)
    1.  [Initialize counter.] Set J:=N.
    2.  Repeat Steps 3 and 4 while J>=K.
    3.      [Move Jth element downward.] Set LA[J+1]:= LA[j].
    4.      [Decrease counter.]Set J:= J-1.
          [End of Step 2 loop.]
    5.    [Insert element.] Set LA[K]:=ITEM.
    6.    [Reset N.] Set N:N+1.
    7.    Exit.
*/
/*#include<stdio.h>
int main()
{
    int LA[8];
    int N=5;

    for (int i = 0; i < N; i++)
    {
        LA[i]=i;
    }
    int K=2;
    int ITEM=18;
    int j;
    int J=N;
    while(j>=K){
        LA[J+1]=LA[j];
        J=J-1;
    }
    LA[K]=ITEM;
    N=N+1;
    printf("Insertion : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",LA[i]);
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int N;          // Input array size
    printf("array size : ");
    scanf("%d", &N);
    int LA[N];
    printf("elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    int k;               // Position to insert ITEM
    printf("Enter the position to insert (k): ");
    scanf("%d", &k);

    int ITEM;           // Input position and item to insert
    printf("item to insert: ");
    scanf("%d", &ITEM);

    int J = N;          // Move elements downward to make space for the new element
    while (J >= k) {
        LA[J + 1] = LA[J];
        J = J - 1;
    }

    // Insert ITEM at position k
    LA[k] = ITEM;

    // Increment N
    N = N + 1;


    printf("Array after insertion: ");              // Display the array after insertion
    for (int i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }

    return 0;
}
