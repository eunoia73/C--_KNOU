#include <iostream>  //print
#include <cstring>   //문자열 길이 구하기 등
#include "Person.h"
using namespace std;

//생성자
Person::Person(const char* name, const char* addr)
{

    //이름 저장할 공간 할당
    this->name = new char[strlen(name) + 1];  //맨 뒤에 null 필요
    //this->name에서의 this는 데이터 멤버를 뜻함(매개변수 name과 다르다는 것 표시)

    //데이터 멤버 name에 이름 복사
    strcpy(this->name, name);

    //주소 저장할 공간 할당
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
    cout << "Person 객체 생성함(" << name << ")" << endl;
}

//소멸자
Person::~Person()
{
    cout << "Person 객체 제거함(" << name << ")" << endl;
    delete[] name;  //이름 저장공간 반납
    delete[] addr;  //주소 저장공간 반납
} 

void Person::print() const  
{
    cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char* newAddr)
{
    delete [] addr;  //기존 공간 반납
    //새로운 주소에 맞는 공간 할당
    addr = new char[strlen(newAddr) + 1];
    strcpy(addr, newAddr);  //데이터 멤버 addr에 새로운 주소 복사
}
