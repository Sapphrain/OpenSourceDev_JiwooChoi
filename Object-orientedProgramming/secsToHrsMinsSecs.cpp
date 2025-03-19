# include <iostream>
using namespace std;

int main() {
    unsigned long long secs;
    cout << "초 입력: ";
    cin >> secs;

    unsigned long long h = secs / 3600;
    unsigned long long m = secs % 3600 / 60;
    unsigned long long s = secs % 60;

    cout << h << "시간 " << m << "분 " << s << "초입니다.";

    return 0;
}