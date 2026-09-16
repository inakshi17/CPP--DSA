#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    long long m = 1;
    long long temp = n;
    while (true) {
        temp = n;
        if (temp == m) {
            return true;
        }
        else if (temp < m) {
            return false;
        }
        m = 2 * m;
    }
}

int main() {
    int n;
    cout << "enter number: ";
    if (!(cin >> n)) {
        return 0;
    }

    if (isPowerOfTwo(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
