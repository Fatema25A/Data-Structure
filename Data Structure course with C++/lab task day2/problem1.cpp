#include <iostream>
using namespace std;

int main() {
    const int size = 2;
    int A[size][size], B[size][size], Ans[size][size];

    
    cout << "Enter elements of first 2x2 matrix A:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "Enter elements of second 2x2 matrix B:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> B[i][j];
        }
    }

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            Ans[i][j] = A[i][j] + B[i][j];
        }
    }

    
    cout << "Sum of matrix A and B (Ans):\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << Ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
