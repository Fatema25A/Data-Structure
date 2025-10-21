#include <iostream>
#include "ExpressionValidator.h"
using namespace std;

int main() {
    ExpressionValidator validator;
    string expr;

    cout << "Enter an arithmetic expression: ";
    cin >> expr;

    if (validator.isValid(expr)) {
        cout << "Expression is VALID." << endl;
    } else {
        cout << "Expression is INVALID." << endl;
    }

    return 0;
}
