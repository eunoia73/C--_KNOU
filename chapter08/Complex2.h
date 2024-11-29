#ifndef Complex2_H_INCLUDED
#define Complex2_H_INCLUDED
using namespace std;

class Complex2{
 double rPart, iPart;  //실수부, 허수부
public :
    //생성자
    Complex2(double r = 0, double i = 0) : rPart(r), iPart(i) {}

     /**
     * 이항 연산자의 다중정의
     * 객체 자신이 좌측 피연산자, arg가 우측 피연산자에 해당된다.
    */
    //복소수 객체와 복소수 객체의 덧셈 연산자 다중정의
    Complex2 operator + (const Complex2 &c) const {
        Complex2 tmp(*this);  //자기 자신 복사
        tmp.rPart += c.rPart;
        tmp.iPart += c.iPart;
        return tmp;
    }

    //복소수 객체와 실수의 덧셈 연산자
    Complex2 operator + (double r) const {
        return Complex2(rPart + r, iPart);
    }

    //실수와 복소수 객체의 덧셈 연산자
    //좌측 피연산자가 실수이므로 Complex2 클래스의 멤버로 연산자를 정의할 수 없다.
    friend Complex2 operator + (double r, const Complex2 &c){
        return Complex2(r + c.rPart, c.iPart);
    }  //friend로 선언하면 private 멤버에 접근 가능

    /**
     * 스트림 출력 연산자(<<) 다중정의
     * 클래스에 속하지 않는 외부의 별도 연산자로 정의함
     * << 연산자가 Complex2 객체의 private 멤버를 액세스할 수 있도록 friend로 지정
    */
    friend ostream& operator << (ostream &os, const Complex2 &c){
        os << "(" << c.rPart;  //실수부 출력
        if(c.iPart > 0)
            os << "+j" << c.iPart;
        else if (c.iPart < 0)
            os << "-j" << -c.iPart;
        os << ")";
        return os;
    }

    Complex2 conj() const {  //켤레복소수 만드는 메서드
        return Complex2(rPart, -iPart);
    }
    Complex2 add(const Complex2& c) const {  //덧셈
        return Complex2(rPart + c.rPart, iPart + c.iPart);  //Complex2 클래스의 임시 객체 생성 -> 문장 실행 후 소멸
    }
    Complex2 sub(const Complex2& c) const {  //뺄셈
        return Complex2(rPart - c.rPart, iPart - c.iPart);
    }
    Complex2 mul(const Complex2& c) const;  //곱셈
    Complex2 div(const Complex2& c) const;  //나누기
    void display() const;  //복소수 값을 출력

};
#endif  //Complex2_H_INCLUDED