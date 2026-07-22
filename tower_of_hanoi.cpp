#include <iostream>
using namespace std;

void tower(int, char, char, char);
int main(){
    int n;
    char A='A', B='B', C='C';
    cout<< "enter the number of disk : ";
    cin>> n;
    tower(n,A,B,C);
    return 0;
}
void tower(int n, char A, char B, char C){
    if(n==1){
        cout<<A<<" -> "<<C<<"\n";
        return;
    }
    tower(n-1,A,C,B);
    cout<<A<<" -> "<<C<<"\n";
    tower(n-1,B,A,C);
}
