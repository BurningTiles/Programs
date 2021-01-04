/*
 * Author : BurningTiles
 */

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <iomanip>
using namespace std;

#if defined(WIN32) || defined(_WIN32)
void clear() {system("cls");}
#elif defined(UNIX) || defined(LINUX) || defined(__unix__) || defined(__linux__)
void clear() {system("clear");}
#else
void clear() {std::cout << std::string(100,'\n');}
#endif

class Car{

private:
    int year, price;
    string VIN, make, model;    

public:
    
    Car(){
        year = price = 0;
        VIN = make = model = "";
    }
    
    Car(string newVIN, string newMake, string newModel, int newYear, int newPrice){
        VIN = newVIN;
        make = newMake;
        model = newModel;
        year = newYear;
        price = newPrice;
    }

    void setVIN(string newVIN){
        VIN = newVIN;
    }

    void setMake(string newMake){
        make = newMake;
    }

    void setModel(string newModel){
        model = newModel;
    }

    void setYear(int newYear){
        year = newYear;
    }
    
    void setPrice(int newPrice){
        price = newPrice;
    }
    
    string getVIN(){
        return VIN;
    }
    
    string getMake(){
        return make;
    }
    
    string getModel(){
        return model;
    }
    
    int getYear(){
        return year;
    }
    
    int getPrice(){
        return price;
    }
    
    void print(){
        cout << setw(20) << left << VIN 
             << setw(15) << left << make 
             << setw(20) << left << model 
             << setw(6) << left << year << price << endl;
    }

};

#endif