#include <iostream>
using namespace std;

const int MAX = 10;
void enqueue(int a[], int *f, int *r);
void dequeue(int a[], int *f, int *r);
void display(const int a[], int f, int r);
void peek(const int a[], int f);

int main() {
    int f = -1, r = -1;
    int a[MAX];
    int ch;

    do {
        cout << "\n1-enqueue\n2-dequeue\n3-display\n4-peek\n5-exit\n";
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch) {
            case 1:
                enqueue(a, &f, &r);
                break;
            case 2:
                dequeue(a, &f, &r);
                break;
            case 3:
                display(a, f, r);
                break;
            case 4:
                peek(a, f);
                break;
        }
    } while (ch > 0 && ch <= 4);

    return 0;
}

void enqueue(int a[], int *f, int *r) {
    if (*r == MAX - 1) {
        cout << "Queue is full !!\n";
    } else {
        int x;
        cout << "Enter the new value : ";
        cin >> x;

        a[++(*r)] = x;
        if ((*f) == -1) {
            *f = 0;
        }
    }
}

void dequeue(int a[], int *f, int *r) {
    if (*f == -1) {
        cout << "Queue is empty !!\n";
    } else {
        cout << "Deleted element : " << a[*f] << "\n";
        if (*f == *r) {
            *f = -1;
            *r = -1;
        } else {
            (*f)++; 
        }
    }
}

void display(const int a[], int f, int r) {
    if (f == -1) {
        cout << "Queue is empty !!\n";
    } else {
        cout << "Current queue : ";
        for (int i = f; i <= r; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

void peek(const int a[], int f) {
    if (f == -1) {
        cout << "Queue is empty !!\n";
    } else {
        cout << "Current value : " << a[f] << "\n";
    }
}
