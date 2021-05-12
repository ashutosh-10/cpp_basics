#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
    char arr[100];
    cout<<"Enter your name and age:- ";
    cin.getline(arr,100);

    ofstream myfile("xyz.txt");

    myfile<<arr;
    myfile.close(); 

    cout<<"File write operation performed successfully";

    char arr1[100];
    cout<<"READING \n";
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"array content:- "<<arr1<<endl;
    cout<<"File read operation performed successfully";
    obj.close();
    return 0;
}