#include <iostream>
#include <cstdlib>

#define MAX 10

using namespace std;

int enqueue(int a[], int rear, int front);
int dequeue(int a[], int rear, int front);
void display(int a[], int rear, int front);

int main() {
    int front = -1, rear = -1, ch;
    int *a = (int *)malloc(MAX * sizeof(int));

    if (a == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    do {
        cout << "\n--- CIRCULAR QUEUE MENU ---";
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                rear = enqueue(a, rear, front);
                if (front == -1 && rear != -1) {
                    front = 0;
                }
                break;
            case 2:
                front = dequeue(a, rear, front);
                if (front == -1) {
                    rear = -1;
                }
                break;
            case 3:
                display(a, rear, front);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (ch != 4);

    free(a);
    return 0;
}

int enqueue(int a[], int rear, int front) {
    if ((rear + 1) % MAX == front) {
        cout << "Queue Overflow!" << endl;
        return rear;
    }

    int val;
    cout << "Enter element to enqueue: ";
    cin >> val;

    if (rear == -1) {
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    a[rear] = val;
    cout << val << " inserted successfully." << endl;
    return rear;
}

int dequeue(int a[], int rear, int front) {
    if (front == -1) {
        cout << "Queue Underflow!" << endl;
        return -1;
    }

    cout << "Dequeued element: " << a[front] << endl;

    if (front == rear) {
        return -1;
    }

    return (front + 1) % MAX;
}

void display(int a[], int rear, int front) {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << a[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}
