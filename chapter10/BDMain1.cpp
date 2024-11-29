#include <iostream>
#include "BaseC.h"
#include "Drvd1.h"
using namespace std;

int main(){
    Drvd1 d1;
    //d1.a = 1; //에러(private 멤버)
    //d1.b = 2; //에러(protected 멤버)
    d1.c = 3; //public 멤버

    cout << d1.c << endl;
    return 0;
}