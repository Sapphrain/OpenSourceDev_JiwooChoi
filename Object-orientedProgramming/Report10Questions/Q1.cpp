#include <iostream>
using namespace std;

int main() {
    int num;
    double even_Cnt = 0, even_Sum = 0, odd_Sum = 0, odd_Cnt = 0;
    
    while(cin >> num) {
        if(num == 0) {
            break;
        }
        else if(num % 2 == 0) { // 짝수
            even_Cnt++;
            even_Sum += num;
        }
        else { // 홀수
            odd_Cnt++;
            odd_Sum += num;
        }
    }
    
    double even_Avg = (even_Cnt == 0) ? 0 : even_Sum / even_Cnt;
    double odd_Avg = (odd_Cnt == 0) ? 0 : odd_Sum / odd_Cnt;
    
    cout << even_Cnt << " " << even_Avg << " " << odd_Cnt << " " << odd_Avg;
    
    return 0;
}