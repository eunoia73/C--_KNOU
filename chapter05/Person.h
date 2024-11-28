#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
class Person     //class Person 선언
{  
private:
    /* data */
    char* name;  //이름을 저장하는 데이터 멤버
    char* addr;  //주소를 저장하는 데이터 멤버

public: //원형만 선언(cpp 파일에 함수)
    Person(const char* name, const char* addr); //생성자
    ~Person();  //소멸자
    void print() const;  //이름과 주소 출력
    void chAddr(const char* newAddr);  //주소 변경
};
#endif 