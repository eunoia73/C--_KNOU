#include <iostream>
using namespace std;

int main(){
/**
 * 참조(reference)
 * 어떠한 대상을 가리키는 값(포인터와 유사하지만 더 안전함)
 * l-value 참조 : 실체가 있는 대상(l-value)에 대한 참조
 * a(l 값 저장 가능한 실체) = b + 10(R 값만 만들 수 있음);
 * TypeName& refVar = varName;  //포인트변수와 달리 참조변수는 초기화 필수
*/
    int a = 10, b = 20;
    int& aRef = a;  //정수형 참조변수
    cout << aRef << endl;  //a = 10
    aRef = 100;            //a = 100 
    aRef = b;              //a = 20


//포인터 변수
    int c = 10, d = 20;
    int* cPtr = &c;  //정수형 포인터변수 (&c = c의 주소)
    cout << *cPtr << endl;  //c = 10
    *cPtr = 100;            //c = 100
    *cPtr = b;              //c = 20

    /**
     * r-value 참조
     * 사용한 후에 그 값을 더 이상 가지고 있을 필요가 없는 대상을 참조
     * 객체의 값을 다른 객체로 이동할 때 사용
    */

    return 0;
}
