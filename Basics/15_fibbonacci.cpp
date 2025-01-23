#include <iostream>
using namespace std;

int main(){

    int n, n1, n2, fib;
    cin>>n;

    n1 = 0;
    n2 = 1;
    cout<<n1<<n2;

    for(int i=1;i<=n-2;i++){
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
        cout<<fib;
    }
}