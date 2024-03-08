//Traversing an Array in reverse direction.
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};

    int length = sizeof(arr)/sizeof(arr[0]);  //// Calculate the length of the array

    int i=length-1;

    cout<<"Array elements in reverse order :";
    while (i>=0)
    {
        cout<<" "<<arr[i];
        i=i-1;
    }
    return 0;
}