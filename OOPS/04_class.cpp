#include <iostream>
#include <string>
using namespace std;

class Cars{

    private:

    string brand_name;
    string car_model;
    string car_engine;
    float car_price;

    public:

    void setdata(string bname, string cmodel, string cengine, float p){

        brand_name = bname;
        car_model = cmodel;
        car_engine = cengine;
        car_price = p;
    }

    void displaydata(){

        cout<<"Car Info "<<endl<<endl;
        cout<<"car name - "<<brand_name<<endl;
        cout<<"car model - "<<car_model<<endl;
        cout<<"car engine type - "<<car_engine<<endl;
        cout<<"car price - "<<car_price<<endl;
    }

};

int main(){

        Cars car1;

        car1.setdata("Ford", "cadillac", "v8", 250000.05);
        car1.displaydata();

    }