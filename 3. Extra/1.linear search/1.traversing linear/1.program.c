// traversing algorithm
/*Algorithm::
  1.  [Initialize counter.] Set K:= LB.
  2.  Repeat Steps 3 and 4 while K<=UB.
  3.      [Visit element.] Apply PROCESS to LA[K].
  4.      [Increase counter.] Set K:=K+1.
      [End of step 2 loop.]
  5.  Exit.*/
#include <stdio.h>
int main()
{
    int LA[] = {3, 4, 1, 8, 9, 2, 22, 1};
    int LB = 0;
    int UB = sizeof(LA) / sizeof(LA[0]);
    int k = LB;

    while (k < UB)
    {
        printf("%d ", LA[k]);
        k++;
    }
    return 0;
}
