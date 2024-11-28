#include <iostream>
using namespace std;  //std::cout -> cout으로 간소화해서 사용 가능

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }
int a = 30;  // 전역 명칭 변수
namespace NameSpace1 { int b = 50; }

int main(){
    int a = 40;  // 지역 변수
    cout << NameSpace1::a << endl;  // 10
    cout << NameSpace2::a << endl;  // 20
    cout << ::a << endl;  // 30 // ::a -> 전역 명칭 공간의 a
    cout << a << endl;  //40  //블록 안의 a, 없다면 전역 공간 a
    cout << NameSpace1::b << endl;  // 50

    return 0;
}