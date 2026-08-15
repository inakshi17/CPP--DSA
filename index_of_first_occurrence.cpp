#include <iostream>
#include <string>

using namespace std;

int strStr(string m, string a) {
    int ml = m.length();
    int al = a.length();

    if (al == 0) return 0;
    if (al > ml) return -1;

    for (int i = 0; i <= ml - al; i++) {
        int j = 0;
        
        while (j < al && m[i + j] == a[j]) {
            j++;
        }
        
        if (j == al) {
            return i;
        }
    }

    return -1;
}

int main() {
    string mainStr, subStr;

    cout << "Enter the main string (haystack): ";
    getline(cin, mainStr);

    cout << "Enter the substring to find (needle): ";
    getline(cin, subStr);

    cout << "Result: " << strStr(mainStr, subStr) << endl;

    return 0;
}
