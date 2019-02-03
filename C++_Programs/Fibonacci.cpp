/*
    Program for fibonacci series.
    with using function.

    Regards Manish.
*/

#include<iostream>
using namespace std;
void fib(int n)  // Function to print fibonacci series till n terms.
{
    long long x=0,y=1,temp,i;
    cout<<"Fibonacci series of n terms.\n";
    for(i=1;i<=n;i++)
    {
        cout<<x<<" ";
        temp=x+y;
        x=y;
        y=temp;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter length for Fibonacci series : ";
    cin>>n;
    if(n<1 || n>50)  // You can extend the limit but you need higher data type.
    {
        cout<<"Enter valid length.\n";
        return 0;
    }
    fib(n);
    return 0;
}
