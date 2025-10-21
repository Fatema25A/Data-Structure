#include <iostream>
using namespace std;

int main() {
    
    int A[10] = {2, 5, 3, 2, 8, 5, 2, 9, 1, 2};

    int num;
    cout << "Enter an integer to count its occurrences: ";
    cin >> num;

    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (A[i] == num) {
            count++;
        }
    }

    cout << "The number " << num << " occurs " << count << " times in the array." << endl;

    return 0;
}
