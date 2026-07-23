#include <iostream>
using namespace std;

void swap(int*, int*);
void swap(int *b, int *c){
    int temp;
    temp=*b;
    *b=*c;
    *c=temp;
}
int main(){
    int n,i;
    cout<<"enter number of element : ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"element"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"\noriginal array -\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int high=n-1, mid=0, low=0;
    while(mid<=high){
        if(a[mid]==0){
            swap(&a[mid++],&a[low++]);
        }
        else if(a[mid]==1){
            mid++;
        }
        else if(a[mid]==2){
            swap(&a[mid],&a[high--]);
        }
    }
    cout<<"\nnew array- \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
