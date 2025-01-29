#include <iostream>
#include <string>
using namespace std;

struct Person{

    string name;
    int age;
    double salary;
};

int main(){

    Person p1;
    Person *ptr = &p1;

    cout<<"enter user details of name, age and salary :"<<endl;
    cin>>ptr->name;
    cin>>ptr->age;
    cin>>ptr->salary;

    cout<<"user details as follows"<<endl;
    cout<<"name :"<<ptr->name<<endl;
    cout<<"age :"<<ptr->age<<endl;
    cout<<"salary :"<<ptr->salary<<endl;

}