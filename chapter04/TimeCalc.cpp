#include <iostream>
using namespace std;

struct TimeRec{
    int hours;
    int minutes;
};

//시간을 더하는 함수
//인수 TimeRec &t1 : 누계할 시간
//    const TimeRec &t2 : 더할 시간
//반환값 없음
void AddTime(TimeRec &t1, const TimeRec &t2){  //원본 보호
    t1.minutes += t2.minutes;
    t1.hours += t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
}

/**
 * 함수 다중정의  -> 동일한 이름을 갖는 함수를 여러 개 정의하는 것
 * 인수의 개수 및 자료형으로 구분할 수 있다.(반환자료형은 관계 없음)
*/
void AddTime(TimeRec &t, int minutes){
    t.minutes += minutes;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
}

int main()
{
    TimeRec tRec1 = { 2, 30 };
    TimeRec tRec2 = { 1, 45 };
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << tRec2.hours << "시간 " << tRec2.minutes << "분 = ";
    AddTime(tRec1, tRec2);
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << "135분 = ";
    AddTime(tRec1, 135);
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;
    return 0;
}