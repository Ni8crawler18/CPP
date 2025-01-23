#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

try{
    if(b==0){
        throw b;
    }
    cout<<"Division value :"<<a/b<<endl;
}
catch(int ex){
    cout<<"denominator is"<<b<<endl;
} 
}