#include <iostream>
using namespace std;

int count(int a[], int n) {
    if (n <= 0) return -1;

    int c = 0, ele = a[0], s = 0, num = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] != ele) {
            ele = a[i];
            c = 0;
        }

        c++;

        if (c > s) {
            s = c;
            num = ele;
        }
    }

    return num;
}

int main() {
    int n;
    cout << "enter the number of element : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> a[i];
    }

    int res = count(a, n);
    cout << "result : " << res << endl;

    return 0;
}
