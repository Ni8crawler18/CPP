#include <iostream>
using namespace std;

int main(){

    int A[3][3], B[3][3], add[3][3];

    for (int i = 0; i<3; i++){
        for ( int j =0; j<3; j++){
            cin>>A[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i<3; i++){
        for ( int j =0; j<3; j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i<3; i++){
        for ( int j =0; j<3; j++){
            add[i][j] = A[i][j]+B[i][j];
            cout <<add[i][j]<<" ";
        }
         cout << endl;
    }
}