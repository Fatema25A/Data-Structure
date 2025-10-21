#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j;

        // Shift elements greater than key to the right using a for loop and if condition
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > key) {
                arr[j + 1] = arr[j];  // Shift right
            } else {
                break;  // Stop shifting if arr[j] <= key
            }
        }
        arr[j + 1] = key;  // Insert key at the correct position
    }
}

int main() {
    int arr[5] = {12, 11, 13, 5, 6};
    int n = 5;

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
