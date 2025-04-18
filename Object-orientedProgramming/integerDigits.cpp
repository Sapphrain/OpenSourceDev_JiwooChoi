#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long integer;
    int requestedDigit;

    cout << "정수 입력: ";
    cin >> integer;
    cout << "자릿수 입력: ";
    cin >> requestedDigit;

    // 전체 자릿수 세기
    long long countingInteger = integer;
    int countDigits = 1;
    while(countingInteger / 10 != 0) {
        countingInteger /= 10;
        countDigits++;
    }

    // 요청한 자릿수가 전체 자릿수보다 작거나 같을 때만 해당 자릿수의 숫자 찾기
    if(requestedDigit <= countDigits) {
        for(int i = 0; i < requestedDigit - 1; i++) {
            integer /= 10;
        }
        int foundDigit = integer % 10;
        cout << "오른쪽에서 시작해서 " << requestedDigit << "번째 자리에 있는 숫자는 " << abs(foundDigit) << endl; // 음수 처리
    }
    else {
        cout << "자릿수 범위를 벗어났습니다." << endl;
    }
}