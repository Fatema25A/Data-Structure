#ifndef EXPRESSION_VALIDATOR
#define EXPRESSION_VALIDATOR

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

class ExpressionValidator {
private:
    
    bool isMatchingPair(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }

public:
    
    bool isValid(const string& expr) {
        Stack<char> s(expr.length())

        for (int i = 0; i < expr.length(); i++) {
            char ch = expr[i];

            
            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            }
            
            else if (ch == ')' || ch == '}' || ch == ']') {
                if (s.isEmpty()) {
                    return false; 
                }
                char top = s.topElement();
                s.pop();
                if (!isMatchingPair(top, ch)) {
                    return false; 
                }
            }
        }

        return s.isEmpty()
    }
};

#endif
