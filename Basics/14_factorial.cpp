#include <iostream>
using namespace std;

int main(){

    int a, fact;
    cin>>a;

    fact = a;

    while(a>1){
        a--;
        fact = fact * a;   
    }
    
    cout<<fact;
}