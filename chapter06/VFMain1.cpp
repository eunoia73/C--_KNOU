#include <iostream>
using namespace std;
#include "VecF.h" 

int main()
{
    float a[3] = {1, 2, 3};
    VecF v1(3, a);  //1,2,3 저장하는 벡터
    VecF v2(v1);  //v1 복사해서 v2 만들기 
    VecF v3(v1.add(v2));
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;

    /**
     * lvalue 참조는 &기호로
     * rvalue 참조는 &&기호로 선언
    */
    VecF ve1(3), ve2(3);
    VecF& vLRef = ve1; // lvalue 참조로 lvalue 참조
    //int& b = 10;  //lvalue참조로 rvalue 참조 불가 //에러
    const int&c = 20;  //상수 lvalue 참조로는 rvalue 참조 가능
    int&& d = 30;  //rvalue 참조로 rvalue 참조
    VecF&& vRRef1 = ve1.add(ve2);  //함수의 반환 객체는 rvalue임
    //VecF&& vRRef2 = ve2; //에러 //rvlaue 참조로 lvalue 참조 불가

    return 0;
}