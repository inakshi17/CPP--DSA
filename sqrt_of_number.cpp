#include <iostream>

using namespace std;

int mySqrt(int x) {
    long r = x;
    while (r * r > x) {
        r = (r + x / r) / 2;
    }
    return (int)r;
}

int main() {
    int x;

    cout << "Enter a non-negative integer: ";
    cin >> x;

    int result = mySqrt(x);

    cout << "The square root of " << x << " is: " << result << endl;

    return 0;
}
