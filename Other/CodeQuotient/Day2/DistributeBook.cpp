/*
 * Author : BurningTiles
 */

#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll x1=0 , x2=1, temp, n;
    cin >> n;
    if(n==1)
        cout << x1;
    else if(n==2)
        cout << x2;
    else{
        for(ll i=3; i<=n; i++){
            temp = (i-1)*(x1+x2)%100000007;
            x1 = x2;
            x2 = temp;
        }
        cout << temp;
    }
    return 0;
}


/*
For enhancing the book reading, school distributed story books to students as part of the Children’s day celebrations. To increase the reading habit, the class teacher decided to exchange the books every weeks so that everyone will have a different book to read. She wants to know how many possible exchanges are possible.

If they have 4 books and students, the possible exchanges are 9. Bi is the book of i-th student and after the exchange, he should get a different book, other than Bi.

B1 B2 B3 B4 – first state, before exchange of the books

B2 B1 B4 B3

B2 B3 B4 B1

B2 B4 B1 B3

B3 B1 B4 B2

B3 B4 B1 B2

B3 B4 B2 B1

B4 B1 B2 B3

B4 B3 B1 B2

B4 B3 B2 B1

Find the number of possible exchanges, if the books are exchanged so that every student will receive a different book.


Constraints
1<= N <= 1000000

Input Format
Input contains one line with N, indicates the number of books and number of students.

Output Format
Output the answer modulo 100000007.

Sample Input
4

Sample Output
9
*/