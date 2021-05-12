#include<iostream>
using namespace std;


int sum (int a, int b, int c = 2, int d = 3)
{
    return (a+b+c+d);
}
int main() 
{
    cout<<"addition is"<<sum(1,2);
    return 0;
}