#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED
#include <iostream>
#include <string>
#include "GrAttrib.h"
using namespace std;

class Figure{
protected :
    GrAttrib attrib;  //그래픽 속성
public :
    //현재 그래픽 속성에 따라 도형 객체 생성
    Figure() : attrib(curAttrib){}

    //선 색 속성 지정
    void setLineColor(const string& c){
        attrib.setLineColor(c);
    }

    //내부 영역의 색 지정
    void setFillColor(const string& c){
        attrib.setFillColor(c);
    }

    //도형의 이동, 원점 기준 크기 조정, 그리기 멤버함수
    //순수 가상함수의 선언
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double s) = 0;
    virtual void draw() const = 0;
    /**
     * 추상클래스 선언 ->
     * 순수 가상함수(구현 부분이 없는 가상함수)가 포함된 클래스를 선언
     * 추상클래스의 객체 정의 불가, 상속받은 순수 가상함수가 있다면 반드시 재정의 해야 함
    */
};
#endif