#include<iostream>
using namespace std;

int main(){
    int A[3];
    int B[3];
    int add[3];

    for (int i=0;i<3;i++){
        cin>>A[i];
    }
    for (int i=0; i<3; i++){
        cin>>B[i];
    }

    cout<<"addition"<<endl;

    for (int i=0; i<3; i++){
        add[i] = A[i]+B[i];
        cout<<add[i]<<" ";
    }
}