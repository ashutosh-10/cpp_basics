// #include<iostream>
// using namespace std;
// void print()
// {
//     cout<<"Hello";
// }

// void print(int x)
// {
//     cout<<x;
// }

// void print(double x)
// {
//     cout<<x;
// }

// int main() 
// {   
//     print(2.2);
//     return 0;
// }




#include<iostream>
using namespace std;



int add(int a,int b)
    {
        return (a+b);
    }

    double add(double a, double b)
    {
        return (a+b);
    }

int main() 
{   
    cout<<"addtion is:- "<<add(1.2,1.2);
    return 0;
}