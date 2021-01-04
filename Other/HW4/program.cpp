/*
 * Author : BurningTiles
 */

#include <iostream>
#include <fstream>
#include "car.h"
using namespace std;

int read(Car x[]){
    ifstream in("cardata.txt");
    if(in.fail()) return 0;
    int year, price, i=0;
    string VIN, make, model;
    while(in >> VIN >> make >> model >> year >> price && i<250){
        x[i].setVIN(VIN);
        x[i].setMake(make);
        x[i].setModel(model);
        x[i].setYear(year);
        x[i].setPrice(price);
        ++i;
    }
    in.close();
    return i;
}

void printAll(Car x[], int n){
    cout << endl;
    cout << setw(20) << left << "VIN"
         << setw(15) << left << "Make"
         << setw(20) << left << "Model"
         << setw(6)  << left << "Year" << "Price" << endl;
    cout << "---                 ----           -----               ----  -----" << endl;
    for(int i=0; i<n; ++i)
        x[i].print();
    cout << endl;
}

void printByMake(Car x[], int n){
    string temp;
    cout << endl << "Enter model name : ";
    cin >> temp;

    cout << endl;
    cout << setw(20) << left << "VIN"
         << setw(15) << left << "Make"
         << setw(20) << left << "Model"
         << setw(6)  << left << "Year" << "Price" << endl;
    cout << "---                 ----           -----               ----  -----" << endl;
    for(int i=0; i<n; ++i)
        if(x[i].getModel() == temp)
            x[i].print();
    cout << endl;
}

void printByPrice(Car x[], int n){
    int temp;
    cout << endl << "Enter max price : ";
    cin >> temp;
    if(cin.fail() || temp<1){
			cout << "Bad input, try again." << endl;
			cin.clear();
			cin.ignore(99999,'\n');
			return;
	}
    cout << endl;
    cout << setw(20) << left << "VIN"
         << setw(15) << left << "Make"
         << setw(20) << left << "Model"
         << setw(6)  << left << "Year" << "Price" << endl;
    cout << "---                 ----           -----               ----  -----" << endl;
    for(int i=0; i<n; ++i)
        if(x[i].getPrice() <= temp)
            x[i].print();
    cout << endl;
}

int main(){
    ifstream in("cardata.txt");
    Car x[250];
    int n, choice;
    n = read(x);

    if(n==0) return 0;

    while (true){
        cout << endl
             <<"1.Print All Cars" << endl
             <<"2.Print by Make"  << endl
             <<"3.Print by Price" << endl
             <<"4.Exit" << endl << "-> ";
        cin >> choice;
        while(cin.fail()){
		    cout << "Bad input, try again." << endl << "-> ";
		    cin.clear();
		    cin.ignore(99999,'\n');
		    cin >> choice;
	    }
        clear();

        switch(choice){
            case 1:
                printAll(x,n);
                break;
            case 2:
                printByMake(x,n);
                break;
            case 3:
                printByPrice(x,n);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid input." << endl;
        }
    }

    return 0;
}
