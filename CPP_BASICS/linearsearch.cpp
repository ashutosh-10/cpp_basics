#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }

    }
    return -1;
    
}

int main()
{
    
    int n;
    cout<<"Enter a size of an array:- ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array:- \n";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"Enter a digit to be searched";
    cin>>key;

    cout<<"The element "<<key<<"is present at position:- "<<linearSearch(a,n,key);
    return 0;
}
