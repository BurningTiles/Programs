/*
 * Author   : BurningTiles
 * Question : Vovel Recognition
 */

#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll tt, ans, len;
    cin >> tt;
    ++tt;

    char x[100001];
    while(--tt){
        cin >> x;
        len = ans = 0;
        while(x[len] != '\0') ++len;
        for(int i=0; i<len; ++i)
            if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U')
                ans += (i+1)*(len-i);
        cout << ans << endl;
    }
	return 0;
}

/*
 * Question
 * https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/vowel-game-f1a1047c/
 */