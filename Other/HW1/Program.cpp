/*
 * Author : Manish
 *
 * Input data  : tempData.txt
 * Output data : output.txt
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
	ifstream in("inputData.txt");
	ofstream out("output.txt");
	
	if (in.fail()){
		cerr<<"Error in openning input file."<<endl;
		return -1;
	}
	if (out.fail()){
		cerr<<"Error in creating output file."<<endl;
		return -2;
	}
	
	string city;
	int i;
	double sum,temp;
	
	cout << "Calculating data..." << endl << endl;
	
	while (in >> city){
		sum = 0;
		for ( i=0 ; i<12 ; i++ ) {
			in >> temp;
			sum += temp;
		}
		sum /= 12;
		out << "City: " << setw(25) << std::left << city << "Average Temp: " << sum << endl;
	}
	
	cout << "Operation Completed." << endl << endl;
	
	return 0;
}