#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    while(cin >> a >> b >> c) {
    	if(a == "*" || b == "*" || c == "*") break;
    	string first = (a < b ? a : b) < c ? (a < b ? a : b) : c;
    	string third = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    	string second = (a != first && a != third) ? a : (b != first && b != third) ? b : c;
    	cout << first << " " << second << " " << third << endl;
    }
    
    return 0;
}