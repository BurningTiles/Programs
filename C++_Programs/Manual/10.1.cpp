/*
 * This program is for illustrate concept of constructor and destructor.
 * In this we will create date class and it's constructor and destructor.
 */
#include <iostream>  // Header
using namespace std;
class DATE {  // Creating class DATE.
	public:
		DATE (int i){  // Constructor of class DATE. constructor have same as class name.
			cout<<"Enter date"<<i<<" (ddmmyyyy) : ";  
			cin>>dd>>mm>>yy;
			if(dd>31||mm>12||yy>3000){  //  Checking if the given date is valid or not.
				cout<<"Enter a valid date."<<endl;
				dd=mm=yy=0;
			}
		}
		~DATE(){  // Destructor, '~' is used to define it.
			cout<<"Destructed.";
		}
		void print(){   // It will print the dates.
			cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
	private:
		unsigned int dd,mm,yy;  // Declaring variables required for the date.
};
int main(){
	{  // In this scope we will declare 2 date objects.
		DATE D1(1),D2(2); // Declaring DATE1 and DATE2;
		cout<<endl<<"Printing DATE : "<<endl;
		D1.print(); // Print date1.
		D2.print(); // Print date2.
	}  // Destructor will be automatically called. when the scope of object is over.
	cout<<endl<<endl;
	return 0;
}
