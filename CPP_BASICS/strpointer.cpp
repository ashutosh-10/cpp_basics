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
    Person p[2];
    for (int i=0;i<2;i++)
    {
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }    
    for (int i=0;i<2;i++)
    {
        cout<<p[i].name<<endl;
        cout<<p[i].age<<endl;
        cout<<p[i].salary<<endl;
    }
    return 0;
}