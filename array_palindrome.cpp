#include <iostream>
using namespace std;


int check(int a[], int n, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (a[start] != a[end]) {
        return 0;
    }
    return check(a, n, start + 1, end - 1);
}
int main() {
    int n;
    cout << "enter the number of element : ";
    cin >> n;
    if (n <= 0) return 1;
    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> a[i];
    }
    int start = 0, end = n - 1, result;
    result = check(a, n, start, end);
    if (result == 1) {
        cout << "\nnumber is palindrome !! \n";
    } else {
        cout << "\nnumber is not a palindrome !!\n";
    }
    return 0;
}
