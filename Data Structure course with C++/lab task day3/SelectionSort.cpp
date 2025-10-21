#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int select = 0; select < n - 1; select++) {
        int element = select;

    
        for (int i = select + 1; i < n; i++) {
            if (a[i] < a[element]) {
                element = i;
            }
        }

        
        int temp = a[select];
        a[select] = a[element];
        a[element] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
