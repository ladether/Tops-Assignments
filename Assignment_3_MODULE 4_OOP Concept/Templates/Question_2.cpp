//MODULE: 4_OOPS Concept_Templates
/*Question:2_Write a program of to sort the array using templates*/

#include <iostream>
using namespace std;

template <typename T>
void swapElements(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swapElements(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void displayArray(const T arr[], int size) {
    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5;
    int intArray[size] = {5, 2, 8, 1, 7};
    double doubleArray[size] = {3.5, 1.2, 7.8, 2.1, 6.7};

    bubbleSort(intArray, size);
    displayArray(intArray, size);

    bubbleSort(doubleArray, size);
    displayArray(doubleArray, size);

    return 0;
}

