#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("a.txt");
    if(!fin) {
        cerr << "a.txt 오픈 실패" << endl;
        return -1;
    }

    char ch;
    int cnt_Space = 0, cnt_Newline = 0, cnt_Others = 0;
    
    while(fin >> noskipws >> ch) {
    	if(ch == ' ') cnt_Space++;
    	else if(ch == '\n') cnt_Newline++;
    	else cnt_Others++;
    }
    
    cout << cnt_Space << " " << cnt_Newline << " " << cnt_Others << endl;

    fin.close();
    return 0;
}