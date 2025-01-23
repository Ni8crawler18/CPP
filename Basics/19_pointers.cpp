#include <iostream>
using namespace std;

int main(){

    int a = 5;

    int *pt;

    pt = &a;

    cout<<"pointer address :"<<pt<<"  pointer value :"<<*pt<<endl;

    *pt = 6;

    cout<<"pointer address :"<<pt<<"  pointer value :"<<*pt<<endl;
}