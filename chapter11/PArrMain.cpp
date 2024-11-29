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

    return 0;
}