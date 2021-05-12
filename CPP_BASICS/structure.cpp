#include<iostream>
using namespace std;
struct Person
{
    char name[100];
    int age;
    double salary;
};
int main() 
{
    Person p1;
    cout<<"Person details\n"<<"Person Name:- \n"; 
    cin>>p1.name;
    cout<<"Person age:- \n";
    cin>>p1.age;
    cout<<"Person salary:- \n";
    cin>>p1.salary;

    cout<<"Person details are:- ";
    cout<<p1.name<<endl;
    cout<<p1.age<<endl;
    cout<<p1.salary<<endl;
    return 0;
}