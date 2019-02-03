/*
 * This to get student's name,address and contact number and print it.
 */

#include<iostream>  // Header file
using namespace std;

int main()
{
    string name,address;  // string is datatype in c++
    long long number;  // long long datatype for contact no.
    cout<<"Enter your name : ";
    getline(cin,name);  // using getline predefined function to get input in program.
    cout<<"Enter address : ";
    getline(cin,address);
    cout<<"Enter contact no. : ";
    cin>>number;

    cout<<"\n\nName        : "<<name<<"\nAddress     : "<<address<<"\nContact no. : "<<number<<endl;
    return 0;
}
