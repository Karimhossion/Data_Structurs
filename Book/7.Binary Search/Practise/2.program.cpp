#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int array[], int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to perform Binary Search
int binarySearch(int array[], int arrSize, int item) {
    int beg = 0, end = arrSize - 1, mid;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (array[mid] == item) {
            return mid;
        }
        if (array[mid] < item) {
            beg = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int arrSize;
    cout << "array size: ";
    cin >> arrSize;

    int array[arrSize];
    cout << "element: ";
    for (int i = 0; i < arrSize; i++) {
        cin >> array[i];
    }

    // Bubble Sort
    bubbleSort(array, arrSize);

    cout << "Sorted array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << array[i] << " ";
    }

    // Binary search
    int item;
    cout << "\nthe element to search: ";
    cin >> item;

    int result = binarySearch(array, arrSize, item);

    if (result != -1) {
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
