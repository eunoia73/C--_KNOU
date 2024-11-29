#include <iostream>
#include "Complex2.h"
using namespace std;


// 곱하기
Complex2 Complex2::mul(const Complex2& c) const{
    double r = rPart * c.rPart - iPart * c.iPart;
    double i = rPart * c.iPart + iPart * c.rPart;
    return Complex2(r, i);
}
// 나누기
Complex2 Complex2::div(const Complex2& c) const{
    //분모값
    double d = c.rPart * c.rPart + c.iPart * c.iPart;
    Complex2 c1 = mul(c.conj());
    return Complex2(c1.rPart/d, c1.iPart/d); 
}

// 출력
void Complex2::display() const {
    cout << "(" << rPart;
    if(iPart > 0)
        cout << "+j" << iPart;
    else if(iPart < 0)
        cout << "-j" << -iPart;
    cout << ")";
}