#ifndef PERSON1_H_INCLUDED
#define PERSON1_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
public : 
    void setName(const string& n){name = n;}
    string getName() const {return name;}
    void print() const {cout << name; }
};
#endif  //PERSON1_H_INCLUDED

/**
 * final 클래스 -> 파생 클래스 선언의 금지
 * class A { ······ };
 * class B : public A { ······ };
 * class C final : public B { ······ };
 * class D : public C { ······ }; // 에러
*/