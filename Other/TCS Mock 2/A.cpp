/*
 * Author  : BurningTiles
 * Problem : Swayamvar
 * File    : A.cpp 
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    string temp1,temp2;
    cin >> temp1 >> temp2;

    vector<char> bride(temp1.begin(),temp1.end()), groom(temp2.begin(),temp2.end());
    vector<char>::iterator it;

    for(int i=0; i<n; i++){
        it = find(groom.begin(),groom.end(),bride[i]);
        if( it != groom.end() )
            groom.erase(it);
        else
            break;
    }

    cout << int(groom.size()) << endl;

    return 0;
}