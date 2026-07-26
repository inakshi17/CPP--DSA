#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter your number of element : ";
    cin>>n;
    int a[n], i;
    for(i = 0; i < n; i++) {
        cout<<"element "<<i + 1<<" : ";
        cin>>a[i];
    }
    printf("\noriginal array - ");
    for(i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    int pos = 0; 
    int neg = 1; 
    int temp[n];
    for(i = 0; i < n; i++) {
        if (a[i] >= 0 && pos < n) {
            temp[pos] = a[i];
            pos += 2;
        } else if (a[i] < 0 && neg < n) {
            temp[neg] = a[i];
            neg += 2;
        }
    }
    for(i = 0; i < n; i++) {
        a[i] = temp[i];
    }
    printf("\nnew array - ");
    for(i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
