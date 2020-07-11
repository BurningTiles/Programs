//Sample client code for interfacing with myArray class
//Use this driver program to test your class and defensive programming assertions

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Array.h"	//replace this with your own file

using namespace std;

int main(){
	int size, choice, read, write;
	string input;
	char replace, response;

	cout << "Welcome\nPlease enter a maximum size for your array : ";
	cin >> size;
	while(cin.fail()){
		cout << "Bad input, try again." << endl << "-> ";
		cin.clear();
		cin.ignore(99999,'\n');
		cin >> size;
	}

	cout << "Please enter a series of comma-separated characters for your array" << endl << "-> ";
	cin >> input;
	while(cin.fail()){
		cout << "Bad input, try again." << endl << "-> ";
		cin.clear();
		cin.ignore(99999,'\n');
		cin >> size;
	}

	//create object of class type which should dynamically allocate a char* array
	//of int size and fill it with the comma-separated values from string input

	Array myArray(size, input);

	while(1){

		cout << endl << "Array Menu" << endl;
		cout << "1. Read by index" << endl;
		cout << "2. Write by index" << endl;
		cout << "3. Delete array" << endl;
		cout << "4. Print array" << endl;
		cout << "5. New Array" << endl;
		cout << "6. Exit" << endl << "-> ";
		cin >> choice;
		clear();
		if(cin.fail()){
			cout << "Bad input, try again." << endl;
			cin.clear();
			cin.ignore(99999,'\n');
			continue;
		}

		switch(choice){
			case 1:
				cout << "Index should be in range of size of array." << endl;
				cout << "Enter an index to read a value from the array : ";
				cin >> read;
				if(cin.fail()){
					cout << "Bad input, try again." << endl;
					cin.clear();
					cin.ignore(99999,'\n');
				}
				//call to library function ReadFromArray(int read)
				//this library call should read a single character from the array and return it
				else{
					response = myArray.ReadFromArray(read);
					if(response != '\0')
						cout << "The item in index[" << read << "] is " << response << endl;
				}
				break;
			case 2:
				cout << "Index should be in range of size of array." << endl;
				cout << "Enter an index to write a value to the array : ";
				cin >> write;
				if(cin.fail()){
					cout << "Bad input, try again." << endl;
					cin.clear();
					cin.ignore(99999,'\n');
				}
				else{
					cout << "What single character would you like to write to the array?" << endl << "-> ";
					cin >> replace;
					if(cin.fail()){
						cout << "Bad input, try again." << endl;
						cin.clear();
						cin.ignore(99999,'\n');
					}
					else{
			  			//call to library function WriteToArray(int write, char replace)
			  			//this library call should write a single character to the array
			  			if(myArray.WriteToArray(write,replace))
			  				cout << "The new item in index[" << write << "] is " << replace << endl;
					}
				}
			  	break;
			case 3:
			  	//call to library function DeleteArray() which should free the dynamically allocated array
			  	cout << endl << "Deleting memory allocated to array." << endl;
			  	myArray.DeleteArray();
			  	break;
			case 4:
			  	//call to library function PrintArray() which will print the contents of the array to stdout
			  	cout << endl << "Printing all values of array." << endl;
			  	myArray.PrintArray();
			  	break;
			case 5:
			  	//call to library function NewArray() which will dynamically allocate a new array
		  	  	cout << "Welcome\nPlease enter a maximum size for your array : ";
			  	cin >> size;
				if(cin.fail()){
					cout << "Bad input, try again." << endl;
					cin.clear();
					cin.ignore(99999,'\n');
				}
				else{
					cout << "Please enter a series of comma-separated characters for your array" << endl << "-> ";
			  		cin >> input;
					if(cin.fail()){
						cout << "Bad input, try again." << endl;
						cin.clear();
						cin.ignore(99999,'\n');
					}
					else
			  			myArray.NewArray(size, input);
				}
			break;
			case 6:
			  	exit(0);
			  	break;
			default:
				cout << "Invalid choice." << endl;
		}
	}
	return 0;
}
