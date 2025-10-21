#include <iostream>
#include "PostfixEvaluator.h"
using namespace std;

int main() {
    PostfixEvaluator evaluator;
    string postfix;

    cout << "Enter postfix expression (single-digit operands only): ";
    cin >> postfix;

    try {
        int result = evaluator.evaluate(postfix);
        cout << "Result = " << result << endl;
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
