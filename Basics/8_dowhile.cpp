#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    do{
        cout<<"good guess"<<endl<<"guess again"<<endl;
        cin>>a;
    }while(a==2);

    return 0;

}