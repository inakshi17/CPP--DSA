#include <iostream>

using namespace std;

int* plusOne(int* a, int n, int& returnSize) {
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 9) {
            a[i] = 0;
        } else {
            a[i]++;
            returnSize = n;
            return a;
        }
    }

    int* res = new int[n + 1]();
    res[0] = 1;
    returnSize = n + 1;
    return res;
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 1;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int returnSize;
    int* result = plusOne(arr, n, returnSize);

    cout << "[";
    for (int i = 0; i < returnSize; i++) {
        cout << result[i] << (i < returnSize - 1 ? ", " : "");
    }
    cout << "]\n";

    if (result != arr) delete[] arr;
    delete[] result;

    return 0;
}
