#include "Stack.h"
#include <iostream>
#include <cctype>  
using namespace std;

int prec(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return -1;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

string infixToPostfix(string s) {
    Stack<char> st(s.length());
    string res;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            
            while (i < s.length() && isdigit(s[i])) {
                res += s[i];
                i++;
            }
            res += ' ';
            i--;
        }
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!st.isEmpty() && st.peek() != '(') {
                res += st.peek();
                res += ' ';
                st.pop();
            }
            if (!st.isEmpty()) st.pop(); 
        }
        else if (isOperator(s[i])) {
            while (!st.isEmpty() && prec(st.peek()) >= prec(s[i])) {
                res += st.peek();
                res += ' ';
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.isEmpty()) {
        res += st.peek();
        res += ' ';
        st.pop();
    }

    return res;
}
int main() {
    string infix = "7*3/(3-2)+8*4";
    string postfix = infixToPostfix(infix);
    
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    
    return 0;
}