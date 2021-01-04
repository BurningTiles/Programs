/**
 * Created : 2020-11-04 09:20:43
**/

#include <iostream>
#include <fstream>
#include <queue>
#define endl '\n'
using namespace std;

class Process {
	private:
		int ID, execTime;
	public:
		Process(int i, int e):ID(i), execTime(e) {}
		void execute(){
			if(execTime>0) --execTime;
		}
		int getID(){
			return ID;
		}
		int getTime(){
			return execTime;
		}
		void print(){
			cout << "Process: " << ID << "    Remaining Time:" << execTime << " ms" << endl;
		}
};

int main(){
	ifstream in("processlist.txt");
	queue<Process> q;
	int ID, execTime;
	while(in >> ID >> execTime) {
		if(execTime < 1){
			cout << "Error in reading" << endl;
			return 0;
		}
		q.push(Process(ID,execTime));
	}
	
	queue<Process> temp=q;
	cout << endl << endl << "List of process:\n";
	while(temp.size()){
		temp.front().print();
		temp.pop();
	}
	cout << endl << endl;

	while(q.size()){
		Process tmp = q.front();
		q.pop();
		tmp.execute();
		if( !tmp.getTime() )
			cout << "+ Process: " << tmp.getID() << " is completed!" << endl;
		else {
			//cout << "Process with ID=" << tmp.getID() << " needs " << tmp.getTime() << " more ms of execution." << endl;
			q.push(tmp);
			cout << "- Process: " << tmp.getID() << " sent back of the queue! Remaining Time: " << tmp.getTime() << "ms" << endl;
		}
	}
	return 0;
}