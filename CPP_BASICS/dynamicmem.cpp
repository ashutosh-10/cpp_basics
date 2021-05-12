#include<iostream>
using namespace std;

int main() 
{
    int size;
    int *a;
    cout<<"Enter the size: ";
    cin>>size;
    a = new int [size];
    cout<<"Enter values to be stored in the array:- ";
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"The values are:- ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}