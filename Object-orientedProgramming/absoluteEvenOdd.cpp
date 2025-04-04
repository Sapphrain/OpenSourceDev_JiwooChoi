#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, larger;

    cout << "두 수 입력: ";
    cin >> a >> b;

    larger = a>b ? a : b;

    cout << "큰 수는 " << larger << " 입니다." << endl;

    cout << b << "의 절댓값은 " << abs(b) << " 입니다." << endl;

    cout << a << "는 짝수일까요 홀수일까요? ==> ";

    if (a % 2 == 0)
        cout << "짝수" << endl;
    else
        cout << "홀수" << endl;
}