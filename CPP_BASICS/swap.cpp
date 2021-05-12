#include<iostream>
using namespace std;

int main() 
{
    int a,b,temp;
    a = 5;
    b = 6;
    cout<<"Before swapping the varibales are:- "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping the varibales are:- "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
   
    return 0;
}