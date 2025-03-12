#include <iostream>

void PrintStar(int n) {
    if(n == 0)
        return;

    PrintStar(n - 1);
    for(int i = 0; i < 5; i++)
        std::cout << "*";
    std::cout << std::endl;
}

int main() {
    std::cout << "start" << std::endl;
    PrintStar(3);
    std::cout << "end" << std::endl;
    return 0;
}