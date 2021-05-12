#include<iostream>
using namespace std;
struct Person{
    char name[100];
    int age;
    double sal;
};
int main() 
{
    Person p;

    Person *pp = &p;
    cin>>pp->name;
    cin>>pp->age;
    cin>>pp->sal;

    cout<<"Details of the person are: \n";
    cout<<"name: "<<pp->name<<endl;
    cout<<"age: "<<pp->age<<endl;
    cout<<"salary: "<<pp->sal<<endl;

    return 0;
}