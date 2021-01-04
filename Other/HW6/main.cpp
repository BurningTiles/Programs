#include <iostream>
#include <fstream>
#include "item.h"

using namespace std;

void loadDataset(Item** &itemArr, int &N, string fileName){

	//Open the file
	ifstream inFile;
	inFile.open(fileName.c_str());

	//Read the first line
	string line;
	getline(inFile,line);
	N = atoi(line.c_str());

	//Allocate space for all items in the file
	itemArr = new Item*[N];

	//Read each item and load into the array
	int i = 0;
	while(getline(inFile,line)){

		int ind1 = line.find("#");
		int ind2 = line.find("#",ind1+1);
		int ind3 = line.find("#",ind2+1);
		int ind4 = line.find("#",ind3+1);
		int ind5 = line.find("#",ind4+1);

		int ID = atoi(line.substr(0,ind1).c_str());
		int type = atoi(line.substr(ind1+1, ind2-ind1-1).c_str());
		int price = atoi(line.substr(ind2+1, ind3-ind2-1).c_str());
		string name = line.substr(ind3+1, ind4-ind3-1);


		if(type == 1){//If the item is a Pen
			string inkColor = line.substr(ind4+1, ind5-ind4-1);
			float pointSize = atof(line.substr(ind5+1).c_str());

			//Create a Pen object and send it to item array
			itemArr[i] = new Pen(ID,type,price,name,inkColor,pointSize);
		}
		else if (type == 2){//If the item is a Folder
			string color = line.substr(ind4+1, ind5-ind4-1);
			bool expanding = atoi(line.substr(ind5+1).c_str());

			//Create a Folder object and send it to item array
			itemArr[i] = new Folder(ID,type,price,name,color,expanding);
		}
		else{//If the item is a Paper
			string size = line.substr(ind4+1, ind5-ind4-1);
			int quantity = atof(line.substr(ind5+1).c_str());

			//Create a Paper object and send it to item array
			itemArr[i] = new Paper(ID,type,price,name,size,quantity);
		}
		i++;
	}
	inFile.close();
}

int main(){

	string fileName = "dataset.txt"; //Dataset file

	//Item array to hold all different items
	Item** itemArr;

	//Size of the array
	int N;

	//Load the array with items
	loadDataset(itemArr,N,fileName);

	//Print all items in the array
	for(int i=0;i<N;i++){
		itemArr[i]->print();
		cout << "--> DISCOUNTED PRICE: $" << itemArr[i]->discountPrice(0.15) << endl;
	}

	return 0;
}
