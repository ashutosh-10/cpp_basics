#include<iostream>
using namespace std;

int main() 
{
    int num,den,div;
    cin>>num>>den;

    try
    {
        if (den==0)
        {
            throw den;
        }
    div = num/den;   
    }
    catch(int ex)
    {
        cout<<"Divide by zero not allowed "<<den;
    }
    cout<<div;

    return 0;
}