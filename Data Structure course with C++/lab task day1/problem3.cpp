
#include <iostream>
using namespace std;

int main() {
    
    int A[] = {3, 5, 7, 9, 11};
    int B[] = {1, 3, 5, 8, 9, 12, 15};

    int sizeA = 5;
    int sizeB=7;

    
    int common[100]; 
    int commonSize = 0;

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                
                bool alreadyExists = false;
                for (int k = 0; k < commonSize; k++) {
                    if (common[k] == A[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists) {
                    common[commonSize] = A[i];
                    commonSize++;
                }
            }
        }
    }


    if (commonSize == 0) {
        cout << "No common element!" << endl;
    } else {
        cout << "Common elements: ";
        for (int i = 0; i < commonSize; i++) {
            cout << common[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
