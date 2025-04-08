#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin ("triangle.txt"); // 파일 오픈 성공 체크 if문 추가
    if (!fin) {
        cerr << "triangle.txt 오픈 실패";
        return -1;
    }
    else {
        cout << "triangle.txt 오픈 성공" << endl;
    }
    ofstream fout ("triangle_result.txt"); // 여기도 if문 추가
    if (!fout) {
        cerr << "triangle_result.txt 오픈 실패";
        return -1;
    } else {
        cout << "triangle_result.txt 오픈 성공" << endl;
    }

    int num, a, b, c;
    while (fin >> num >> a >> b >> c) {
        if ((a + b <= c) || (b + c <= a) || (c + a <= b))
            fout << num << " X" << endl;
        else if (a == b && b == c)
            fout << num << " O 정삼각형" << endl;
        else if (a == b || b == c || c == a)
            fout << num << " O 이등변삼각형" << endl;
        else
            fout << num << " O" << endl;
    }
    
    cout << "완료. 출력파일을 확인해보세요." << endl;
    
    fin.close();
    fout.close();

    return 0;
}