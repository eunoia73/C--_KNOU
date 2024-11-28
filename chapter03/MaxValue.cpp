// 최댓값 구하기
#include <iostream>
using namespace std;

int main(){
    int max;
    int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };

    max = data[0];  //data의 0번 값을 max로 가정
    cout << "데이터  : " << data[0];  //0번 데이터 출력
    for(int i = 1; i < 10; i++){
        cout << " " << data[i];  // data 배열 출력
        if(max < data[i]) max = data[i];
    }
    cout << "\n\n배열의 최댓값 : " << max << endl;

    return 0;
}