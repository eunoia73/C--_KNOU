#include <iostream>
using namespace std;

class IntClass1{
    int a;
public :
    IntClass1(int n = 0) : a(n){}  //생성자
    IntClass1& operator ++ (){  //전위표기 ++연산자 다중정의
        ++a;
        return *this;
    }
    int getValue() const {return a;}
};

int main(){
    IntClass1 i;
    cout << (++i).getValue() << endl;
    return 0;
}