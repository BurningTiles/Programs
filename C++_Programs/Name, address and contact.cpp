/*
    This program doesnt need more details.
    It just take name, address and contact no and print them.
*/

#include<iostream>
using namespace std;

int main()
{
    string address;  // string is Data type in C++, and address is variable.
    char name[21];
    long long no;
    cout<<"Enter name : ";
    cin.get(name,20);  //  To get input with space character.
    cin.ignore();  // It is used to flush the previous input memory so previous input cant affect on new input.
    cout<<"Enter Address : ";
    getline(cin,address);  //  New function for inserting value in string data type variable.
    cin.ignore();  // Ignore.
    cout<<"Enter Contact No. : ";
    cin>>no;

    cout<<"\nName : "<<name<<"\nAddress : "<<address<<"\nContact No. : "<<no<<endl;

    return 0;
}
