/*
 * This program is for printing fibonacci series till n terms.
 * It usage basic swap method to implementation.
 */

#include<iostream>
using namespace std;
void fib(int n)  // Function to print fibonacci series till n terms.
{
    long long x=0,y=1,temp,i;  // Declaring variables.
    cout<<"Fibonacci series of "<<n<<" terms.\n";
    for(i=1;i<=n;i++)  // Using loop to go till n terms.
    {
        cout<<x<<" ";
        temp=x+y;  // Swaping values of variable.
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
    fib(n);  // Calling function to print fibonacci series.
    return 0;
}

