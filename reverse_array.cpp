#include <iostream>
using namespace std;

int swap(int a[],int n){
    int i,temp;
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-1-i]=temp;
    }
    cout <<"\n";
    cout << "new array "<< "\n";
    for(i=0;i<n;i++){
        cout<< a[i]<< " ";
    }
    return 0;
}

int main(){
    int n,i;
    cout<< "enter the number of element : ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cout<< "enter element "<< i << " : ";
        cin>> a[i];
    }
    cout <<"\n";
    cout << "original array "<< "\n";
    for(i=0;i<n;i++){
        cout<< a[i]<< " ";
    }
    swap(a,n);
    return 0;
}
