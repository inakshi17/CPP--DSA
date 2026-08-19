#include <iostream>
#include <climits>

using namespace std;

int reverse(int x) {
    long long int d, s = 0;
    while (x != 0) {
        d = x % 10;
        s = s * 10 + d;
        x = x / 10;
    }
    if (s > INT_MAX || s < INT_MIN) {
        return 0;
    }
    return static_cast<int>(s);
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Reversed integer: " << reverse(num) << endl;

    return 0;
}
