#include <iostream>
using namespace std;

struct person{
    char name[100];
    int age;
    double salary;
};

int main(){

    person p1;
    cout<<"name :";
    cin.getline(p1.name,100);
    cout<<"age :";
    cin>>p1.age;
    cout<<"salary :";
    cin>>p1.salary;

    cout<<endl<<"Person details :"<<endl;
    cout<<"name :"<<p1.name<<endl;
    cout<<"age :"<<p1.age<<endl;
    cout<<"salary :"<<p1.salary<<endl;
}