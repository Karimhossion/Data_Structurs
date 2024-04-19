// Linear Search
#include <iostream>
using namespace std;
int main()
{
    int arrSize;
    cout << "array size : ";
    cin >> arrSize;
    int array[arrSize];
    cout << "element : ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }
    int search;
    cout << "element search: ";
    cin >> search;
    int count=0;
    for (int i = 0; i < arrSize; i++)
    {
        if (array[i] == search)
        {
            cout<<"element position : "<<i+1;
            count+=1;
        }
    }
    if (count==0)
    {
        cout <<"element is not position"<< endl;
    }
    return 0;
}
