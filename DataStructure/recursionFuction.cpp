#include <iostream>
using namespace std;

void PrintStar(int n) {
    if(n == 0)
        return;

    PrintStar(n - 1);
    for(int i = 0; i < 5; i++)
        cout << "*";
    cout << endl;
}

int main() {
    cout << "start" << endl;
    PrintStar(3);
    cout << "end" << endl;
    return 0;
}