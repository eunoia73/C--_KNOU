#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main(){
    Person *p1 = new Person("Dudley");
    p1 -> print();  //Person::print()호출
    cout << endl;

    Person *p2 = new Student("Harry", "Hogwarts");
    p2 -> print();  //Person::print()호출
    cout << endl;
    //정적연결 -> 위험 -> p2가 Student 객체를 가리키고 있다는 보장이 없다.
    ((Student*)p2) -> print();  //Student::print()호출
    cout << endl;

    return 0;
}