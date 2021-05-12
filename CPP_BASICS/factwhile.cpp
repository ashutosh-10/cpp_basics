#include<iostream>
using namespace std;

int main() 
{
    int x,fact;
    cin>>x;//x = 5
    fact = x;//fact = 5
    while(x>3)
    {
        x--; // x = 4 // x=3 // x = 2 // x=1
        fact = fact *x;// fact = 5*4= 20 // fact = 20 * 3 = 60 //  fact = 60*2 = 120 // fact = 120*1 = 120
    }
    cout<<fact;
    return 0;

}