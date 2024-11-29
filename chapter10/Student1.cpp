#include <iostream>
#include "Person2.h"
#include "Student2.h"
using namespace std;

int main(){
    
    /**
     * 생성자와 소멸자 순서
     * 기초 클래스 생성자 -> 파생 클래스 생성자
     * 파생 클래스 소멸자 -> 기초 클래스 소멸자
    */

    Student harry("Harry", "Hogwarts");
    cout << harry.getName() << " goes to "
        << harry.getSchool() << endl;
    
    return 0;
}
