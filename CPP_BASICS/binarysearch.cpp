#include<iostream>
using namespace std;
int binarysearch(int arr[], int left, int right,int key)
{
    while (left<=right)
    {
        int mid = (left + right)/2;

        if(arr[mid] == key)
        {
            return mid;
        }

        else if (key>arr[mid])
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
        

    }

    return -1;
    


}
int main()
{
    int n;
    cout<<"\nEnter array size:- ";
    
    cin>>n;
    int arr[n];
    cout<<"\nEnter array values:- ";
    for (int i = 0; i < n; i++)
    {
        //cout<<endl<<i<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"\nEnter a value you want to search:- ";
    cin>>key;
    int bs;
    bs = binarysearch(arr,0,n-1,key);


    if (bs==-1)
    {
        cout<<"\nNo value found";
    }

    else
    {
        cout<<"\nMatch found at index positon:- "<<bs<<endl;
    }
    
    return 0;
}
