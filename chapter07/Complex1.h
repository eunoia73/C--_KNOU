#ifndef COMPLEX1_H_INCLUDED
#define COMPLEX1_H_INCLUDED
class Complex1{
 double rPart, iPart;  //실수부, 허수부
public :
    //생성자
    Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {}
    Complex1 conj() const {  //켤레복소수 만드는 메서드
        return Complex1(rPart, -iPart);
    }
    Complex1 add(const Complex1& c) const {  //덧셈
        return Complex1(rPart + c.rPart, iPart + c.iPart);  //Complex1 클래스의 임시 객체 생성 -> 문장 실행 후 소멸
    }
    Complex1 sub(const Complex1& c) const {  //뺄셈
        return Complex1(rPart - c.rPart, iPart - c.iPart);
    }
    Complex1 mul(const Complex1& c) const;  //곱셈
    Complex1 div(const Complex1& c) const;  //나누기
    void display() const;  //복소수 값을 출력

};
#endif  //COMPLEX1_H_INCLUDED