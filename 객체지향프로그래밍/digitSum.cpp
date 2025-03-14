//키보드로부터 2개의 숫자 값을 입력받은 후 합계 출력

#include <iostream>
using namespace std;

int main() {
int num1, num2, sum;
    cout<< "첫번째숫자입력: ";
    cin>> num1;
    cout<< "두번째숫자입력: ";
    cin>> num2;
    sum = num1 + num2;
    cout<< "두숫자의합: " << sum;
    
    return 0;
}