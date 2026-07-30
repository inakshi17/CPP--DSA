#include <iostream>
using namespace std;

#define max 10
int enqueue(int [], int, int);
int dequeue(int [], int, int);
void display(int [], int, int);

int main() {
    int a[max], front = -1, rear = -1, ch;
    do {
        cout<<"\n1-enqueue\n2-dequeue\n3-display\n4-exit";
        cout<<"\nenter your choice : ";
        cin>>ch;
        switch(ch) {
            case 1:
            rear=enqueue(a, rear, front);
            if(front==-1 && rear !=-1){
                front =0;
            }     
            break;
            case 2:
            front= dequeue(a, rear, front);
            if(front == -1){
                rear =-1;
            }
            break;
            case 3:
            display(a, rear, front);
            break;
            case 4:
            cout<< "exit !!!";
            break;
        }
    } while (ch <4 && ch >0);
    return 0;
}
int enqueue(int a[], int rear, int front) {
    int val;
    if(rear == max-1){
        cout<< "queue is overflow !!\n";
        return rear;
    }
    cout<< "enter the  new value : ";
    cin>>val;
    a[++rear]=val;
    return rear;
}

int dequeue(int a[], int rear, int front) {
    if (front == -1 || front > rear){
        cout<< "queue is empty !!\n";
        return -1;
    } 
    cout<<"deleted element : "<<a[front++];
    if(front > rear){
        return -1;
    }
    return front;
}
void display(int a[], int rear, int front) {
    if (front == -1 || front > rear){
        cout<< "queue is empty !!\n";
        return ;
    } 
    for(int i=front; i<=rear;i++){
        cout << a[i]<< " ";
    }
    cout<<"\n";
}
