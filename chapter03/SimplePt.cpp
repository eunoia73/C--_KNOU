#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr;  // 정수형 포인터 변수 ptr 선언

    ptr = &a;  //ptr에 a의 주소를 넣는다. (&a = a의 주소)
    cout << "ptr이 가리키는 값 : " << *ptr << endl;  //10  (*ptr = 포인터ptr이 가리키는 곳의 값)
    *ptr = 20;
    cout << "변수 a의 값 : " << a << endl;  //20

    return 0;
}