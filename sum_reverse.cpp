#include <iostream>

bool sumOfNumberAndReverse(int num) {
    if (num == 0) { return true; }
    if (num < 0) { return false; }
    
    for (int i = 0; i <= num / 2; i++) {
        int n = i;
        int s = 0;
        while (n > 0) {
            int d = n % 10;
            s = s * 10 + d;
            n /= 10;
        }
        if (i + s == num) { return true; }
    }
    return false;
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;
    
    if (sumOfNumberAndReverse(num)) {
        std::cout << num << " can be formed by adding a number and its reverse.\n";
    } else {
        std::cout << num << " cannot be formed by adding a number and its reverse.\n";
    }

    return 0;
}
