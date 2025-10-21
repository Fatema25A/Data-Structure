#ifndef POSTFIX_EVALUATOR
#define POSTFIX_EVALUATOR

#include <iostream>
#include <string>
#include <cctype>
#include "Stack.h"
using namespace std;

class PostfixEvaluator {
private:
    // Helper function to apply an operator
    int applyOperator(int a, int b, char op) {
        switch(op) {
            case '+': return b + a;
            case '-': return b - a;
            case '*': return b * a;
            case '/': return b / a;
            case '%': return b % a;
            default:
                throw invalid_argument("Unknown operator");
        }
    }

public:

    int evaluate(const string& expr) {
        Stack<int> s(expr.length())

        for (int i = 0; i < expr.length(); i++) {
            char ch = expr[i];

            if (ch == ' ') continue

            if (isdigit(ch)) {
                s.push(ch - '0')
            } 
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
                if (s.isEmpty()) throw runtime_error("Insufficient operands");
                int a = s.topElement(); s.pop();

                if (s.isEmpty()) throw runtime_error("Insufficient operands");
                int b = s.topElement(); s.pop();

                int c = applyOperator(a, b, ch);
                s.push(c);
            }
            
        }

        if (s.isEmpty()) throw runtime_error("Invalid expression");
        return s.topElement();
    }
};

#endif
