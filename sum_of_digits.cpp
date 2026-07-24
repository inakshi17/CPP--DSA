#include <iostream>
using namespace std;

int main(){
    int s, n;
    cout <<"enter your number : ";
    cin>>n;
    s=n%9;
    if(s==0 && n!=0){
        s=9;
    }
    cout<<"sum : "<<s;
    return 0;
}
