#include <iostream>
#include <fstream>
#include "sort.h"
using namespace std;


int main(){
	ifstream in("input.txt");
	ofstream out("output.txt");

	if (in.fail()){
		cerr<<"Error in openning input file."<<endl;
		return -1;
	}
	if (out.fail()){
		cerr<<"Error in creating output file."<<endl;
		return -2;
	}

	int n;
	if ( ! (in >> n)) {
		cerr << "Reading number failed!\n";
		return -3;
	}

	if (n<1){
		cerr<<"Sorting not possible on less than 1 element."<<endl;
		return -4;
	}

	int x[n];
	for (int i=0; i<n; i++){
		if(!(in>>x[i])){
			cerr<<"Error in reading number."<<endl;
			return -5;
		}
	}

	quickSort(x,n);

	for (int i=0; i<n; i++)
		out<<x[i]<<"\n";

	return 0;
}
