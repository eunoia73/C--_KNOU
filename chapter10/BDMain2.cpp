#include <iostream>
#include "BaseC.h"
#include "Drvd2.h"
using namespace std;

int main(){
    Drvd2 d2;
    //d2.a = 1; //에러(private 멤버)
    //d2.b = 2; //에러(protected 멤버)
    //d2.c = 3; //에러(protected 멤버)

    //cout << d2.c << endl;
    return 0;
}