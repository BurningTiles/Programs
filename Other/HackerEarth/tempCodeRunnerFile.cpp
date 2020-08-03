/*
 * Author   : BurningTiles
 * Question : Duration
 */

#include <iostream>
using namespace std;

int main(){
	int SH, SM, EH, EM, HH, MM, tt;
	cin >> tt;
	++tt;

	while(--tt){
		cin >> SH >> SM >> EH >> EM;
		cout << SH << SM << EH << EM;
		if(EM<SM){
			MM = EM+60-SM;
			--EH;
		}
		else MM = EM-SM;
		HH = EH-SH;

		cout << HH << ' ' << MM << endl;
	}
	return 0;
}

/*
 * Question
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/
 */