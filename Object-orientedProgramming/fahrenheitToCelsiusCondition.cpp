#include <iostream>
using namespace std;

int main() {
    // 화씨 섭씨 선택
    int number;
    cout << "선택하세요 (1:화씨->섭씨, 2:섭씨->화씨) ==> ";
    cin >> number;

    // 소수점 5자리 설정
    cout << fixed;
    cout.precision(5);

    double fd, cd;
    if (number == 1) { // 화씨-섭씨 변환
        cout << "화씨온도 입력: ";
        cin >> fd;
        cd = (double)5 / 9 * (fd - 32);
        cout << "섭씨온도는 " << cd << " 입니다." << endl;
    }
    else if (number == 2) { // 섭씨-화씨 변환
        cout << "섭씨온도 입력: ";
        cin >> cd;
        fd = ((double)9 / 5 * cd) + 32;
        cout << "화씨온도는 " << fd << " 입니다." << endl;
    }
    else { // 1과 2 외의 정수를 입력한 경우
        cout << "1,2 중에 하나를 입력하세요.";
    }
}