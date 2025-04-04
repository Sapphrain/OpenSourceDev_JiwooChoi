#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score, sum = 0;
    double average;

    int counter = 0; // 1. 초기화
    for (int i = 0; i < 4; i++) { // 2. 조건
        cout << "점수 입력 (0~100): ";
        cin >> score;
        sum += score;
        counter++; // 3. 변경
    }
    average = static_cast<double>(sum) / 4;
    cout << fixed << setprecision(2) << showpoint;
    cout << "평균 점수 = " << average;
}