#include<iostream>
using namespace std;
//0....1....1....2....3....5
int main() 
{
    int num, first=0, second=1,next;
    cout<<"Enter the number of terms to be printed in the fibonacci series:- ";
    cin>>num;//6
    for (int i = 0; i<num;i++)//..0..1..2..3..4..5
    {
        cout<<first<<"...";//0..1..1..2..3..5
        next = first + second;//next = 0+1=1...next=1+1=2...next=1+2=3...next=2+3=5...next= 3+5==8...next=5+8=13 
        //cout<<next<<endl;
        first = second;//first = 1...1...2...3...5...8
        second = next;//second = 1...2...3...5...8...13
        
    }
    return 0;
}