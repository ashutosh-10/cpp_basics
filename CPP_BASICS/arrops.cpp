#include<iostream>
using namespace std;

int main() 
{
    int a[3],b[3],add[3],mul[3];
    for (int i=0; i<3;i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<3;i++)
    {
        cin>>b[i];
    }

    for (int i=0; i<3;i++)
    {
        add[i] = a[i]+b[i];
    }
    for (int i=0; i<3;i++)
    {
        cout<<add[i]<<" ";
    }
    cout<<"\nmul\n";
    for (int i=0; i<3;i++)
    {
        cout<<a[i]*b[i]<<" ";
    }
    cout<<"\nsub\n";

    for(int i=0;i<3;i++)
    {
        cout<<a[i] - b[i]<<" ";
    }
    return 0;
}