#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
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
    cout << "\noriginal array -\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    int start = 0, end = n - 1;
    while (start < end) {
        if (a[start] < 0 && a[end] >= 0) {
            swap(a[start], a[end]);
            start++;
            end--;
        } else {
            if (a[start] >= 0) start++;
            if (a[end] < 0) end--;
        }
    }
    cout << "\nnew array -\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
