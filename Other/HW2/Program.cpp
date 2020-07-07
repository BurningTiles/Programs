/*
 * Author : Manish
 *
 * Input data  : tickets.txt
 * Output data : tickets.txt
 *
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void init(char seats[16][31]){
	ifstream in("tickets.txt");
	if (in.fail()){
		cerr << "No input data found.\nInitializing from beginning." << endl;
		in.close();
		return;
	}
	int x,y;
	while (in >> x >> y)
		seats[x][y] = '#';
	in.close();
}

void print(char seats[16][31]){
	cout << "   ";
	for (int i=1; i<31; i++) cout << setw(2) << i << " ";
	cout << endl;
	for (int i=1; i<16; i++){
		cout << setw(2) << i << " ";
		for (int j=1; j<31; j++) cout << setw(2) << seats[i][j] << " ";
		cout << endl;
	}
}

void sell(char seats[16][31]){
	int x,y;
	cout << "Enter seat raw and column number of seat : ";
	cin >> x >> y;
	if (0<x && x<16 && 0<y && y<31){
		if (seats[x][y] == '#'){
			cout << "Sorry, Selected Seat not available." << endl;
		}
		else{
			seats[x][y] = '#';
			cout << "Enjoy your movie." << endl;
		}
	}
	else
		cout << "Enter valid raw and column number." << endl;
}

void refund(char seats[16][31]){
	int x,y;
	cout << "Enter seat raw and column number of seat : ";
	cin >> x >> y;
	if (0<x && x<16 && 0<y && y<31){
		if (seats[x][y] == '-'){
			cout << "Sorry, Selected Seat is not sold." << endl;
		}
		else{
			seats[x][y] = '-';
			cout << "Refund successful." << endl;
		}
	}
	else
		cout << "Enter valid raw and column number." << endl;
}

void save(char seats[16][31]){
	ofstream out("tickets.txt");
	if (out.fail()){
		cerr << "Error in storing data.\nCheck write permission." << endl;
		out.close();
		return;
	}
	for (int i=1; i<16; i++)
		for (int j=1; j<31; j++)
			if(seats[i][j] == '#')
				out << i << " " << j << endl;
	out.close();
	cout << "Data stored sucessfully." << endl;
}

int main(){
	char seats[16][31];
	int choice;
	for (int i=0; i<16; i++)
		for (int j=0; j<31; j++) seats[i][j] = '-';

	init(seats);

	while (true){
		cout << "\n-----------------------------------------------------\n";
		cout << "1.View Current Seats\n2.Sell Ticket\n3.Refund Ticket\n4.Save Data File\n5.Exit Program\n\n-> ";
		cin >> choice;
		cout << string( 100, '\n' );

		switch (choice){
			case 1:
				print(seats);
				break;
			case 2:
				sell(seats);
				break;
			case 3:
				refund(seats);
				break;
			case 4:
				save(seats);
				break;
			case 5:
				return 0;
			default:
			    cout << "Enter valid choice." << endl;
		}
	}
	return 0;
}
