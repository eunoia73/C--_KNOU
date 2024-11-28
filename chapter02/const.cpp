#include <iostream>
using namespace std;

int main(){
    const double PI = 3.14159 ;  //상수 선언
    double radius;

    cout << "원의 반경을 입력하시요 : ";
    cin >> radius;
    
    double area = radius * radius * PI;
    cout << "원의 면적 = " << area << endl;
    

    //constexpr 한정어 - 값을 컴파일할 때 평가한다는 의미
    int a;
    std::cin >> a;  // 사용자가 정의 
    const int b = 20;  // 상수는 초기화와 동시에 변경할 수 없음
    const int C1 = a;  // cin을 통해 입력된 값으로 a 초기화
    //constexpr int C2 = a + 10;  //오류 //컴파일 시에 a의 값을 알 수 없음
    constexpr int C3 = b + 100;  // b+100을 컴파일 시에 알 수 있음
    //constexpr int C4 = C1 * 2;  //오류 //컴파일 시에 C1의 값을 알 수 없음



    return 0;
}