#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isopenbracket(char ch) {
    return (ch == '(' || ch == '{' || ch == '[' || ch == '<');
}

bool isclosebracket(char ch) {
    return (ch == ')' || ch == '}' || ch == ']' || ch == '>');
}

int precedence(char ch) {
    if (ch == '^') return 3;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '+' || ch == '-') return 1;
    return 0;
}

void infixtopostfix(const string& exp) {
    stack<char> st;
    string result = "";

    for (char ch : exp) {
        if (isopenbracket(ch)) {
            st.push(ch);
        }
        else if (isalnum(ch)) {
            result += ch;
        }
        else if (isclosebracket(ch)) {
            while (!st.empty() && !isopenbracket(st.top())) {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
            while (!st.empty() && !isopenbracket(st.top()) && 
                   precedence(st.top()) >= precedence(ch)) {
                result += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << "Postfix expression: " << result << endl;
}

int main() {
    string exp;
    cout << "Enter your expression: ";
    cin >> exp;
    infixtopostfix(exp);
    return 0;
}
