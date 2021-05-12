#include<iostream>
using namespace std;


int sum(int a, int b);
void prhel()
{
    cout<<"Hello";
}
int main() 
{
    int ok = sum(1,2);
    prhel();
    cout<<ok;
    return 0;
}
int sum(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}