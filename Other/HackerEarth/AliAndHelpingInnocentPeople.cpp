/*
 * Author   : BurningTiles
 * Question : Ali and helping innocent people
 */

#include <iostream>
using namespace std;

int main(){
	char str[100];
	cin >> str;
	
	int i=1;
	while(str[i] != '\0'){
		if(isdigit(str[i]) && isdigit(str[i-1]))
			if((int(str[i]) + int(str[i-1])) % 2 == 1){
				cout << "invalid";
				return 0;
			}
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y'){
			cout << "invalid";
			return 0;
		}
		++i;
	}

	cout << "valid";
	return 0;
}

/*
 * Question
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/
 */