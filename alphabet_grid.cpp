#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "enter your number :";
    cin >> n;
    for(i=1;i<=n;i++){
        char ch= 'A';
        for(j=1;j<=n;j++){
            cout << ch ;
            ch++;
        }
        cout << "\n" ;
    }
    return 0;
}
