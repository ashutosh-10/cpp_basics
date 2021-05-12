#include<iostream>
using namespace std;

int main() 
{
    int temp,a,b,c;
    cout<<"Enter a number to check whether the number is palindrome or not? ";
    cin>>a;
    temp =a;
    c =0;
    while(a!=0)
    {

        b = a%10;
        c = (c*10) + b; 
        a = a/10;
    }
    if (c == temp)
    {
        cout<<"The number is a palindrome";
    }
    else
    cout<<"Not palindrome";

    return 0;
}











