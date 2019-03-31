/*
 * This program is to illustrate the more details about inheritance.
 * In this three class are created and two are inherited by using hierarchical inheritance.
 */
#include<iostream>
using namespace std;
class Item{ // Item class.
	protected:
		uint64_t item_code,cost,discount;  // variables. Also can use long long.
		string item_name;  // variables.
	public:
		Item(){  // Default constructor.
			cout<<endl<<"Enter Item details."<<endl;
			cout<<"Item name    : "; getline(cin,item_name);
			cout<<"Item code    : "; cin>>item_code;
			cout<<"Item cost    : "; cin>>cost;
			cout<<"Discount     : "; 
			while(1){
				if(cin>>discount && discount<101) break;
				cin.ignore();
				cout<<"Enter valid discount.\nTry again : ";
			}
			cin.ignore(); cin.clear();
	 	}
		void print_item(){  // Print function.
			cout<<endl<<"Item Details.\n";
			cout<<"Item name    : "<<item_name<<endl;
			cout<<"Item code    : "<<item_code<<endl;
			cout<<"Item cost    : "<<cost<<endl;
			cout<<"Discount     : "<<discount<<endl;
		}
};
class Employee:private Item{  // Derived from Item.
	private:
		uint64_t amount,employee_code;
		string employee_name;
	public:
		Employee():Item(){
			cout<<endl<<"Employee name : "; getline(cin,employee_name);
			cout<<"Employee code : "; cin>>employee_code;
			amount=cost*(100-discount)/100;
			cin.ignore(); cin.clear();
		}
		void print_employee(){
			cout<<endl<<endl<<"Employee Details.\n";
			cout<<"Employee name : "<<employee_name<<endl;
			cout<<"Employee code : "<<employee_code<<endl;
			print_item();
			cout<<"Pay Amount   : "<<amount<<endl;
		}
};
class Customer:private Item{
	private:
		uint64_t amount;
		string customer_name;
	public:
		Customer():Item(){
			cout<<endl<<"Customer Name : "; getline(cin,customer_name);
			amount=cost*(100-discount)/100;
			cin.clear(); // for single input use it.
		}
		void print_customer(){
			cout<<endl<<endl<<"Customer Details.\n";
			cout<<"Customer name  : "<<customer_name<<endl;
			print_item();
		}
};
int main(){
	cout<<endl<<"Enter details for Employee."<<endl;
	Employee e1;
	cout<<endl<<endl<<"Enter details for Customer."<<endl;
	Customer c1;
	cout<<endl<<endl<<"Printing the data."<<endl;
	e1.print_employee();
	c1.print_customer();
	return 0;
}
