#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, sum = 0;
    
    ifstream fin; // cin과 통일성 위해서 변수명을 fin 많이 함
    fin.open("numbers.txt"); // 100 200 300 400 500 들어있다고 가정
    
    if (!fin) {
        cerr << "Error opening input file" << endl; // 파일이 없거나 하는 것처럼 에러가 발생할 때 에러 메세지 출력
        return -1;
    }
    
    while(fin >> n) {
        sum += n;
    }

    fin.close(); // 닫아주기

    ofstream fout("numbers_sum.txt");
    if (!fout) { cerr << "Error opening output file" << endl; return -1; }
    fout << "합 = " << sum << endl;

    fout.close();

    cout << "end class ㅋㅋㅋㅋㅋㅋㅋㅋㅋ" << endl;

    return 0;
}