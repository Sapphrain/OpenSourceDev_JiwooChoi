#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    while(true) {
        cout << "동물 입력: ";
        string word;
        cin >> word;

        if(word == "Q" || word == "q") {
            cout << "\tbye" << endl;
            break;
        }

        ifstream fin("animal.txt");
        if(!fin) {
            cerr << "animal.txt 오픈 실패" << endl;
            return -1;
        }

        string kor, eng, answer;
        while(fin >> kor >> eng) {
            if(word == kor) {
                answer = eng;
                break;
            }
            else if(word == eng) {
                answer = kor;
                break;
            }
            else answer = "미등록 단어입니다";
        }
        cout << "\t" << answer << endl;

        fin.close();
    }
    
    return 0;
}