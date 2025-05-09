#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cnt = 0;
    for(int i = 2; i <= n; i++) {
        int primeCnt = 0;
        for(int j = 2; j < i; j++) { // 1과 자신을 제외한 수 중 소수인지 아닌지 판별
            if(i % j == 0) {
                primeCnt++;
            }
        }
        if(primeCnt == 0) { // n 이하의 소수 개수 세기
            cnt++;
        }
    }
    
    cout << cnt << "개" << endl;
    
    return 0;
}