#ifndef VECF_H_INCLUDED
#define VECF_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class VecF{
    int n;      //벡터의 크기
    float* arr; //벡터 저장공간 포인터

public:

    //생성자
                    // a의 default 값은 nullptr 
    VecF(int d, const float* a=nullptr) : n (d) {  //n = d로 초기화
        arr = new float[d];
        if(a) memcpy(arr, a, sizeof(float) * n);
                  //목적지 //소스 //메모리크기
    }

    //명시적 복사생성자 (깊은 복사)
    /**
     * 묵시적 복사생성자로 인해 복사되면 같은 객체를 두 개의 참조가 가리킴.
     * 소멸자 호출시
     * v1이 delete[] arr;로 객체를 지우고 나서 v2 delete[] arr;은 지울 객체가 없어짐.
     * -> 오류 발생 
    */
    VecF(const VecF& fv) : n(fv.n){
        arr = new float[n]; //별도 메모리 할당 -> 각 참조가 가리키는 객체가 다름
        memcpy(arr, fv.arr, sizeof(float)*n);
    }

    // 이동생성자
    /**
     * rvalue 참조로 전달된 같은 클래스의 객체 내용을 이동하여 객체를 만드는 생성자
    */
    VecF(VecF&& fv) : n(fv.n), arr(fv.arr) {
        fv.arr = nullptr; //이동 후 참조 끊기
        fv.n = 0;
    }

    /**
     * 대입 연산자의 다중정의
     * 깊은 복사를 할 수 있는 대입 연산자를 다중정의 할 필요 있음
    */
    VecF& operator = (const VecF& fv){
        if(n != fv.n){      //벡터의 크기가 다르다면
            delete[] arr;   //기존 메모리를 반환하고
            arr = new float[n = fv.n];  //새로 메모리를 할당함
        }
        memcpy(arr, fv.arr, sizeof(float)*n);  //데이터복사
        return *this;
    }

    /**
     * 이동 대입 연산자(=)
     * 좌측 피연산자에 대입할 우측 피연산자가 rvalue일 떄 사용됨
    */
    VecF& operator = (VecF&& fv){
        delete[] arr;  //기존 메모리를 반환하고
        n = fv.n;  //우측 피연산자의 내용을 이동함
        arr = fv.arr;
        fv.arr = nullptr;
        return *this;
    }


    //소멸자
    ~VecF(){
        delete[] arr;
    }

    //add
    VecF add(const VecF& fv) const{
        VecF tmp(n);  //벡터의 덧셈 결과를 저장할 임시 객체
        //tmp(a, nullptr); 과 같음
        for(int i = 0; i < n; i++){
            tmp.arr[i] = arr[i] + fv.arr[i];
        }
        return tmp;  //덧셈 결과 반환
    }

    //print
    void print() const{
        cout << "[";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "]";
    }

    // 스트림 출력 연산자  
    friend ostream& operator<<(ostream& os, const VecF& fv){
    os << "[";
        for(int i = 0; i < fv.n; i++)
            cout << fv.arr[i] << " ";
    os << "]";
    return os;
    }
};
#endif