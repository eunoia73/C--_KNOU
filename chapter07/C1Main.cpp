#include <iostream>
#include "Complex1.h"
#include "Complex1.cpp"
using namespace std;

int main(){
    Complex1 c1(1, 2);
    Complex1 c2(2, 3);
    Complex1 c3 = c1.add(c2);
    c1.display();
    cout << " + ";
    c2.display();
    cout << " = ";
    c3.display();
    cout << endl;

    c3 = c1.mul(10.0);  //묵시적 형변환 c3 = c1.mul(Complex1(10.0, 0.0));
    c1.display();
    cout << " * 10 = ";
    c3.display();
    cout << endl;

    return 0;
}