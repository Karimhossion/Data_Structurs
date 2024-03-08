/*Algorithm:::  (Inserting linear array ) INSERT(LA,N,K,ITEM)
    Here LA is a Linear Array with N elements and K is a positive integer such that K<+N. This algorithm inserts an element ITEM into the Kth
    position in LA.

    1.  [Initialize counter.] Set J:=N.
    2.  Repeat Steps 3 and 4 while J>=K.
    3.      [Move Jth element downward.] Set LA[J+1]:= LA[j].
    4.      [Decrease counter.]Set J:= J-1.
          [End of Step 2 loop.]
    5.    [Insert element.] Set LA[K]:=ITEM.
    6.    [Reset N.] Set N:N+1.
    7.    Exit.
    */
#include <iostream>
using namespace std;
int main()
{
    int LA[8];
    int N = 5;
    for (int i = 0; i < N; i++)
    {
        LA[i]=i;
    }
    int K = 2;
    int ITEM = 18;

    int J = N;
    while (J >= K)
    {
        LA[J + 1] = LA[J];
        J = J - 1;
    }
    LA[K] = ITEM;
    for (int i = 0; i <N; i++)
    {
        cout << " " << LA[i];
    }
    return 0;
}