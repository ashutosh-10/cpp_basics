#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the size of the array:- ";
    cin>>n;
    int a[n];
    cout<<"Enter the values:- ";
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"THE VALUES ARE:- \n";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}