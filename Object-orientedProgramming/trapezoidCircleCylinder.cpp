#include <iostream>
using namespace std;

int main() {
    double a, b, h;
    cout << "실수 3개를 입력하세요: ";
    cin >> a >> b >> h;
    
    const double PI = 3.14159;

    double areaOfTrapezoid = ( a + b ) * h / 2;
    double areaOfCircle = a * a * PI;
    double volumeOfCylinder = a * a * PI * h;
    cout << "밑변 " << a << ", 윗변 " << b << ", 높이 " << h << "인 사다리꼴의 넓이는 " << areaOfTrapezoid << endl;
    cout << "반지름 " << a << "인 원의 넓이는 " << areaOfCircle << endl;
    cout << "반지름 " << a << ", 높이 " << h << "인 원기둥의 부피는 " << volumeOfCylinder << endl;

    return 0;
}