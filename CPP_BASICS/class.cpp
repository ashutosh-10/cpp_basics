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
        cout<<"The release year is:- "<<year<<endl;
    }
};


int main() 
{
    Okay a1;
    a1.setData("Realme","X2pro", 35000, 2020);
    a1.dispData();
}