#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cnt++;
        }
    }
    
    cout << "총 " << cnt << "개" << endl;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}