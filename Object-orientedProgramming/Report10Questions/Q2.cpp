#include <iostream>
using namespace std;

int main() {
    char ch;
    char ch1 = '\0', ch2 = '\0', ch3 = '\0';
    int cnt = 0;
    
    while(cin >> noskipws >> ch) {
        if(ch == '&') {
            break;
        }
        
        ch1 = ch2;
        ch2 = ch3;
        ch3 = ch;
        
        if((ch1 == 'o' && ch2 == 'o' && ch3 == 'p') || (ch1 == 'O' && ch2 == 'O' && ch3 == 'P')) {
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}