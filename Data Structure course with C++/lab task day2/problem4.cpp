#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the size N of the NxN matrix: ";
    cin >> N;

    int matrix[N][N];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < N; i++) {
        
        sum += matrix[i][i];

        
        if (i != N - 1 - i) {
            sum += matrix[i][N - 1 - i];
        }
    }

    cout << "Sum of all diagonal elements (counting each only once): " << sum << endl;

    return 0;
}
