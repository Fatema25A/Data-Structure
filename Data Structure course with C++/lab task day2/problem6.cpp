#include <iostream>
using namespace std;

int main() {
    int n;

    
    do {
        cout << "Enter an odd dimension size for the magic square: ";
        cin >> n;
        if (n % 2 == 0) {
            cout << "Error: Please enter an odd number.\n";
        }
    } while (n % 2 == 0);

    
    int** magicSquare = new int*[n];
    for (int i = 0; i < n; i++) {
        magicSquare[i] = new int[n];
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0; 
        }
    }

    int num = 1;
    int i = 0, j = n / 2;  

    while (num <= n * n) {
        magicSquare[i][j] = num++;

        
        int new_i = (i - 1 + n) % n;  
        int new_j = (j + 1) % n;      

        if (magicSquare[new_i][new_j] != 0) {
        
            i = (i + 1) % n;
            
        } else {
            i = new_i;
            j = new_j;
        }
    }

    
    cout << "\nMagic Square of size " << n << "x" << n << ":\n";
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cout << magicSquare[r][c] << "\t";
        }
        cout << "\n";
    }

    
    int sum = 0;
    for (int c = 0; c < n; c++) {
        sum += magicSquare[0][c];
    }
    cout << "\nSum of the first row: " << sum << endl;

    
    for (int i = 0; i < n; i++) {
        delete[] magicSquare[i];
    }
    delete[] magicSquare;

    return 0;
}
