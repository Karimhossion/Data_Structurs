//sort and binary search -----sort kore binary search korte hobe.
#include <iostream>
using namespace std;
int main()
{
    int arrSize;
    cout << "array size: ";
    cin >> arrSize;

    int array[arrSize];
    cout << "element: ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }
    // Bubble Sort
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << array[i] << " ";
    }
    // Binary search
    int item;
    cout << "\nthe element to search: ";
    cin >> item;
    int beg = 0, end = arrSize - 1, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (array[mid] == item)
        {
            cout << "Element index: " << mid;
            return 0;
        }
        if (array[mid] < item)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Invalid" << endl;
    return 0;
}
