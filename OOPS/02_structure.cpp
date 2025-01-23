#include <iostream>
#include <string>
using namespace std;

struct Person{
        string name;
        int age;
        double salary;
};

int main(){

    Person p[2];
    cout<<"enter user details :"<<endl;

    for (int i=0; i<2; i++){

        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }

    for (int i=0; i<2; i++){

        cout<<"person details :"<<endl;
        cout<<"name :"<<p[i].name<<endl;
        cout<<"age :"<<p[i].age<<endl;
        cout<<"salary :"<<p[i].salary<<endl;
    }
}
