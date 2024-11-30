#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

void PrintPerson(const Person * const p[], int n){
    for(int i = 0; i< n; i++){
        p[i] -> print();
        cout << endl;
    }

}

int main(){
    Person dudley("Dudley");  //객체 생성
    Student harry("Harry", "Hogwarts");  //객체 생성
    Student ron("Ron", "Hogwart");

    dudley.print();     //Dudley
    cout << endl;
    harry.print();      //Harry goes to Hogwarts
    cout << endl << endl;

    //부모 타입의 배열에는 자식 객체 들어갈 수 있음
    Person *pPerson[3];
    pPerson[0] = &dudley;
    pPerson[1] = &harry;
    pPerson[2] = &ron;
    PrintPerson(pPerson, 3);    

    /**
     * Dudley
     * Harry
     * Ron
    */

    /**
     * Person.h의 print()를 가상함수로 변경 했을 때,
     * Dudley
     * Harry goes to Hogwarts  //harry, ron의 타입이 Student라서
     * Ron goes to Hogwart
    */

   Person *pPrsn1 = new Person("Dudley");
   Student *pStdnt1 = new Student("Harry", "Hogwarts");
   Person *pPrsn2 = pStdnt1;  //upcasting
   /**
    * Person 클래스의 포인터인 pPrsn2가 Student 클래스의 객체를 가리키고 있기 때문에 정상적 동작을 하지만,
    * static_cast 연산자를 이용한 다운캐스팅 -> 부적절한 변환의 위험이 있음
    * */
   //Student *pStdnt2 = static_cast<Student*>(pPrsn2);  //downcasting

   /**
    * dynamic_cast 연산자를 이용한 다운캐스팅 -> 적절하지 않으면 에러가 아니라 nullptr반환
    * dynamic_cast 사용하려면 클래스 선언문에 가상함수를 포함하고 있어야 함
   */
   Student *pStdnt2 = dynamic_cast<Student*>(pPrsn2);  //downcasting
   if(pStdnt2)
    cout << pStdnt2->getSchool() << endl;    //Hogwarts

    return 0;
}