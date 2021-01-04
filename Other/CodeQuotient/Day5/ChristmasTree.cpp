/**
 * Author  : BurningTiles
 * Created : 2020-08-06 18:28:41
**/ 
 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<2)
        cout << "You cannot generate christmas tree";
    else if(n>20)
        cout << "Tree is no more";
    else{
        for(int i=0; i<n; ++i)
            cout << ' ';
        cout << '*' << endl;
        for(int i=n; i>1; --i){
            for(int j=0; j<i; j++){
                for(int k=n; k>j+1; --k)
                    cout << ' ';
                for(int k=0; k<(j+1)*2+1; ++k)
                    cout << '*';
                cout << endl;
            }
        }
        for(int i=0; i<n; ++i)
            cout << ' ';
        cout << '*' << endl;
        for(int i=0; i<n; ++i)
            cout << ' ';
        cout << '*' << endl;
    }
    return 0;
}

/**
Chirag is a pure Desi boy. And his one and only dream is to meet Santa Claus. He decided to decorate a Christmas tree for Santa on coming Christmas. Chirag made an interesting Christmas tree that grows day by day.

The Christmas tree is comprised of the following

Parts
Stand
Each Part is further comprised of Branches. Branches are comprised of Leaves.

How the tree appears as a function of days should be understood. Basis that print the tree as it appears on the given day. Below are the rules that govern how the tree appears on a given day. Write a program to generate such a Christmas tree whose input is number of days.

Rules:
If tree is one day old you cannot grow. Print a message "You cannot generate christmas tree"
Tree will die after 20 days; it should give a message "Tree is no more"
Tree will have one part less than the number of days. e.g.
On 2nd day tree will have 1 part and one stand.

On 3rd day tree will have 2 parts and one stand

On 4th day tree will have 3 parts and one stand and so on.

Top-most part will be the widest and bottom-most part will be the narrowest.
Difference in number of branches between top-most and second from top will be 2
Difference in number of branches between second from top and bottom-most part will be 1
Below is an illustration of how the tree looks like on 4th day

Input Format
First line of input contains number of days denoted by N

Output Format
Print Christmas Tree for given N
OR
Print "You cannot generate christmas tree" if N <= 1
OR
Print "Tree is no more" if N > 20

Constraints:
0<= N <=20

Sample Input
4

Sample Output
    *
   ***
  *****
 *******
*********
   ***
  *****
 *******
   ***
  *****
    *
    *
**/
