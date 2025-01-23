#include <iostream>
using namespace std;

int maximum(int x, int y);
int main(){
    int a,b;
    cin>>a>>b;

    int c = maximum(a,b);
    cout << c <<endl;   
}

int maximum(int x, int y){
    if (x>y)
        return x;
    else 
        return y;
}