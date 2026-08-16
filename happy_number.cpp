#include <iostream>

bool isHappy(int n) {
    int d, s = 0;
    if (n == 1) {
        return true;
    }
    while (n != 1 && n != 4) {
        s = 0;
        while (n > 0) {
            d = n % 10;
            s = s + d * d;
            n = n / 10;
        }
        n = s;
        if (s == 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (isHappy(number)) {
        std::cout << number << " is a Happy number.\n";
    } else {
        std::cout << number << " is NOT a Happy number.\n";
    }

    return 0;
}
