#include<iostream>
using namespace std;

int main() 
{
    int a,b;
    a = 588;
    b = 794;
    cout<<"Before swapping a:- "<<a<<" b:- "<<b<<endl;
    a = a+b;
    b = a-b;
    a =  a-b;
    cout<<"After swapping a:- "<<a<<" b- "<<b; 
    return 0;
}