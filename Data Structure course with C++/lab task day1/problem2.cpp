#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {5, 3, 8, 3, 9, 5, 1};
    int n = 7;

    
    bool hasDuplicate = false;
    for (int i = 0; i < n && !hasDuplicate; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicate = true;
                break;
            }
        }
    }

    if (!hasDuplicate) {
        cout << "Array already unique!" << endl;
    } 
    else {
        
        int newSize = n;
        for (int i = 0; i < newSize; i++) {
            for (int j = i + 1; j < newSize; j++) {
                if (arr[i] == arr[j]) {
                    
                    for (int k = j; k < newSize - 1; k++) {
                        arr[k] = arr[k + 1];
                    }
                    newSize--;
                    j--; 
                }
            }
        }

        
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < newSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
