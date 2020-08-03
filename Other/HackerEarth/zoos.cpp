/*
 * Author   : BurningTiles
 * Question : Zoos
 */

#include <iostream>
using namespace std;

int main(){
    string str;
    int count=0;

    cin >> str;
    while(str.at(count) == 'z') ++count;

    ((str.length()-count+1)/2 == count)? cout << "Yes" : cout << "No";

	return 0;
}

/*
 * Question
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
 */