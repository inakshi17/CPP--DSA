#include <iostream>
#include <string>

using namespace std;

bool isValid(string s) {
    int top = -1;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            top++;
            s[top] = ch;
        } 
        else {
            if (top == -1) {
                return false;
            }

            if ((ch == ')' && s[top] != '(') ||
                (ch == '}' && s[top] != '{') ||
                (ch == ']' && s[top] != '[')) {
                return false;
            }

            top--;
        }
    }

    return top == -1;
}

int main() {
    string s;
    cin >> s;

    if (isValid(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
