#include <iostream>

using namespace std;

double myPow(double x, int n) {
    long long N = n;
    
    if (N < 0) {
        x = 1.0 / x;
        N = -N;
    }
    
    double ans = 1.0;
    while (N > 0) {
        if (N % 2 == 1) {
            ans *= x;
        }
        x *= x;
        N /= 2;
    }
    
    return ans;
}

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    double result = myPow(x, n);
    cout << "Result: " << x << " ^ " << n << " = " << result << endl;

    return 0;
}
