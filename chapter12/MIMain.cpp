#include "MIParttime.h"

int main(){
    Parttime chulsoo("ABC Univ.", "DEF Co.");
    chulsoo.printSchool(); // Student의 멤버함수 호출 //ABC Univ.
    chulsoo.printCompany(); // Employee의 멤버함수 호출 //DEF Co.

    return 0;
}