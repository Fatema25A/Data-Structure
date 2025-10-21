#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 10, 15, 20, 25}; // Example array
    int n = 5;  // Current size of array
    int pos;

    cout << "Array before deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return 1;
    }

    // Deletion process
    for (int i = pos; i < n - 1; i++)
       { arr[i] = arr[i + 1];}

    n--;  // reduce size

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
