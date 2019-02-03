/*
    This programm is for basic calculations using switch in main function.
    It's too easy so need detailed discription.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Choose Operation.\n1.Sum       2.Subtract\n3.Multiply  4.Divide\n: ";
    cin>>i;
    cout<<"Enter two values : ";
    cin>>a>>b;
    switch(i)
    {
        case 1: cout<<a<<" + "<<b<<" = "<<a+b<<endl; break;
        case 2: cout<<a<<" - "<<b<<" = "<<a-b<<endl; break;
        case 3: cout<<a<<" x "<<b<<" = "<<a*b<<endl; break;
        case 4: cout<<a<<" / "<<b<<" = "<<a/b<<endl; break;
        default : cout<<"Enter Valid Choice.\n";
    }
    return 0;
}
