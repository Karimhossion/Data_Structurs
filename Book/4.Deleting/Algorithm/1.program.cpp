/*Algorithm 4.3:: 
    (Deleting from a Linear Array) DELETE(LA,N,ITEM)
    Here LA is a linear array with N elements and K is positive interger such that K<=N.This algorithm deletes the Kth element from LA.
    1.  Set ITEM:=LA[K].
    2.  Repeat for J=K to N-1:
            [Move J+1st element upward.] Set LA[J]:= LA[J=1].
        [End of loop.]
    3.  [Reset the number N of elements in LA.] Set N:=N-1;
    4.  Exit.
*/
#include <iostream>
using namespace std;

int main() {
    int LA[8];
    int N = 5; // elements of LA

    for (int i = 0; i < N; i++) {
        LA[i] = i;
    }

    int k = 2; // will keep ITEM in position k
    int ITEM = LA[k];

    int J = k;
    while (J < N - 1) {
        LA[J] = LA[J + 1];
        J = J + 1;
    }

    // LA[k] = ITEM; // Commented out as it's not used in the provided Java code

    for (int i = 0; i < sizeof(LA) / sizeof(LA[0]); i++) {
        cout << " " << LA[i] << endl;
    }

    return 0;
}
