#include <iostream>
using namespace std;

int main(){
    
    int size;
    int *ptr;

    cin>>size;

    ptr = new int[size];

    for (int i = 0; i<size; i++)
    {
        cin>>ptr[i];
        cout<<ptr[i]<<endl;
    }

    delete[] ptr;
    return 0;
}