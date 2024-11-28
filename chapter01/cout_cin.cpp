#include <iostream>

int main(){
    /**
     * std::cout 객체 - 표준 출력 스트림 객체
     * 데이터를 문자열로 변환하여 출력함
     * 출력 연산자(삽입 연산자) : <<
     * std::endl(end of line) - 줄바꿈
    */
    std::cout << "나의 첫 번째 C++ 프로그램" << std::endl;

    /**
     * std::cin 객체 - 표준 입력 스트림 객체
     * 문자열을 입력 변수의 자료형의 값으로 변환하여 입력함
     * 입력 연산자(추출 연산자) : >>
     * 백색 공백 문자(빈칸, 탭, 새줄문자)는 구분 문자로 취급
    */
    int a;
    char str[100];
    std::cin >> a >> str;
    std::cout << "a = " << a << ", str = " << str << std::endl;
    return 0;
}