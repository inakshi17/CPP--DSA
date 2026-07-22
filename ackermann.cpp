#include <iostream>
using namespace std;

int ack(int, int);
int main(){
    int n,m,z=0;
    cout<<"enter the value of m : ";
    cin>>m;
    cout<<"enter the value of n : ";
    cin>>n;
    z=ack(m,n);
    cout<<"result - "<<z;
    return 0;
}
int ack(int m, int n){
    if(m==0){
        return n+1;
    }
    else if(m>0 && n==0){
        ack(m-1,1);
    }
    else if (m>0 && n>0){
        ack(m-1, ack(m, n-1));
    }
}
