#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(const string& s) {
    int c = 0, r = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            continue;
        }

        if (s[i] != ' ') {
            c++;
            r = c;
        }
        else {
            c = 0;
        }
    }
    return r;
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int length = lengthOfLastWord(inputString);
    cout << "Length of the last word: " << length << endl;

    return 0;
}
