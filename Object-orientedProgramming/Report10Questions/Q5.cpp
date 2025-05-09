#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    while(true) {
        cin >> a >> b >> c;
        if(!a) { // 0이거나 문자이면 bye 출력 후 종료
            cout << "bye" << endl;
            break;
        }
        
        double discriminant = pow(b, 2) - 4 * a * c;
    
        if(discriminant > 0) {
            double plusResult = (-b + sqrt(discriminant)) / (2 * a);
            double minusResult = (-b - sqrt(discriminant)) / (2 * a);
            cout << plusResult << " " << minusResult << endl;
        }
        else if(discriminant == 0) {
            double result = -b / (2 * a);
            cout << result << endl;
        }
        else {
            cout << "허근" << endl;
        }
    }
    return 0;
}