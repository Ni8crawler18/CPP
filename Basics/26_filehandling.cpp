#include <iostream>
#include <fstream>
using namespace std;

int main(){

    char arr[100];
    cin.getline(arr,100);

    ofstream neo("neo.txt");
    neo<<arr;
    neo.close();
    cout<<"File has been written in secrecy"<<endl;
   
    char arr1[100];
    ifstream iota("neo.txt");
    iota.getline(arr1,100);
    cout<<arr1<<endl<<"secrecy leaked"<<endl;
}

