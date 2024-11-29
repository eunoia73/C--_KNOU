#ifndef PERSON2_H_INCLUDED
#define PERSON2_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
public : 
    
    //생성자
    Person(const string& n){
        cout << "Person의 생성자" << endl;
        name = n;
    }

    //소멸자
    ~Person(){
        cout << "Person의 소멸자" << endl;
    }
    
    string getName() const {return name;}
    void print() const {cout << name; }
};
#endif  //PERSON2_H_INCLUDED