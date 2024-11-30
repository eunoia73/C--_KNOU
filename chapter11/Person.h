#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
/**
 * Person 및 Student 클래스의 객체를 가리키는 포인터를
 * 저장하는 배열을 선언하여 객체를 가리키게 하고, 
 * 배열에 저장된 객체들을 출력하는 함수를 통해 출력하는 프로그램을 작성하라.  
*/

class Person{
    string name;
public :
    //생성자
    Person(const string& n) : name(n) {}
    string getName() const {return name; }
    virtual void print() const { cout << name; }
    /**
     * 가상함수를 이용한 동적 연결(virtual)
     * 객체 포인터를 통해 객체의 멤버함수를 호출할 때, 
     * 포인터가 가리키는 실제 객체가 무엇인가에 따라 실행 중에 멤버함수를 결정하는 것
     * 
    */
};

#endif  //PERSON_H_INCLUDED

