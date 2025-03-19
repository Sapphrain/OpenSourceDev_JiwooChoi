# include <iostream>
using namespace std;

int main() {
    unsigned long long h, m, s;
    cout << "시 분 초 입력: ";
    cin >> h >> m >> s;

    unsigned long long secs = (h * 3600) + (m * 60) + s;

    cout << "총 " << secs << "초입니다.";

    return 0;
}