#include<iostream>
using namespace std;

void passByAddress(int *a,int *b)
{   
    int c = *a;
    *a=*b;
    *b=c;

}


int main() 
{

    int x = 5, y=6;
    cout<<"Before swapping the values are:- "<<x<<" "<<y<<endl;

    passByAddress(&x,&y);


    cout<<"After swapping the values are:- "<<x<<" "<<y<<endl;

    
    return 0;
}