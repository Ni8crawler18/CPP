#include<iostream>
using namespace std;

void passbyValue(int x,int y){
    int z = x;
    x = y;
    y = z;
}

void passbyReference(int &x,int &y){
    int z = x;
    x = y;
    y = z;
}

void passbyAddress(int *x,int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

int main(){
    int a = 5, b = 6;

    cout<<"value before swapping:"<<endl<<"a :"<<a<<"  b :"<<b<<endl;

    passbyValue(a,b);
    cout<<"value before swapping:"<<endl<<"a :"<<a<<"  b :"<<b<<endl;

    passbyReference(a,b);
    cout<<"value before swapping:"<<endl<<"a :"<<a<<"  b :"<<b<<endl;

    passbyAddress(&a,&b);
    cout<<"value before swapping:"<<endl<<"a :"<<a<<"  b :"<<b<<endl;
}