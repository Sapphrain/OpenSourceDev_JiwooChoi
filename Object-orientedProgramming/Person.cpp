#include <iostream>
#include <string>
using namespace std;
   
class Person {
    private:
        string name;
    public:
        Person(string n);
        ~Person();
        string getName();
        void setName(string newName);
};

Person::Person(string n) : name(n) {}

Person::~Person() {
    cout << "name destroyed" << endl;
}

string Person::getName() {
    return name;
}
void Person::setName(string newName) {
    int len = sizeof("한");
    if (name.substr(0, len) == newName.substr(0, len)) {
        name = newName;
        cout << newName << "(으)로 변경 완료" << endl;
    }
    else {
        cout << "Family name change not allowed." << endl;
    }
}

int main() {
    Person person("고길동");
    cout << "원래 이름: " + person.getName() << endl;
    person.setName("곡식");  // 첫 글자 다름 
    person.setName("고구마");   // 첫 글자 같음 (성공)
    person.setName("박길동");  // 첫 글자 다름
    cout << "최종 이름: " + person.getName() << endl;
 
    return 0;
}