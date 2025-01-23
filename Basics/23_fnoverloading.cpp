//fn - overloading - same fn name with different parameter inputs

#include <iostream>
using namespace std;

int add( int a, int b){

    return (a+b);
}

double add(double a, double b){
   
    return (a+b);
}

double add( double a, int b, int c){
    
    return (a+b+c);
}

int main(){
    cout<<"Added numbers with same fn name :"<<add(2,3)<<endl;
    cout<<"Added numbers with same fn name :"<<add(2.2,3.6)<<endl;
    cout<<"Added numbers with same fn name :"<<add(2.5,3,12)<<endl;
}