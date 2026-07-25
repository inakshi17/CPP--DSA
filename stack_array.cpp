#include <iostream>
using namespace std;

#define MAX 10
int push(int [],int);
int pop(int [], int);
void peek(int [], int);
void display(int [], int);
int main(){
    int top=-1, a[MAX];
    int ch;
    do{
        cout<<"\n1-push\n2-pop\n3-peek\n4-display\n5-exit\n";
        cout<< "\nenter the choice : ";
        cin>> ch;
        switch(ch){
            case 1:
            top=push(a, top);
            break;
            case 2:
            top=pop(a,top);
            break;
            case 3:
            peek(a, top);
            break;
            case 4:
            display(a,top);
            break;
        }
    }
    while(ch>=1 && ch<=4);
    return 0;
}

int push(int a[], int top){
    if(top==MAX-1){
        cout<<"stack overflow !";
    }
    else{
        int z;
        cout<<"enter new value : ";
        cin>> z;
        a[++top]=z;
    }
    return top;
}

int pop(int a[], int top){
    if(top==-1){
        cout<< "stack is empty";
    }
    else{
        cout<<"\ndeleted element : "<<a[top--]<<"\n";
    }
    return top;
}

void peek(int a[], int top){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"currently : "<<a[top]<<"\n";
    }
}

void display(int a[], int top){
    int i=0;
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"\n";
        while(i<top+1){
            cout<<a[i++]<<" ";
        }
    }
    cout<<"\n";
}
