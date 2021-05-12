#include<iostream>
#include<string>
using namespace std;

class Okay{


    private:
    string brand;
    string model;
    int price;
    int year;

    public:
    //default constructor
    Okay()
    {
        cout<<"Default constructor calles (1st) \n";
        //brand ="apple";
       
    }

    //parametrized constructor 
    Okay(string x, string y, int pr, int yr)
    {
        cout<<"Parameterized constructor called (2nd)\n\n";
        brand = x;
        model=y;
        price=pr;
        year =yr;
        
    }

    //copy constructor
    Okay(Okay &obj)
    {
        cout<<"Copy constructor called \n";
        brand = obj.brand;
        model = obj.model;
        price = obj.price;
        year = obj.year;


    }
    
    void setData(string x, string y,int pr, int yr)
    {
        
        brand =x;
        model=y;
        price=pr;
        year =yr;

    }
    void dispData()
    {
        cout<<"The brand is:- "<<brand<<endl;
        cout<<"The model is:- "<<model<<endl;
        cout<<"The price is:- "<<price<<endl;
        cout<<"The release year is:- "<<year<<endl<<endl;
    }

    //destructor
    ~Okay()
    {
        cout<<"Destructor called\n";
    }
};


int main() 
{
    Okay a1,a2("Apple","XR", 40000,2020);
    a1.setData("Realme","X2pro", 35000, 2020);
    a1.dispData();
    a2.dispData();
    Okay a3 = a1;
    a3.dispData();
}