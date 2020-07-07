/*
 * Author  : Manish
 * Program : Lab PC management
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Lab{
    string *list;
    int size;
};

void init(Lab x[]){
    int temp[] = {10,6,3,12};
    for(int i=0; i<4; ++i){
        x[i].size = temp[i];
        x[i].list = new string[temp[i]];
        for(int j=0; j<temp[i]; ++j) x[i].list[j]="";
    }
}

void print(Lab x[]){
    cout << " Lab 1               Lab 2               Lab 3               Lab 4" << endl;
    cout << " --- -               --- -               --- -               --- -" << endl;
    int temp[]={0,0,0,0};
    while(temp[0]<x[0].size || temp[1]<x[1].size || temp[2]<x[2].size || temp[3]<x[3].size){
        for(int i=0; i<4; ++i){
            if (temp[i]<x[i].size) cout << '-' << setw(19) << left << ("PC"+to_string(temp[i]+1));
            else cout << "                    ";
        }
        cout << endl << ' ';
        for(int i=0; i<4; ++i){
            if (temp[i]<x[i].size){
                if(x[i].list[temp[i]].size()==0) {
                    cout << setw(20) << left << "Free";
                    temp[i]++;
                }
                else cout << setw(20) << left << x[i].list[temp[i]++];
            }
            else cout << "                    ";
        }
        cout << endl;
    }
}

void login(Lab x[]){
    string temp;
    int l,c;
    cout << "Enter your name : ";
    cin >> temp;
    if(cin.fail()){ cout<<"Bad input."<<endl; cin.clear(); cin.ignore(99999,'\n'); return; }
    cout << "Enter Lab number and computer number : ";
    cin >> l >> c;
    if(cin.fail()){ cout<<"Bad input."<<endl; cin.clear(); cin.ignore(99999,'\n'); return; }
    if(l<1 || l>4) cerr << "Invalid lab number." << endl;
    else if(c<1 || c>x[--l].size) cerr << "Invalid computer number." << endl;
    else if(x[l].list[--c].size()>0) cerr << "Computer not available." << endl;
    else{
        x[l].list[c] = temp;
        cout << "Login successful." << endl;
    }
}

void logout(Lab x[]){
    int l,c;
    cout << "Enter Lab number and computer number : ";
    cin >> l >> c;
    if(cin.fail()){ cout<<"Bad input."<<endl; cin.clear(); cin.ignore(99999,'\n'); return; }
    if(l<1 || l>4) cerr << "Invalid lab number." << endl;
    else if(c<1 || c>x[--l].size) cerr << "Invalid computer number." << endl;
    else if(x[l].list[--c].size()==0) cerr << "Computer is already Free." << endl;
    else{
        x[l].list[c] = "";
        cout << "Logout successful." << endl;
    }
}

void addComputers(Lab x[]){
    int l;
    cout << "Enter Lab number : ";
    cin >> l;
    if(cin.fail()){ cout<<"Bad input."<<endl; cin.clear(); cin.ignore(99999,'\n'); return; }
    if(l<1 || l>4) cerr << "Invalid lab number." << endl;
    else{
        --l;
        int n;
        cout << "Enter number of new computers : ";
        cin >> n;
        if(cin.fail()){ cout<<"Bad input."<<endl; cin.clear(); cin.ignore(99999,'\n'); return; }
        if(n<1){
            cerr << "Number of new computer cannot be less than 1." << endl;
        }
        else{
            int size = x[l].size + n, i;
            string *temp = new string[size];
            for(i=0; i<x[l].size; i++) temp[i] = x[l].list[i];
            for(i=x[l].size; i<size; i++) temp[i] = "";
            x[l].size = size;
            x[l].list = temp;
            cout << "Computers added successfully." << endl;
        }
    }
}

int main(){
	int choice;
    Lab comp[4];

    init(comp);

	while (true){
		cout << "\n--------------------------------------------------------------------------------\n";
		cout << "1.Print current status of computers in all labs\n2.Login a new student to a computer in lab\n3.Logout a student from his/her computer in a lab\n4.Exit\n5.Add new computers to lab\n\n-> ";
        cin >> choice;
        if(cin.fail()){ cout<<string(100,'\n')<<"Bad input."<<endl; cin.clear(); cin.ignore(99999,'\n'); continue; }

		cout << string( 100, '\n' );
		switch (choice){
			case 1:
				print(comp);
				break;
			case 2:
				login(comp);
				break;
			case 3:
				logout(comp);
				break;
			case 4:
				return 0;
				break;
			case 5:
				addComputers(comp);
                break;
			default:
			    cout << "Enter valid choice." << endl;
		}
	}
	return 0;
}
