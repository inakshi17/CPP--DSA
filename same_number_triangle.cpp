#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<< "enter your number of line :";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}
