#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "enter your number :";
    cin >> n;
    int x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << x ;
            x++;
        }
        cout << "\n" ;
    }
    return 0;
}
