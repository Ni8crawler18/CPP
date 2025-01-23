#include <iostream>
using namespace std;

int main(){
    int a, b, tmp;
    a = 5, b = 6;

    cout<<a<<b<<endl;

    tmp = a;
    a = b;
    b = tmp;

    cout<<a<<b<<endl;

    return 0;
