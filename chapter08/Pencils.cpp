#include <iostream>
#include "Pencils.h"
using namespace std;

//++연산자 다중정의(전위 표기)
Pencils& Pencils::operator ++(){
    if(++np >= 12)          //낱개를 1 증가시킴. 결과가 12보다 크면
        ++dozens, np = 0;   //타 수를 1 증가시키고 낱개는 0
    return *this;           //증가된 결과를 반환
}

//++연산자 다중정의(후위 표기)
Pencils Pencils::operator ++ (int){
    Pencils tmp(*this);     //복사생성자 호출. 현재 객체를 보존
    if(++np >= 12)          //낱개를 1 증가시킴. 결과가 12보다 크면
        ++dozens, np = 0;   //타 수를 1 증가시키고 낱개는 0
    return tmp;             //보존된 객체를 반환
}

void Pencils::display() const{
    if(dozens){
        cout << dozens << "타 ";
        if(np) cout << np << "자루";
        cout << endl;
    }
    else
        cout << np << "자루" << endl;
}