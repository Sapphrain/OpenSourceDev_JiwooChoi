#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "정수를 여러 개 입력하세요. (종료하려면 EOF)" << endl;
    
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        sum += n;
    }
    
    cout << "합 = " << sum << endl;
}