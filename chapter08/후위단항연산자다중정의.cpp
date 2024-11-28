#include <iostream>
using namespace std;

class IntClass2{
    int a;
public :
    IntClass2(int n = 0) : a(n){}  //생성자
    IntClass2 operator ++ (int){  //후위표기 ++연산자 다중정의
                        //매개변수 int는 단지 후위 표기법이라는 것을 나타내는 장치이다.
        IntClass2 tmp(*this); //복사 생성자 호출 -> 현재 객체 보존
        ++a;
        return tmp; //변화되기 이전의 값 반환
        //tmp는 지역변수이므로 return 후 없어지기 때문에 참조형으로 반환하지 않음.
    }
    int getValue() const {return a;}
};

int main(){
    IntClass2 i;
    cout << (i++).getValue() << endl;
    return 0;
}