#ifndef STUDENT2_H_INCLUDED
#define STUDENT2_H_INCLUDED
#include "Person2.h"
#include <iostream>
#include <string>
using namespace std;

class Student : public Person {
    string school;
public :

    //생성자
    Student(const string& n, const string& s) : Person(n) {
        cout << "Student의 생성자" << endl;
        school = s;
    }

    //소멸자
    ~Student(){
        cout << "Student의 소멸자" << endl;
    }

    string getSchool() const {return school;}
    void print() const {
        Person :: print();
        cout << " goes to " << school;
    }
};
#endif  //STUDENT2_H_INCLUDED