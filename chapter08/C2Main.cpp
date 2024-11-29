#include <iostream>
#include "Complex2.h"
#include "Complex2.cpp"
using namespace std;

int main(){
    Complex2 c1(1, 2);
    Complex2 c2(2, 3);
    Complex2 c3 = c1.add(c2);
    c1.display();
    cout << " + ";
    c2.display();
    cout << " = ";
    c3.display();
    cout << endl;

    c3 = c1.mul(10.0);  //묵시적 형변환 c3 = c1.mul(Complex2(10.0, 0.0));
    c1.display();
    cout << " * 10 = ";
    c3.display();
    cout << endl;
    
    
    Complex2 a(10, 20);
    Complex2 b(5, -3);
    cout << a << " + " << b << " = " << a + b << endl;

    

    return 0;
}