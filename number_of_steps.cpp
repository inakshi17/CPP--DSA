#include <iostream>

int numberOfSteps(int num) {
    int c = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num - 1;
        }
        c++;
    }
    return c;
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int steps = numberOfSteps(num);

    std::cout << "Number of steps to reduce " << num << " to zero: " << steps << std::endl;

    return 0;
}
