/*
 * Author  : Manish
 * File    : Driver
 */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <stdlib.h>

#if defined(WIN32) || defined(_WIN32) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__)
void clear() {system("cls");}
#elif defined(UNIX) || defined(LINUX) || defined(__unix__) || defined(__linux__)
void clear() {system("clear");}
#else
void clear() {std::cout << std::string(100,'\n');}
#endif


class Array{
    private:
        int size = 0;
        char *list = NULL;
    public:
        Array(int n, std::string str){
            NewArray(n,str);
        }

        ~Array(){
            delete []list;
        }

        char ReadFromArray(int index){
            if(index<1 || index>size){
                std::cerr << "Index is not in range." << std::endl;
                return '\0';
            }
            return list[index-1];
        }/*
         * This function takes one argument which is position.
         * This function will return value at particular position in array.
         * In this position starts from 1 and ends at size of array.
         * If index is not in range it will return '\0'
         */

        bool WriteToArray(int index, char ch){
            if(index<1 || index>size){
                std::cerr << "Index is not in range." << std::endl;
                return false;
            }
            list[index-1] = ch;
            return true;
        }/*
         * This function takes two argument, one is position and second is value.
         * This function will replace value at particular position in array with given value.
         * In this position starts from 1 and ends at size of array.
         */

        void DeleteArray(){
            size = 0;
            if(list != NULL) delete []list;
            list = NULL;
         }/*
         * This function will release the memory assigned to array and delete all data and size will be zero.
         */

        void PrintArray(){
            int i=0;
            std::cout << "[";
            for(; i<size; i++) std::cout << list[i] << ',';
            if(i>0) std::cout << "\b]" << std::endl;
            else std::cout << "]" << std::endl;
        }/*
         * This function will print all the values of the array
         */

        void NewArray(int n, std::string str){
            if(n<1){
                std::cerr << "Size cannot be less than 1." << std::endl;
                return;
            }
            char *temp = new char[n];
            if(!temp){
                std::cerr << "Memory allocation failed." << std::endl;
                return;
            }
            bool flag = true;
            int p=0,i;
            for(i=0; i<str.size(); ++i){
                if(str.at(i)==' ') continue;
                if(str.at(i)==',') {
                    flag = true;
                    continue;
                }
                if(p<n && flag){
                    temp[p++] = str.at(i);
                    flag = false;
                    continue;
                }
                if(!flag){
                    std::cerr << "Input is not separated by ','(coma)." << std::endl;
                    delete []temp;
                    return;
                }
                else{
                    std::cerr << "Input cannot be larger than given size." << std::endl;
                    delete []temp;
                    return;
                }
            }
            if(p==n) {
                DeleteArray();
                list = temp;
                size = n;
                return;
            }
            std::cerr << "Missing input values/Incomplete input." << std::endl;
            delete []temp;
        }/*
         * This function takes two argument one size of array and values of size as string and coma separated.
         * This function will return value at particular index in array.
         * In this position starts from 1 and ends at size of array.
         */
};
#endif
