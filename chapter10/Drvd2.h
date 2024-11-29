#ifndef DRVD2_H_INCLUDED
#define DRVD2_H_INCLUDED
#include <iostream>
#include "BaseC.h"
using namespace std;
//가시성 상속 지시어 protected
/**
 * 기초 클래스로부터 상속된 멤버가 파생 클래스의 멤버로서 가지게 되는 가시성을 제어함
 * 상속 시 지시된 것이 가시성의 상한이 되도록 제한함
*/
class Drvd2 : protected BaseC{
public :
    int sum() const{
        return geta() + b + c;
    }
    void printbc() const{
        cout << b << ' ' << c;
    }
};

#endif //DRVD1_H_INCLUDED
