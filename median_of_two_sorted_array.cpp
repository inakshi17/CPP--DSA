#include <iostream>

using namespace std;

double findMedianSortedArrays(int* a, int n, int* b, int m) {
    int c[n + m];
    int j = 0, k = 0, i = 0;
    while (j < n && k < m) {
        if (a[j] < b[k]) {
            c[i++] = a[j++];
        } else {
            c[i++] = b[k++];
        }
    }
    while (j < n) {
        c[i++] = a[j++];
    }
    while (k < m) {
        c[i++] = b[k++];
    }

    float med;
    int total = n + m;

    if (total % 2 == 0) {
        float s = c[total / 2] + c[(total / 2) - 1];
        med = s / 2.0f;
    } else {
        med = c[total / 2];
    }

    return med;
}

int main() {
    int n, m;

    cout << "Enter the size of first sorted array (n): ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " sorted elements for first array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> a[i];
    }

    cout << "Enter the size of second sorted array (m): ";
    cin >> m;

    int b[m];
    cout << "Enter " << m << " sorted elements for second array:\n";
    for (int i = 0; i < m; i++) {
        cout << "element " << i + 1 << " : ";
        cin >> b[i];
    }

    double median = findMedianSortedArrays(a, n, b, m);
    cout << "The median of the two sorted arrays is: " << median << endl;

    return 0;
}
