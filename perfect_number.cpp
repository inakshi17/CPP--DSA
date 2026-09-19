#include <iostream>

using namespace std;

bool checkPerfectNumber(int num) {
    if (num <= 1) {
        return false;
    }

    int s = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            s = s + i;
        }
    }
    if (s == num) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int num;
    cout << "enter number: ";
    if (!(cin >> num)) {
        return 0;
    }

    if (checkPerfectNumber(num)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
