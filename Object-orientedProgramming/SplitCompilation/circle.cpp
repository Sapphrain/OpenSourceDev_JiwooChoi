# include "circle.h"

/* 이 부분에 pp. 21-22 코드 그대로 가져오세요. */
/* 멤버 함수 정의 (생성자, 소멸자) */
Circle::Circle(double rds) : radius(rds) {
    cout << "파라미터 생성자가 호출되었습니다." << endl;
    assert(rds>=0); // 디버깅 용도. false이면 프로그램 종료
}
Circle::Circle() : radius(0.0) {
    cout << "기본 생성자가 호출되었습니다." << endl;
} Circle::Circle(const Circle& circle) : radius(circle.radius) {
    cout << "복사 생성자가 호출되었습니다." << endl;
} Circle::~Circle() {
    cout << "소멸자가 호출되었습니다." << radius << endl;
} 
/* 멤버 함수 정의 (일반 멤버 함수) */

void Circle::setRadius(double value) {
    radius = value;
}

double Circle::getRadius() const {
    return radius;
}
double Circle::getArea() const {
    const double PI = 3.141592;
    return (PI * radius * radius);
}
double Circle::getPerimeter() const {
    const double PI = 3.141592;
    return (2 * PI * radius);
}