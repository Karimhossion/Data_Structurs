// 10 floating value  insert and new value of position show after insertion
#include <iostream>
using namespace std;
int main()
{
    int arrSize;
    cout << "array size : ";
    cin >> arrSize;

    float array[arrSize];
    cout << "Enter element : ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }

    float newValue;
    cout << "Insert a new value : ";
    cin >> newValue;

    int position;
    cout << "Enter a position(1-array size) : ";
    cin >> position;

    if (!(position >= 1 && position <= arrSize + 1))
    {
        cout << "Invalid position" << endl;
        return 1;
    }
    else
    {
        for (int i = arrSize - 1; i >= position - 1; i--)
        {
            array[i + 1] = array[i];
        }
    }
    array[position - 1] = newValue;
    cout << "After Insertion : ";
    for (int i = 0; i <= arrSize; i++)
    {
        cout << " " << array[i];
    }
    return 0;
}