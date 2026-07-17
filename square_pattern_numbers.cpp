#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "enter your number : ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << j;
        }
        cout << "\n" ;
    }
    return 0;
}
