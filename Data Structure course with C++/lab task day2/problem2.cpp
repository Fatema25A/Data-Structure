#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the size N of the NxN matrix: ";
    cin >> N;

    int matrix[N][N];

    
    cout << "Enter elements of the " << N << "x" << N << " matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
    
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    
    cout << "Transposed matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
