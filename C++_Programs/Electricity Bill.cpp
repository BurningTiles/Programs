/*
    Question:
    An electricity board charges the following rates to domestic user to discourage large consumption of energy
    1: For the first 100 units 60p per unit
    2: next 200 units 80p per unit
    3: beyond 300 units 90p per unit
    all users are charged a minimum of 50rs. if the total amount is more than 300rs. than additional charge of 15% is added.
    WAP(write a program) to read name of users & number of units consumed and printout charges with name.

    Regards Manish.
*/
#include <iostream> // Headers
#include <iomanip>
#include <cstdlib>
#define N 20 // Size for list. you can change.

using namespace std;
int top=0;
float unit[N],chrg[N];  // Declaring globle variables for unit and charges.
char name[N][20];  // Declaring globle variable for name list.

float charge(float x){  // Function to calculate charges.
	float c=(x<=100)?x*0.6:(x<=300)?60+(x-100)*0.8:60+80+(x-300)*0.9;
	return (c<50)?50:(c>300)?c*1.15:c;
}

void insert()
{
	system("clear");  // It will clear screen. For windows replace "clear" with "cls"
	if(top>=(N-1))  // Checking if the list is full or not.
	{
		cout<<"List is full.\n";
		return;
	}
	cout<<"\nEnter name : ";
	cin>>name[top];
	cout<<"Enter units used : ";
	cin>>unit[top];
	chrg[top]=charge(unit[top]);
	top++;
}

void result()  // Function to print results.
{
	system("clear");  // It will clear screen. For windows replace "clear" with "cls"
	cout<<"      Name     Units    Charge\n      ----     -----    ------\n";
	for(int i=0;i<top;i++)
	{
		cout<<setw(10)<<name[i]<<setw(10)<<unit[i]<<setw(10)<<chrg[i]<<endl;
	}
	cout<<endl<<endl<<setfill('-')<<setw(80)<<"-";
}

int main()
{
	int choice;
	while(1)
	{
		cout<<"\n1.Insert \t2.Result\n";
		cin>>choice;
		if (choice==1)	insert();
		else if (choice==2)
		{
			result();
			break;
		}
		else cout<<"\nEnter Valid Choice.\n";
	}
	return 0;
}
