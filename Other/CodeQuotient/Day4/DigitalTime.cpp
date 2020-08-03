/*
 * Author : BurningTiles
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> x;

int get(int limit){
    if(x[0] > limit)
        return -1;
    int i=0;
    while(++i){
        //cout << i << ' ';
        if(x[i]>limit){
            int temp = x[i-1];
            //cout << temp << endl;
            x.erase(x.begin()+i-1);
            return temp;
        }
    }
}

void print(){
    int temp;

    temp = (x[5]<6)? get(2) : get(1);
    if(temp == -1){
        cout << "Impossible";
        return;
    }
    cout << temp;
    
    temp = (temp < 2)? get(9) : get(4);
    if(temp == -1){
        cout << "Impossible";
        return;
    }
    cout << temp << ':';

    temp = get(5);
    if(temp == -1){
        cout << "Impossible";
        return;
    }
    cout << temp;
    temp = get(9);
    if(temp == -1){
        cout << "Impossible";
        return;
    }
    cout << temp << ':';

    temp = get(5);
    if(temp == -1){
        cout << "Impossible";
        return;
    }
    cout << temp;
    temp = get(9);
    if(temp == -1){
        cout << "Impossible";
        return;
    }
    cout << temp;
}

int main(){
    int temp;
    char c;

    cin >> temp;
    x.push_back(temp);
    for(int i=1; i<9; ++i){
        cin >> c >> temp;
        x.push_back(temp);
    }
    x.push_back(10);

    print();

    return 0;
}

/*

*/