#include<iostream>
using namespace std;

int main() 
{
    int a[2][2],b[2][2];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }
    cout<<"A MATRIX"<<endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    cout<<"B MATRIX"<<endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }



    cout<<"A + B MATRIX"<<endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout<<a[i][j] + b[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


