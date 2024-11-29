#include <iostream>
using namespace std;

/**
 * 이름 은폐(name hiding)
 * 어떤 영역에 선언된 이름을 그 영역에 내포된 영역에서 다시 선언하면
 * 내포된 영역에서는 바깥 영역의 이름이 은폐됨
*/
void f(int x) {
    cout << "f(int x) --> " << x << endl;
}
void f(double x) {
    cout << "f(double x) --> " << x << endl;
}
void f(const char* x){
    cout << "f(const char* x) --> " << x << endl;
}

int main(){
    void f(int x);
    f(10);
    f(20.0);  //main 함수 내부의 f(int x)함수 호출 : double -> int 묵시적 형변환됨
    //f("abc");  //에러 //string -> int 묵시적 형변환 불가하므로
    ::f(30.0);  //:: -> 전역 명칭 공간의 f()호출
}