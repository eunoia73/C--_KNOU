#include <iostream>
using namespace std;
#include "VecF.h" 

int main()
{
    float a[3] = {1, 2, 3};
    float b[3] = {2, 4, 6};
    VecF v1(3, a);  //1,2,3 저장하는 벡터
    VecF v2(3, b);  
    VecF v3(3);
    v3 = v1;  //대입 연산자 (v1은 lvalue)
    cout << v3 << endl; //객체 출력 불가능하므로 stream 출력연산자 다중정의 필요
    v3 = v1.add(v2);  //이동 대입 연산자
    cout << v1 << " + " << v2 << " = ";
    cout << v3 << endl;

    return 0;
}