#include <iostream>
#include <sstream>
#include <string>
#include <stack>  
using namespace std;

bool isOperator(const string &s) {
    return (s == "+" || s == "-" || s == "*" || s == "/" || s == "%");
}

int evaluatePostfix(const string &p) {
    stack<int> st;
    stringstream ss(p);
    string token;

    while (ss >> token) {
        if (isOperator(token)) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            int result = 0;

            if (token == "+") result = b + a;
            else if (token == "-") result = b - a;
            else if (token == "*") result = b * a;
            else if (token == "/") result = b / a;
            else if (token == "%") result = b % a;

            st.push(result);
        } else {
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main() {
    string postfix = "22 3 / 5 *";  
    int result = evaluatePostfix(postfix);

    cout << "Postfix Expression: " << postfix << endl;
    cout << "Evaluated Result: " << result << endl;

    return 0;
}
