#include <iostream>
using namespace std;

int main(){
    int* intPtr;
    intPtr = new int;  //메모리 할당
    *intPtr = 10;
    cout << "intPtr= " << *intPtr << endl;

    // 배열
    int* intPtr2;
    intPtr2 = new int[4];  //배열 할당
    *intPtr2 = 10;
    *(intPtr2 + 1) = 20;  //*연산자가 +연산자보다 우선순위 높음
    intPtr2[2] = 30;

    for(int i = 0; i < 4; i++){
        cout << "  " << intPtr2[i] << endl;
    }

    delete intPtr;  //반납
    intPtr = nullptr;  //아무것도 가리키지 않는다는 것 표현(전역변수면 반납필요)

    delete [] intPtr2;
    intPtr2 = nullptr;


    return 0;
}