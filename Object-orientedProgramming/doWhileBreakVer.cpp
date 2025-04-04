#include <iostream>
using namespace std;

int main() {

    double d, sum = 0.0;
    do {
        cout << "실수 입력 (양수 아니면 종료): ";
        cin >> d;
        sum += d;
        if (d <= 0) {
            break;
        }
    } while (true);
    sum -= d;

    cout << "sum = " << sum << endl;

    return 0;
}