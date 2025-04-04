#include <iostream>
using namespace std;

int main() {
    double fd, cd;
    cout << "화씨온도 입력: ";
    cin >> fd;
    
    /* 여기 코딩 */
    cd = (double)5 / 9 * (fd - 32);
    cout << fixed;
    cout.precision(5);

    cout << "섭씨온도는 " << cd << " 입니다." << endl;
}