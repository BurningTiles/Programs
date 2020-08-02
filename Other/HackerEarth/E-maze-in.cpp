/*
 * Author   : BurningTiles
 * Question : E-maze-in
 */

#include <iostream>
using namespace std;

int main(){
    char str[201];
    cin >> str;

    int i=0, j=0, c=0;
    while(str[c] != '\0'){
        if(str[c] == 'L') --i;
        else if(str[c] == 'R') ++i;
        else if(str[c] == 'U') ++j;
        else if(str[c] == 'D') --j;
        ++c;
    }
    cout << i << ' ' << j;
	return 0;
}

/*
 * Question
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/
 */