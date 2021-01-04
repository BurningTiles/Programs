/*
 * Author : BurningTiles
 */

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
//#include <iomanip>
using namespace std;

//--------------------------------------------------------------------------------
class Item{
protected:
    int ID,Type,Price;
    string Name;

public:    
    Item(int id, int type, int price, string name): ID(id), Type(type), Price(price), Name(name){}
    
    float discountPrice(float rate){
        return Price*(1-rate);
    }

    virtual void print(){};
};



//--------------------------------------------------------------------------------
class Pen: public Item{
private:
    string inkColor;
    float pointSize;

public:
    Pen(int id, int type, int price, string name, string ink, float point): inkColor(ink), pointSize(point), Item(id,type,price,name){}

    void print(){
        cout << endl << "================== ID: " << ID << " =====================" << endl;
        cout << "Name: " << Name << endl;
        cout << "Price: $" << Price << "\tInk Color: " << inkColor << "\tPoint Size: " << pointSize << endl;
    }
};



//--------------------------------------------------------------------------------
class Folder: public Item{
private:
    string color;
    bool expanding;

public:
    Folder(int id, int type, int price, string name, string col, bool exp): color(col), expanding(exp), Item(id,type,price,name){}

    void print(){
        cout << endl << "================== ID: " << ID << " =====================" << endl;
        cout << "Name: " << Name << endl;
        cout << "Price: $" << Price << "\tColor: " << color << "\tExpanding: "; 
        (expanding)? cout << "Yes" : cout << "No";
        cout << endl;
    }
};



//--------------------------------------------------------------------------------
class Paper: public Item{
private:
    string size;
    int quantity;

public:
    Paper(int id, int type, int price, string name, string s, int q): size(s), quantity(q), Item(id,type,price,name){}

    void print(){
        cout << endl << "================== ID: " << ID << " =====================" << endl;
        cout << "Name: " << Name << endl;
        cout << "Price: $" << Price << "\tSize: " << size << endl;
    }
};

#endif