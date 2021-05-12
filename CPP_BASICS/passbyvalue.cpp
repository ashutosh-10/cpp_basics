#include<iostream>
using namespace std;

void passByValue(int a,int b)
{   
    int c = a;
    a=b;
    b =c;

}


int main() 
{

    int x = 5, y=6;
    cout<<"Before swapping the values are:- "<<x<<" "<<y<<endl;

    passByValue(x,y);


    cout<<"After swapping the values are:- "<<x<<" "<<y<<endl;

    
    return 0;
}