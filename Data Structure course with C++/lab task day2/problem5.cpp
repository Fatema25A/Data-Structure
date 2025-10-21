#include <iostream>
using namespace std;

int main() {
    const int size = 3;
    int A[size][size], B[size][size], C[size][size];

    
    cout << "Enter elements of first 3x3 matrix A:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "Enter elements of second 3x3 matrix B:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> B[i][j];
        }
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            C[i][j] = 0;
        }
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    cout << "Resultant matrix after multiplication (A * B):\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
