#include <iostream>
using namespace std;

int binarySearch(int data[], int size, int value) {
    int index = -1;     
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int mid = (first + last) / 2;

        if (data[mid] == value) {
            index = mid; 
            break;
        }
        else if (value < data[mid]) {
            last = mid - 1; 
        }
        else {
            first = mid + 1; 
        }
    }

    return index;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 30;

    int result = binarySearch(arr, size, value);

    if (result != -1)
        cout << "Value found at index " << result << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}
